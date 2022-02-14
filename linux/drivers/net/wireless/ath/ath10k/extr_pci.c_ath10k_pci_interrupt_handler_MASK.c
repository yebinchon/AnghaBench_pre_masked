
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ oper_irq_mode; } ;
struct ath10k {int napi; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 scalar_t__ FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 struct ath10k_pci* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct ath10k *VAR_5 = VAR_4;
 struct ath10k_pci *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 if (FUNC_2(VAR_5))
  return VAR_2;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_5, "failed to wake device up on irq: %d\n", VAR_7);
  return VAR_2;
 }

 if ((VAR_6->oper_irq_mode == VAR_0) &&
     !FUNC_4(VAR_5))
  return VAR_2;

 FUNC_0(VAR_5);
 FUNC_3(VAR_5);
 FUNC_7(&VAR_5->napi);

 return VAR_1;
}
