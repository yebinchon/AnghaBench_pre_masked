
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_ctx {scalar_t__ q_lock; } ;
struct v4l2_fh {struct v4l2_m2m_ctx* m2m_ctx; } ;
struct file {struct v4l2_fh* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct file*,struct v4l2_m2m_ctx*,int *) ;

__poll_t FUNC_3(struct file *VAR_0, poll_table *VAR_1)
{
 struct v4l2_fh *VAR_2 = VAR_0->private_data;
 struct v4l2_m2m_ctx *VAR_3 = VAR_2->m2m_ctx;
 __poll_t VAR_4;

 if (VAR_3->q_lock)
  FUNC_0(VAR_3->q_lock);

 VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_1);

 if (VAR_3->q_lock)
  FUNC_1(VAR_3->q_lock);

 return VAR_4;
}
