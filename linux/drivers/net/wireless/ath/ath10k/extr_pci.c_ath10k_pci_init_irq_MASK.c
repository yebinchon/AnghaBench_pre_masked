
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ oper_irq_mode; int pdev; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ath10k*,char*,scalar_t__) ;
 int FUNC_1 (struct ath10k*) ;
 scalar_t__ VAR_7 ;
 struct ath10k_pci* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,scalar_t__,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_8)
{
 struct ath10k_pci *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;

 FUNC_1(VAR_8);

 if (VAR_7 != VAR_0)
  FUNC_0(VAR_8, "limiting irq mode to: %d\n",
       VAR_7);


 if (VAR_7 != VAR_1) {
  VAR_9->oper_irq_mode = VAR_2;
  VAR_10 = FUNC_4(VAR_9->pdev);
  if (VAR_10 == 0)
   return 0;


 }
 VAR_9->oper_irq_mode = VAR_1;

 FUNC_3(VAR_8, VAR_6 + VAR_4,
      VAR_5 | VAR_3);

 return 0;
}
