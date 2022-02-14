
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee1394_device_id {int dummy; } ;
struct fw_unit {int dummy; } ;
struct fw_serial {int dummy; } ;
struct TYPE_2__ {int card; } ;


 TYPE_1__* FUNC_0 (struct fw_unit*) ;
 int FUNC_1 (struct fw_serial*,struct fw_unit*) ;
 int FUNC_2 (struct fw_unit*) ;
 int VAR_0 ;
 struct fw_serial* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fw_unit *VAR_1,
     const struct ieee1394_device_id *VAR_2)
{
 struct fw_serial *VAR_3;
 int VAR_4;

 FUNC_4(&VAR_0);
 VAR_3 = FUNC_3(FUNC_0(VAR_1)->card);
 if (!VAR_3)
  VAR_4 = FUNC_2(VAR_1);
 else
  VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_5(&VAR_0);
 return VAR_4;
}
