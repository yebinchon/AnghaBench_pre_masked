
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {scalar_t__ irq_wakeup; int wake_by_wifi; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct mwifiex_adapter *VAR_0)
{

 if (VAR_0->irq_wakeup >= 0) {
  VAR_0->wake_by_wifi = 0;
  FUNC_0(VAR_0->irq_wakeup);
  FUNC_1(VAR_0->irq_wakeup);
 }
}
