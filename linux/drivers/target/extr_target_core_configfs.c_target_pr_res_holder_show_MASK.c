
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int emulate_pr; } ;
struct se_device {int dev_reservation_flags; int dev_reservation_lock; TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int transport_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_device* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct se_device*,char*) ;
 int FUNC_5 (struct se_device*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2, char *VAR_3)
{
 struct se_device *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (!VAR_4->dev_attrib.emulate_pr)
  return FUNC_3(VAR_3, "SPC_RESERVATIONS_DISABLED\n");

 if (VAR_4->transport->transport_flags & VAR_1)
  return FUNC_3(VAR_3, "Passthrough\n");

 FUNC_1(&VAR_4->dev_reservation_lock);
 if (VAR_4->dev_reservation_flags & VAR_0)
  VAR_5 = FUNC_4(VAR_4, VAR_3);
 else
  VAR_5 = FUNC_5(VAR_4, VAR_3);
 FUNC_2(&VAR_4->dev_reservation_lock);
 return VAR_5;
}
