
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct typec_altmode {TYPE_1__ dev; } ;
struct dp_altmode {int work; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 struct dp_altmode* FUNC_2 (struct typec_altmode*) ;

void FUNC_3(struct typec_altmode *VAR_1)
{
 struct dp_altmode *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_1->dev.kobj, &VAR_0);
 FUNC_0(&VAR_2->work);
}
