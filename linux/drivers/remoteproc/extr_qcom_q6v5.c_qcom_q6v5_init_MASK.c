
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dummy; } ;
struct qcom_q6v5 {int crash_reason; void (* handover ) (struct qcom_q6v5*) ;scalar_t__ wdog_irq; scalar_t__ fatal_irq; scalar_t__ ready_irq; scalar_t__ handover_irq; scalar_t__ stop_irq; int state; int stop_bit; int stop_done; int start_done; int * dev; struct rproc* rproc; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int *,int ,int,char*,struct qcom_q6v5*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct platform_device*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,char*,int *) ;

int FUNC_8(struct qcom_q6v5 *VAR_7, struct platform_device *VAR_8,
     struct rproc *VAR_9, int VAR_10,
     void (*VAR_11)(struct qcom_q6v5 *VAR_12))
{
 int VAR_13;

 VAR_7->rproc = VAR_9;
 VAR_7->dev = &VAR_8->dev;
 VAR_7->crash_reason = VAR_10;
 VAR_7->handover = VAR_11;

 FUNC_5(&VAR_7->start_done);
 FUNC_5(&VAR_7->stop_done);

 VAR_7->wdog_irq = FUNC_6(VAR_8, "wdog");
 if (VAR_7->wdog_irq < 0)
  return VAR_7->wdog_irq;

 VAR_13 = FUNC_3(&VAR_8->dev, VAR_7->wdog_irq,
     ((void*)0), VAR_6,
     VAR_1 | VAR_0,
     "q6v5 wdog", VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_8->dev, "failed to acquire wdog IRQ\n");
  return VAR_13;
 }

 VAR_7->fatal_irq = FUNC_6(VAR_8, "fatal");
 if (VAR_7->fatal_irq < 0)
  return VAR_7->fatal_irq;

 VAR_13 = FUNC_3(&VAR_8->dev, VAR_7->fatal_irq,
     ((void*)0), VAR_2,
     VAR_1 | VAR_0,
     "q6v5 fatal", VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_8->dev, "failed to acquire fatal IRQ\n");
  return VAR_13;
 }

 VAR_7->ready_irq = FUNC_6(VAR_8, "ready");
 if (VAR_7->ready_irq < 0)
  return VAR_7->ready_irq;

 VAR_13 = FUNC_3(&VAR_8->dev, VAR_7->ready_irq,
     ((void*)0), VAR_4,
     VAR_1 | VAR_0,
     "q6v5 ready", VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_8->dev, "failed to acquire ready IRQ\n");
  return VAR_13;
 }

 VAR_7->handover_irq = FUNC_6(VAR_8, "handover");
 if (VAR_7->handover_irq < 0)
  return VAR_7->handover_irq;

 VAR_13 = FUNC_3(&VAR_8->dev, VAR_7->handover_irq,
     ((void*)0), VAR_3,
     VAR_1 | VAR_0,
     "q6v5 handover", VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_8->dev, "failed to acquire handover IRQ\n");
  return VAR_13;
 }
 FUNC_4(VAR_7->handover_irq);

 VAR_7->stop_irq = FUNC_6(VAR_8, "stop-ack");
 if (VAR_7->stop_irq < 0)
  return VAR_7->stop_irq;

 VAR_13 = FUNC_3(&VAR_8->dev, VAR_7->stop_irq,
     ((void*)0), VAR_5,
     VAR_1 | VAR_0,
     "q6v5 stop", VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_8->dev, "failed to acquire stop-ack IRQ\n");
  return VAR_13;
 }

 VAR_7->state = FUNC_7(&VAR_8->dev, "stop", &VAR_7->stop_bit);
 if (FUNC_0(VAR_7->state)) {
  FUNC_2(&VAR_8->dev, "failed to acquire stop state\n");
  return FUNC_1(VAR_7->state);
 }

 return 0;
}
