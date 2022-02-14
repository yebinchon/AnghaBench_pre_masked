
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_context {TYPE_2__* mc_first; TYPE_1__* mc_last; } ;
struct pvr2_channel {int * hdw; TYPE_2__* mc_next; TYPE_1__* mc_prev; scalar_t__ input_mask; struct pvr2_context* mc_head; } ;
struct TYPE_4__ {TYPE_1__* mc_prev; } ;
struct TYPE_3__ {TYPE_2__* mc_next; } ;


 int FUNC_0 (struct pvr2_channel*) ;
 int FUNC_1 (struct pvr2_context*) ;
 int FUNC_2 (struct pvr2_context*) ;
 int FUNC_3 (struct pvr2_context*) ;

void FUNC_4(struct pvr2_channel *VAR_0)
{
 struct pvr2_context *VAR_1 = VAR_0->mc_head;
 FUNC_1(VAR_1);
 VAR_0->input_mask = 0;
 FUNC_0(VAR_0);
 FUNC_3(VAR_1);
 if (VAR_0->mc_next) {
  VAR_0->mc_next->mc_prev = VAR_0->mc_prev;
 } else {
  VAR_1->mc_last = VAR_0->mc_prev;
 }
 if (VAR_0->mc_prev) {
  VAR_0->mc_prev->mc_next = VAR_0->mc_next;
 } else {
  VAR_1->mc_first = VAR_0->mc_next;
 }
 VAR_0->hdw = ((void*)0);
 FUNC_2(VAR_1);
}
