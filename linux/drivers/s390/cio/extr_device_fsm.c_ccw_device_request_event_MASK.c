
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int dummy; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;





 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*) ;

__attribute__((used)) static void FUNC_3(struct ccw_device *VAR_0, enum dev_event VAR_1)
{
 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_0);
  break;
 case 130:
  FUNC_0(VAR_0);
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 default:
  break;
 }
}
