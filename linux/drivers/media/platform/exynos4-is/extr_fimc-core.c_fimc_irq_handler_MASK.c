
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reqbufs_count; } ;
struct TYPE_3__ {int m2m_dev; } ;
struct fimc_dev {int slock; TYPE_2__ vid_cap; int state; int irq_queue; TYPE_1__ m2m; } ;
struct fimc_ctx {int state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fimc_dev*,int) ;
 int FUNC_1 (struct fimc_dev*) ;
 int FUNC_2 (struct fimc_ctx*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct fimc_ctx* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct fimc_dev *VAR_10 = VAR_9;
 struct fimc_ctx *VAR_11;

 FUNC_1(VAR_10);

 FUNC_4(&VAR_10->slock);

 if (FUNC_6(VAR_4, &VAR_10->state)) {
  if (FUNC_6(VAR_6, &VAR_10->state)) {
   FUNC_3(VAR_5, &VAR_10->state);
   FUNC_9(&VAR_10->irq_queue);
   goto out;
  }
  VAR_11 = FUNC_8(VAR_10->m2m.m2m_dev);
  if (VAR_11 != ((void*)0)) {
   FUNC_5(&VAR_10->slock);
   FUNC_2(VAR_11, VAR_7);

   if (VAR_11->state & VAR_0) {
    VAR_11->state &= ~VAR_0;
    FUNC_9(&VAR_10->irq_queue);
   }
   return VAR_1;
  }
 } else if (FUNC_7(VAR_3, &VAR_10->state)) {
  int VAR_12 = FUNC_7(VAR_2, &VAR_10->state) &&
    VAR_10->vid_cap.reqbufs_count == 1;
  FUNC_0(VAR_10, !VAR_12);
 }
out:
 FUNC_5(&VAR_10->slock);
 return VAR_1;
}
