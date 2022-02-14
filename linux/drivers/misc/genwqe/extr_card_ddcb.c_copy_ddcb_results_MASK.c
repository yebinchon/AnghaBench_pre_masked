
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ddcb_prev; int ddcb_finished; } ;
struct TYPE_3__ {void* retc; int progress; void* attn; void* cmplt_ts; void* deque_ts; void* vcrc; int * asv; } ;
struct ddcb_requ {size_t num; TYPE_2__ debug_data; TYPE_1__ cmd; struct ddcb_queue* queue; } ;
struct ddcb_queue {int ddcb_max; struct ddcb* ddcb_vaddr; } ;
struct ddcb {int retc_16; int progress_32; int attn_16; int cmplt_ts_64; int deque_ts_64; int vcrc_16; struct ddcb* asv; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ddcb_requ*) ;
 int FUNC_4 (int *,struct ddcb*,int) ;

__attribute__((used)) static void FUNC_5(struct ddcb_requ *VAR_1, int VAR_2)
{
 struct ddcb_queue *VAR_3 = VAR_1->queue;
 struct ddcb *VAR_4 = &VAR_3->ddcb_vaddr[VAR_1->num];

 FUNC_4(&VAR_1->cmd.asv[0], &VAR_4->asv[0], VAR_0);


 VAR_1->cmd.vcrc = FUNC_0(VAR_4->vcrc_16);
 VAR_1->cmd.deque_ts = FUNC_2(VAR_4->deque_ts_64);
 VAR_1->cmd.cmplt_ts = FUNC_2(VAR_4->cmplt_ts_64);

 VAR_1->cmd.attn = FUNC_0(VAR_4->attn_16);
 VAR_1->cmd.progress = FUNC_1(VAR_4->progress_32);
 VAR_1->cmd.retc = FUNC_0(VAR_4->retc_16);

 if (FUNC_3(VAR_1)) {
  int VAR_5 = (VAR_2 == 0) ?
   VAR_3->ddcb_max - 1 : VAR_2 - 1;
  struct ddcb *VAR_6 = &VAR_3->ddcb_vaddr[VAR_5];

  FUNC_4(&VAR_1->debug_data.ddcb_finished, VAR_4,
         sizeof(VAR_1->debug_data.ddcb_finished));
  FUNC_4(&VAR_1->debug_data.ddcb_prev, VAR_6,
         sizeof(VAR_1->debug_data.ddcb_prev));
 }
}
