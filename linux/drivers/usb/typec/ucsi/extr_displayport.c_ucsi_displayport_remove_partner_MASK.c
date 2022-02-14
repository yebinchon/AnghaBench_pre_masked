
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; scalar_t__ conf; } ;
struct ucsi_dp {int initialized; TYPE_1__ data; } ;
struct typec_altmode {int dummy; } ;


 struct ucsi_dp* FUNC_0 (struct typec_altmode*) ;

void FUNC_1(struct typec_altmode *VAR_0)
{
 struct ucsi_dp *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->data.conf = 0;
 VAR_1->data.status = 0;
 VAR_1->initialized = 0;
}
