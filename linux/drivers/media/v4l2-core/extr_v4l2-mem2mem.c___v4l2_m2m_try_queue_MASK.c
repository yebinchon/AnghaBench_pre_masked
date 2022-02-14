
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_m2m_dev {int job_spinlock; int job_queue; TYPE_3__* m2m_ops; } ;
struct TYPE_6__ {int streaming; } ;
struct TYPE_10__ {int rdy_spinlock; int buffered; int rdy_queue; TYPE_1__ q; } ;
struct TYPE_7__ {int streaming; } ;
struct TYPE_9__ {int rdy_spinlock; int buffered; int rdy_queue; TYPE_2__ q; } ;
struct v4l2_m2m_ctx {int job_flags; TYPE_5__ out_q_ctx; TYPE_4__ cap_q_ctx; int queue; int priv; } ;
struct TYPE_8__ {int (* job_ready ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct v4l2_m2m_dev *VAR_2,
     struct v4l2_m2m_ctx *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 FUNC_0("Trying to schedule a job for m2m_ctx: %p\n", VAR_3);

 if (!VAR_3->out_q_ctx.q.streaming
     || !VAR_3->cap_q_ctx.q.streaming) {
  FUNC_0("Streaming needs to be on for both queues\n");
  return;
 }

 FUNC_3(&VAR_2->job_spinlock, VAR_4);


 if (VAR_3->job_flags & VAR_0) {
  FUNC_0("Aborted context\n");
  goto job_unlock;
 }

 if (VAR_3->job_flags & VAR_1) {
  FUNC_0("On job queue already\n");
  goto job_unlock;
 }

 FUNC_3(&VAR_3->out_q_ctx.rdy_spinlock, VAR_5);
 if (FUNC_2(&VAR_3->out_q_ctx.rdy_queue)
     && !VAR_3->out_q_ctx.buffered) {
  FUNC_0("No input buffers available\n");
  goto out_unlock;
 }
 FUNC_3(&VAR_3->cap_q_ctx.rdy_spinlock, VAR_6);
 if (FUNC_2(&VAR_3->cap_q_ctx.rdy_queue)
     && !VAR_3->cap_q_ctx.buffered) {
  FUNC_0("No output buffers available\n");
  goto cap_unlock;
 }
 FUNC_4(&VAR_3->cap_q_ctx.rdy_spinlock, VAR_6);
 FUNC_4(&VAR_3->out_q_ctx.rdy_spinlock, VAR_5);

 if (VAR_2->m2m_ops->job_ready
  && (!VAR_2->m2m_ops->job_ready(VAR_3->priv))) {
  FUNC_0("Driver not ready\n");
  goto job_unlock;
 }

 FUNC_1(&VAR_3->queue, &VAR_2->job_queue);
 VAR_3->job_flags |= VAR_1;

 FUNC_4(&VAR_2->job_spinlock, VAR_4);
 return;

cap_unlock:
 FUNC_4(&VAR_3->cap_q_ctx.rdy_spinlock, VAR_6);
out_unlock:
 FUNC_4(&VAR_3->out_q_ctx.rdy_spinlock, VAR_5);
job_unlock:
 FUNC_4(&VAR_2->job_spinlock, VAR_4);
}
