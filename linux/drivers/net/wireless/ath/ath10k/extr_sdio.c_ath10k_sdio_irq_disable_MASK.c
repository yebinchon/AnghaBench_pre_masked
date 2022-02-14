
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct completion {int dummy; } ;
struct ath10k_sdio_irq_enable_regs {int dummy; } ;
struct ath10k_sdio_irq_data {int mtx; struct ath10k_sdio_irq_enable_regs* irq_en_reg; } ;
struct ath10k_sdio {int func; int wr_async_work; int workqueue; struct ath10k_sdio_irq_data irq_data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,struct sk_buff*,struct completion*,int,int ) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (struct completion*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,struct ath10k_sdio_irq_enable_regs*,int) ;
 int FUNC_7 (struct ath10k_sdio_irq_enable_regs*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct completion*,int ) ;

__attribute__((used)) static void FUNC_16(struct ath10k *VAR_2)
{
 struct ath10k_sdio *VAR_3 = FUNC_1(VAR_2);
 struct ath10k_sdio_irq_data *VAR_4 = &VAR_3->irq_data;
 struct ath10k_sdio_irq_enable_regs *VAR_5 = VAR_4->irq_en_reg;
 struct sk_buff *VAR_6;
 struct completion VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_5));
 if (!VAR_6)
  return;

 FUNC_8(&VAR_4->mtx);

 FUNC_7(VAR_5, 0, sizeof(*VAR_5));
 FUNC_6(VAR_6->data, VAR_5, sizeof(*VAR_5));
 FUNC_14(VAR_6, sizeof(*VAR_5));

 FUNC_9(&VAR_4->mtx);

 FUNC_4(&VAR_7);
 VAR_8 = FUNC_0(VAR_2, VAR_0,
      VAR_6, &VAR_7, 0, 0);
 if (VAR_8)
  goto out;

 FUNC_10(VAR_3->workqueue, &VAR_3->wr_async_work);




 VAR_8 = FUNC_15(&VAR_7,
       VAR_1);
 if (!VAR_8)
  FUNC_2(VAR_2, "sdio irq disable request timed out\n");

 FUNC_11(VAR_3->func);

 VAR_8 = FUNC_13(VAR_3->func);
 if (VAR_8)
  FUNC_2(VAR_2, "failed to release sdio interrupt: %d\n", VAR_8);

 FUNC_12(VAR_3->func);

out:
 FUNC_5(VAR_6);
}
