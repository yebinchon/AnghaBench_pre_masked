
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter_reply_queue {scalar_t__ irq_poll_scheduled; struct MPT3SAS_ADAPTER* ioc; } ;
struct MPT3SAS_ADAPTER {scalar_t__ mask_interrupts; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct adapter_reply_queue*) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_2, void *VAR_3)
{
 struct adapter_reply_queue *VAR_4 = VAR_3;
 struct MPT3SAS_ADAPTER *VAR_5 = VAR_4->ioc;

 if (VAR_5->mask_interrupts)
  return VAR_1;
 if (VAR_4->irq_poll_scheduled)
  return VAR_0;
 return ((FUNC_0(VAR_4) > 0) ?
   VAR_0 : VAR_1);
}
