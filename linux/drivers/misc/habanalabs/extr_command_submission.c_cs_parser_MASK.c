
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hl_fpriv {struct hl_device* hdev; } ;
struct hl_device {TYPE_3__* asic_funcs; } ;
struct hl_cs_parser {int patched_cb_size; TYPE_4__* patched_cb; scalar_t__ ext_queue; int user_cb_size; TYPE_5__* user_cb; int * job_userptr_list; int hw_queue_id; int job_id; int cs_sequence; int ctx_id; } ;
struct hl_cs_job {TYPE_5__* user_cb; TYPE_4__* patched_cb; int job_cb_size; scalar_t__ ext_queue; int user_cb_size; int userptr_list; int hw_queue_id; int id; TYPE_2__* cs; } ;
struct TYPE_10__ {int lock; int cs_cnt; } ;
struct TYPE_9__ {int lock; int cs_cnt; } ;
struct TYPE_8__ {int (* cs_parser ) (struct hl_device*,struct hl_cs_parser*) ;} ;
struct TYPE_7__ {int sequence; TYPE_1__* ctx; } ;
struct TYPE_6__ {int asid; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hl_device*,struct hl_cs_parser*) ;

__attribute__((used)) static int FUNC_4(struct hl_fpriv *VAR_0, struct hl_cs_job *VAR_1)
{
 struct hl_device *VAR_2 = VAR_0->hdev;
 struct hl_cs_parser VAR_3;
 int VAR_4;

 VAR_3.ctx_id = VAR_1->cs->ctx->asid;
 VAR_3.cs_sequence = VAR_1->cs->sequence;
 VAR_3.job_id = VAR_1->id;

 VAR_3.hw_queue_id = VAR_1->hw_queue_id;
 VAR_3.job_userptr_list = &VAR_1->userptr_list;
 VAR_3.patched_cb = ((void*)0);
 VAR_3.user_cb = VAR_1->user_cb;
 VAR_3.user_cb_size = VAR_1->user_cb_size;
 VAR_3.ext_queue = VAR_1->ext_queue;
 VAR_1->patched_cb = ((void*)0);

 VAR_4 = VAR_2->asic_funcs->cs_parser(VAR_2, &VAR_3);
 if (VAR_1->ext_queue) {
  if (!VAR_4) {
   VAR_1->patched_cb = VAR_3.patched_cb;
   VAR_1->job_cb_size = VAR_3.patched_cb_size;

   FUNC_1(&VAR_1->patched_cb->lock);
   VAR_1->patched_cb->cs_cnt++;
   FUNC_2(&VAR_1->patched_cb->lock);
  }






  FUNC_1(&VAR_1->user_cb->lock);
  VAR_1->user_cb->cs_cnt--;
  FUNC_2(&VAR_1->user_cb->lock);
  FUNC_0(VAR_1->user_cb);
  VAR_1->user_cb = ((void*)0);
 }

 return VAR_4;
}
