
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_dev {int job_work; int job_spinlock; struct v4l2_m2m_ctx* curr_ctx; } ;
struct v4l2_m2m_ctx {int job_flags; int finished; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_m2m_dev*,struct v4l2_m2m_ctx*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct v4l2_m2m_dev *VAR_2,
    struct v4l2_m2m_ctx *VAR_3)
{
 unsigned long VAR_4;

 FUNC_4(&VAR_2->job_spinlock, VAR_4);
 if (!VAR_2->curr_ctx || VAR_2->curr_ctx != VAR_3) {
  FUNC_5(&VAR_2->job_spinlock, VAR_4);
  FUNC_1("Called by an instance not currently running\n");
  return;
 }

 FUNC_2(&VAR_2->curr_ctx->queue);
 VAR_2->curr_ctx->job_flags &= ~(VAR_0 | VAR_1);
 FUNC_6(&VAR_2->curr_ctx->finished);
 VAR_2->curr_ctx = ((void*)0);

 FUNC_5(&VAR_2->job_spinlock, VAR_4);




 FUNC_0(VAR_2, VAR_3);




 FUNC_3(&VAR_2->job_work);
}
