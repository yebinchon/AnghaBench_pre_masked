
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_snoc {TYPE_1__* ce_irqs; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int irq_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int,int) ;
 int VAR_2 ;
 struct ath10k_snoc* FUNC_1 (struct ath10k*) ;
 int * VAR_3 ;
 int FUNC_2 (int ,struct ath10k*) ;
 int FUNC_3 (int ,int ,int,int ,struct ath10k*) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_4)
{
 struct ath10k_snoc *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = VAR_1;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_3(VAR_5->ce_irqs[VAR_8].irq_line,
      VAR_2,
      VAR_6, VAR_3[VAR_8], VAR_4);
  if (VAR_7) {
   FUNC_0(VAR_4,
       "failed to register IRQ handler for CE %d: %d",
       VAR_8, VAR_7);
   goto err_irq;
  }
 }

 return 0;

err_irq:
 for (VAR_8 -= 1; VAR_8 >= 0; VAR_8--)
  FUNC_2(VAR_5->ce_irqs[VAR_8].irq_line, VAR_4);

 return VAR_7;
}
