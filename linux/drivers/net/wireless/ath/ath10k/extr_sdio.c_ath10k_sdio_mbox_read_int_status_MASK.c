
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ath10k_sdio_irq_proc_regs {int host_int_status; int rx_lookahead_valid; int * rx_lookahead; } ;
struct ath10k_sdio_irq_enable_regs {int int_status_en; } ;
struct ath10k_sdio_irq_data {int mtx; struct ath10k_sdio_irq_enable_regs* irq_en_reg; struct ath10k_sdio_irq_proc_regs* irq_proc_reg; } ;
struct ath10k_sdio {struct ath10k_sdio_irq_data irq_data; } ;
struct ath10k {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,struct ath10k_sdio_irq_proc_regs*,int) ;
 int FUNC_3 (struct ath10k*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_3,
         u8 *VAR_4,
         u32 *VAR_5)
{
 struct ath10k_sdio *VAR_6 = FUNC_1(VAR_3);
 struct ath10k_sdio_irq_data *VAR_7 = &VAR_6->irq_data;
 struct ath10k_sdio_irq_proc_regs *VAR_8 = VAR_7->irq_proc_reg;
 struct ath10k_sdio_irq_enable_regs *VAR_9 = VAR_7->irq_en_reg;
 u8 VAR_10 = FUNC_0(VAR_1, 1);
 int VAR_11;

 FUNC_5(&VAR_7->mtx);

 *VAR_5 = 0;
 *VAR_4 = 0;







 if (!VAR_9->int_status_en) {
  VAR_11 = 0;
  goto out;
 }






 VAR_11 = FUNC_2(VAR_3, VAR_2,
          VAR_8, sizeof(*VAR_8));
 if (VAR_11)
  goto out;


 *VAR_4 = VAR_8->host_int_status &
      VAR_9->int_status_en;


 if (!(*VAR_4 & VAR_10)) {
  *VAR_5 = 0;
  VAR_11 = 0;
  goto out;
 }




 *VAR_4 &= ~VAR_10;
 if (VAR_8->rx_lookahead_valid & VAR_10) {
  *VAR_5 = FUNC_4(
   VAR_8->rx_lookahead[VAR_0]);
  if (!*VAR_5)
   FUNC_3(VAR_3, "sdio mbox lookahead is zero\n");
 }

out:
 FUNC_6(&VAR_7->mtx);
 return VAR_11;
}
