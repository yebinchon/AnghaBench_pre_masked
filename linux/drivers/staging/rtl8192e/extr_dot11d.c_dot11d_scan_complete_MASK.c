
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int dummy; } ;
struct rt_dot11d_info {int state; } ;





 struct rt_dot11d_info* FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (struct rtllib_device*) ;

void FUNC_2(struct rtllib_device *VAR_0)
{
 struct rt_dot11d_info *VAR_1 = FUNC_0(VAR_0);

 switch (VAR_1->state) {
 case 129:
  VAR_1->state = 130;
  break;
 case 130:
  FUNC_1(VAR_0);
  break;
 case 128:
  break;
 }
}
