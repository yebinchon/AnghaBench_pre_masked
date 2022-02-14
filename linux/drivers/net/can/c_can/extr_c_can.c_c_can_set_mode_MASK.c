
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct c_can_priv {int dummy; } ;
typedef enum can_mode { ____Placeholder_can_mode } can_mode ;



 int VAR_0 ;
 int FUNC_0 (struct c_can_priv*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, enum can_mode VAR_2)
{
 struct c_can_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4)
   return VAR_4;
  FUNC_3(VAR_1);
  FUNC_0(VAR_3, 1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
