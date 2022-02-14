
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m2m_dev; } ;
struct gsc_dev {int slock; int irq_queue; TYPE_1__ m2m; int state; } ;
struct gsc_ctx {int state; int m2m_ctx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gsc_dev*,int) ;
 int FUNC_1 (struct gsc_dev*,int) ;
 int FUNC_2 (struct gsc_dev*) ;
 int FUNC_3 (struct gsc_ctx*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct gsc_ctx* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_7, void *VAR_8)
{
 struct gsc_dev *VAR_9 = VAR_8;
 struct gsc_ctx *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9);
 FUNC_0(VAR_9, VAR_11);

 if (VAR_11 == VAR_1) {
  FUNC_4("Local path input over-run interrupt has occurred!\n");
  return VAR_2;
 }

 FUNC_6(&VAR_9->slock);

 if (FUNC_8(VAR_3, &VAR_9->state)) {

  FUNC_1(VAR_9, 0);

  if (FUNC_8(VAR_5, &VAR_9->state)) {
   FUNC_5(VAR_4, &VAR_9->state);
   FUNC_10(&VAR_9->irq_queue);
   goto isr_unlock;
  }
  VAR_10 = FUNC_9(VAR_9->m2m.m2m_dev);

  if (!VAR_10 || !VAR_10->m2m_ctx)
   goto isr_unlock;

  FUNC_7(&VAR_9->slock);
  FUNC_3(VAR_10, VAR_6);


  if (VAR_10->state & VAR_0) {
   VAR_10->state &= ~VAR_0;
   FUNC_10(&VAR_9->irq_queue);
  }
  return VAR_2;
 }

isr_unlock:
 FUNC_7(&VAR_9->slock);
 return VAR_2;
}
