
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m2m_dev; } ;
struct bdisp_dev {int slock; int irq_queue; TYPE_1__ m2m; int state; int timeout_work; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct bdisp_ctx {TYPE_2__ fh; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct bdisp_ctx*) ;
 int FUNC_1 (int ,struct bdisp_ctx*) ;
 int FUNC_2 (struct bdisp_dev*) ;
 int FUNC_3 (struct bdisp_ctx*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct bdisp_ctx* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{
 struct bdisp_dev *VAR_8 = VAR_7;
 struct bdisp_ctx *VAR_9;

 FUNC_6(&VAR_8->slock);

 FUNC_2(VAR_8);

 FUNC_4(&VAR_8->timeout_work);

 if (!FUNC_8(VAR_2, &VAR_8->state))
  goto isr_unlock;

 if (FUNC_8(VAR_4, &VAR_8->state)) {
  FUNC_5(VAR_3, &VAR_8->state);
  FUNC_10(&VAR_8->irq_queue);
  goto isr_unlock;
 }

 VAR_9 = FUNC_9(VAR_8->m2m.m2m_dev);
 if (!VAR_9 || !VAR_9->fh.m2m_ctx)
  goto isr_unlock;

 FUNC_7(&VAR_8->slock);

 FUNC_3(VAR_9, VAR_5);

 if (FUNC_0(VAR_0, VAR_9)) {
  FUNC_1(VAR_0, VAR_9);
  FUNC_10(&VAR_8->irq_queue);
 }

 return VAR_1;

isr_unlock:
 FUNC_7(&VAR_8->slock);

 return VAR_1;
}
