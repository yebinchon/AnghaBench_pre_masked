
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_rx; int irq_tx; } ;
struct wil6210_priv {int n_msi; TYPE_1__ txrx_ops; scalar_t__ use_enhanced_dma_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,int ,struct wil6210_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct wil6210_priv*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct wil6210_priv*,char*,char*,int) ;

int FUNC_3(struct wil6210_priv *VAR_8, int VAR_9)
{
 int VAR_10;

 FUNC_2(VAR_8, "init_irq: %s, n_msi=%d\n",
       VAR_8->n_msi ? "MSI" : "INTx", VAR_8->n_msi);

 if (VAR_8->use_enhanced_dma_hw) {
  VAR_8->txrx_ops.irq_tx = VAR_6;
  VAR_8->txrx_ops.irq_rx = VAR_4;
 } else {
  VAR_8->txrx_ops.irq_tx = VAR_5;
  VAR_8->txrx_ops.irq_rx = VAR_3;
 }

 if (VAR_8->n_msi == 3)
  VAR_10 = FUNC_1(VAR_8, VAR_9);
 else
  VAR_10 = FUNC_0(VAR_9, VAR_2,
       VAR_7,
       VAR_8->n_msi ? 0 : VAR_0,
       VAR_1, VAR_8);
 return VAR_10;
}
