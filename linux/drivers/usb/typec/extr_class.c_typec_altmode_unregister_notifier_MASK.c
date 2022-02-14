
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_altmode {int dev; } ;
struct notifier_block {int dummy; } ;
struct altmode {int nh; } ;


 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (int *) ;
 struct altmode* FUNC_2 (struct typec_altmode*) ;

void FUNC_3(struct typec_altmode *VAR_0,
           struct notifier_block *VAR_1)
{
 struct altmode *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->nh, VAR_1);
 FUNC_1(&VAR_0->dev);
}
