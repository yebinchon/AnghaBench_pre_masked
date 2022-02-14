
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_ops {int device_run; } ;
struct v4l2_m2m_dev {int job_work; int job_spinlock; int job_queue; struct v4l2_m2m_ops const* m2m_ops; int * curr_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_m2m_dev* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct v4l2_m2m_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

struct v4l2_m2m_dev *FUNC_6(const struct v4l2_m2m_ops *VAR_4)
{
 struct v4l2_m2m_dev *VAR_5;

 if (!VAR_4 || FUNC_3(!VAR_4->device_run))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(sizeof *VAR_5, VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_5->curr_ctx = ((void*)0);
 VAR_5->m2m_ops = VAR_4;
 FUNC_1(&VAR_5->job_queue);
 FUNC_5(&VAR_5->job_spinlock);
 FUNC_2(&VAR_5->job_work, VAR_3);

 return VAR_5;
}
