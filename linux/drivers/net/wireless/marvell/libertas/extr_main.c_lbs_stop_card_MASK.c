
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ reg_state; } ;
struct lbs_private {struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

void FUNC_5(struct lbs_private *VAR_1)
{
 struct net_device *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = VAR_1->dev;



 if (VAR_2->reg_state != VAR_0)
  return;

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(VAR_2);
}
