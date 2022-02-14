
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_m2m_dev {int job_spinlock; TYPE_1__* m2m_ops; } ;
struct v4l2_m2m_ctx {int job_flags; int queue; int finished; int priv; struct v4l2_m2m_dev* m2m_dev; } ;
struct TYPE_2__ {int (* job_abort ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct v4l2_m2m_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct v4l2_m2m_ctx *VAR_3)
{
 struct v4l2_m2m_dev *VAR_4;
 unsigned long VAR_5;

 VAR_4 = VAR_3->m2m_dev;
 FUNC_2(&VAR_4->job_spinlock, VAR_5);

 VAR_3->job_flags |= VAR_0;
 if (VAR_3->job_flags & VAR_2) {
  FUNC_3(&VAR_4->job_spinlock, VAR_5);
  if (VAR_4->m2m_ops->job_abort)
   VAR_4->m2m_ops->job_abort(VAR_3->priv);
  FUNC_0("m2m_ctx %p running, will wait to complete\n", VAR_3);
  FUNC_5(VAR_3->finished,
    !(VAR_3->job_flags & VAR_2));
 } else if (VAR_3->job_flags & VAR_1) {
  FUNC_1(&VAR_3->queue);
  VAR_3->job_flags &= ~(VAR_1 | VAR_2);
  FUNC_3(&VAR_4->job_spinlock, VAR_5);
  FUNC_0("m2m_ctx: %p had been on queue and was removed\n",
   VAR_3);
 } else {

  FUNC_3(&VAR_4->job_spinlock, VAR_5);
 }
}
