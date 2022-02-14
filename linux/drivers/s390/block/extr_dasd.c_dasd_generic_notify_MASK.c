
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct ccw_device {int dummy; } ;






 scalar_t__ FUNC_0 (struct dasd_device*) ;
 struct dasd_device* FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (struct dasd_device*) ;

int FUNC_7(struct ccw_device *VAR_0, int VAR_1)
{
 struct dasd_device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2))
  return 0;
 VAR_3 = 0;
 switch (VAR_1) {
 case 130:
 case 131:
 case 129:
  FUNC_5(VAR_2);
  VAR_3 = FUNC_2(VAR_2);
  break;
 case 128:
  VAR_3 = 1;
  if (FUNC_4(VAR_2))
   VAR_3 = FUNC_3(VAR_2);
  break;
 }
 FUNC_6(VAR_2);
 return VAR_3;
}
