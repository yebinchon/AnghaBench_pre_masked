
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct typec_altmode {TYPE_2__* ops; } ;
struct TYPE_6__ {TYPE_1__* partner; } ;
struct TYPE_5__ {int (* attention ) (struct typec_altmode*,int ) ;} ;
struct TYPE_4__ {struct typec_altmode adev; } ;


 int FUNC_0 (struct typec_altmode*,int ) ;
 TYPE_3__* FUNC_1 (struct typec_altmode*) ;

void FUNC_2(struct typec_altmode *VAR_0, u32 VAR_1)
{
 struct typec_altmode *VAR_2 = &FUNC_1(VAR_0)->partner->adev;

 if (VAR_2->ops && VAR_2->ops->attention)
  VAR_2->ops->attention(VAR_2, VAR_1);
}
