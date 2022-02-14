
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int emulate_pr; } ;
struct se_device {int dev_reservation_flags; TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int transport_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_device* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_2, char *VAR_3)
{
 struct se_device *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4->dev_attrib.emulate_pr)
  return FUNC_1(VAR_3, "SPC_RESERVATIONS_DISABLED\n");
 if (VAR_4->transport->transport_flags & VAR_1)
  return FUNC_1(VAR_3, "SPC_PASSTHROUGH\n");
 if (VAR_4->dev_reservation_flags & VAR_0)
  return FUNC_1(VAR_3, "SPC2_RESERVATIONS\n");

 return FUNC_1(VAR_3, "SPC3_PERSISTENT_RESERVATIONS\n");
}
