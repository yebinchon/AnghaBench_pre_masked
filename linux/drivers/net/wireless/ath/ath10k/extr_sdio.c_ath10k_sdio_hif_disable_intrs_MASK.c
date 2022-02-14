
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_sdio_irq_enable_regs {int int_status_en; } ;
struct ath10k_sdio_irq_data {int mtx; struct ath10k_sdio_irq_enable_regs* irq_en_reg; } ;
struct ath10k_sdio {struct ath10k_sdio_irq_data irq_data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct ath10k_sdio* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int ,int *,int) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k_sdio_irq_enable_regs*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1)
{
 struct ath10k_sdio *VAR_2 = FUNC_0(VAR_1);
 struct ath10k_sdio_irq_data *VAR_3 = &VAR_2->irq_data;
 struct ath10k_sdio_irq_enable_regs *VAR_4 = VAR_3->irq_en_reg;
 int VAR_5;

 FUNC_4(&VAR_3->mtx);

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_5 = FUNC_1(VAR_1, VAR_0,
    &VAR_4->int_status_en, sizeof(*VAR_4));
 if (VAR_5)
  FUNC_2(VAR_1, "unable to disable sdio interrupts: %d\n", VAR_5);

 FUNC_5(&VAR_3->mtx);

 return VAR_5;
}
