
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct typec_altmode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* partner; } ;
struct TYPE_3__ {struct typec_altmode const adev; } ;


 TYPE_2__* FUNC_0 (struct typec_altmode*) ;

const struct typec_altmode *
FUNC_1(struct typec_altmode *VAR_0)
{
 return VAR_0 ? &FUNC_0(VAR_0)->partner->adev : ((void*)0);
}
