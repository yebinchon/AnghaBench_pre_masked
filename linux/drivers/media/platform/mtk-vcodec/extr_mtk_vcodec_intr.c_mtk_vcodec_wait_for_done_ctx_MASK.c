
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct mtk_vcodec_ctx {scalar_t__ int_type; int int_cond; int type; int id; int queue; } ;


 long VAR_0 ;
 long FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,int ,int ,int,unsigned int,scalar_t__,...) ;
 long FUNC_2 (int ,int ,long) ;

int FUNC_3(struct mtk_vcodec_ctx *VAR_1, int VAR_2,
     unsigned int VAR_3)
{
 wait_queue_head_t *VAR_4;
 long VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_4 = (wait_queue_head_t *)&VAR_1->queue;
 VAR_5 = FUNC_0(VAR_3);

 VAR_6 = FUNC_2(*VAR_4,
    VAR_1->int_cond,
    VAR_5);

 if (!VAR_6) {
  VAR_7 = -1;
  FUNC_1("[%d] cmd=%d, ctx->type=%d, wait_event_interruptible_timeout time=%ums out %d %d!",
    VAR_1->id, VAR_1->type, VAR_2, VAR_3,
    VAR_1->int_cond, VAR_1->int_type);
 } else if (-VAR_0 == VAR_6) {
  FUNC_1("[%d] cmd=%d, ctx->type=%d, wait_event_interruptible_timeout interrupted by a signal %d %d",
    VAR_1->id, VAR_1->type, VAR_2, VAR_1->int_cond,
    VAR_1->int_type);
  VAR_7 = -1;
 }

 VAR_1->int_cond = 0;
 VAR_1->int_type = 0;

 return VAR_7;
}
