
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_queue_ctx {int rdy_spinlock; scalar_t__ num_rdy; int rdy_queue; int q; } ;
struct v4l2_m2m_dev {int job_spinlock; struct v4l2_m2m_ctx* curr_ctx; } ;
struct v4l2_m2m_ctx {int job_flags; int finished; int queue; struct v4l2_m2m_dev* m2m_dev; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct v4l2_m2m_queue_ctx* FUNC_1 (struct v4l2_m2m_ctx*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct v4l2_m2m_ctx*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct file *VAR_1, struct v4l2_m2m_ctx *VAR_2,
         enum v4l2_buf_type VAR_3)
{
 struct v4l2_m2m_dev *VAR_4;
 struct v4l2_m2m_queue_ctx *VAR_5;
 unsigned long VAR_6, VAR_7;
 int VAR_8;


 FUNC_5(VAR_2);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_8 = FUNC_6(&VAR_5->q, VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_4 = VAR_2->m2m_dev;
 FUNC_3(&VAR_4->job_spinlock, VAR_6);

 if (VAR_2->job_flags & VAR_0)
  FUNC_2(&VAR_2->queue);
 VAR_2->job_flags = 0;

 FUNC_3(&VAR_5->rdy_spinlock, VAR_7);


 FUNC_0(&VAR_5->rdy_queue);
 VAR_5->num_rdy = 0;
 FUNC_4(&VAR_5->rdy_spinlock, VAR_7);

 if (VAR_4->curr_ctx == VAR_2) {
  VAR_4->curr_ctx = ((void*)0);
  FUNC_7(&VAR_2->finished);
 }
 FUNC_4(&VAR_4->job_spinlock, VAR_6);

 return 0;
}
