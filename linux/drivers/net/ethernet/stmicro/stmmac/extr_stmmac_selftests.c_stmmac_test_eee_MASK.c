
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eee; } ;
struct stmmac_priv {int xstats; int eee_active; TYPE_1__ dma_cap; } ;
struct stmmac_extra_stats {scalar_t__ irq_tx_path_in_lpi_mode_n; scalar_t__ irq_tx_path_exit_lpi_mode_n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stmmac_extra_stats*) ;
 struct stmmac_extra_stats* FUNC_1 (int,int ) ;
 int FUNC_2 (struct stmmac_extra_stats*,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_5(struct stmmac_priv *VAR_5)
{
 struct stmmac_extra_stats *VAR_6, *VAR_7;
 int VAR_8 = 10;
 int VAR_9;

 if (!VAR_5->dma_cap.eee || !VAR_5->eee_active)
  return -VAR_2;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto out_free_initial;
 }

 FUNC_2(VAR_6, &VAR_5->xstats, sizeof(*VAR_6));

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9)
  goto out_free_final;


 while (--VAR_8) {
  FUNC_2(VAR_7, &VAR_5->xstats, sizeof(*VAR_7));

  if (VAR_7->irq_tx_path_in_lpi_mode_n >
      VAR_6->irq_tx_path_in_lpi_mode_n)
   break;
  FUNC_3(100);
 }

 if (!VAR_8) {
  VAR_9 = -VAR_3;
  goto out_free_final;
 }

 if (VAR_7->irq_tx_path_in_lpi_mode_n <=
     VAR_6->irq_tx_path_in_lpi_mode_n) {
  VAR_9 = -VAR_0;
  goto out_free_final;
 }

 if (VAR_7->irq_tx_path_exit_lpi_mode_n <=
     VAR_6->irq_tx_path_exit_lpi_mode_n) {
  VAR_9 = -VAR_0;
  goto out_free_final;
 }

out_free_final:
 FUNC_0(VAR_7);
out_free_initial:
 FUNC_0(VAR_6);
 return VAR_9;
}
