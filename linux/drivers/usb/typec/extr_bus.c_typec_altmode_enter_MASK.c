
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct typec_altmode {TYPE_1__* ops; scalar_t__ active; } ;
struct altmode {struct typec_altmode adev; } ;
struct TYPE_4__ {struct altmode* partner; } ;
struct TYPE_3__ {int (* enter ) (struct typec_altmode*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct typec_altmode*) ;
 TYPE_2__* FUNC_1 (struct typec_altmode*) ;
 int FUNC_2 (struct typec_altmode*,int ) ;

int FUNC_3(struct typec_altmode *VAR_2)
{
 struct altmode *VAR_3 = FUNC_1(VAR_2)->partner;
 struct typec_altmode *VAR_4 = &VAR_3->adev;
 int VAR_5;

 if (!VAR_2 || VAR_2->active)
  return 0;

 if (!VAR_4->ops || !VAR_4->ops->enter)
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (VAR_5)
  return VAR_5;


 return VAR_4->ops->enter(VAR_4);
}
