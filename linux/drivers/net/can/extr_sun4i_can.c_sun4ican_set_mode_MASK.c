
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, enum can_mode VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3) {
   FUNC_0(VAR_1, "starting CAN controller failed!\n");
   return VAR_3;
  }
  if (FUNC_1(VAR_1))
   FUNC_2(VAR_1);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
