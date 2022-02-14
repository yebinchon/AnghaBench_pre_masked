
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, enum can_mode VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
