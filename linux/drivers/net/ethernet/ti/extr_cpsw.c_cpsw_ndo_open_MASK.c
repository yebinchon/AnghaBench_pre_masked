
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; } ;
struct TYPE_3__ {int default_vlan; int dual_emac; } ;
struct cpsw_priv {int tx_irq_disabled; int rx_irq_disabled; scalar_t__ coal_intvl; struct net_device* ndev; int dev; int dma; int usage_count; int cpts; int * irqs_table; int napi_tx; int napi_rx; TYPE_2__* regs; TYPE_1__ data; int ale; int version; int rx_ch_num; int tx_ch_num; struct cpsw_priv* cpsw; } ;
struct cpsw_common {int tx_irq_disabled; int rx_irq_disabled; scalar_t__ coal_intvl; struct net_device* ndev; int dev; int dma; int usage_count; int cpts; int * irqs_table; int napi_tx; int napi_rx; TYPE_2__* regs; TYPE_1__ data; int ale; int version; int rx_ch_num; int tx_ch_num; struct cpsw_common* cpsw; } ;
struct TYPE_4__ {int flow_control; int stat_port_en; int ptype; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cpsw_priv*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct cpsw_priv*) ;
 int FUNC_8 (struct cpsw_priv*) ;
 int FUNC_9 (struct cpsw_priv*) ;
 int FUNC_10 (struct cpsw_priv*) ;
 int FUNC_11 (struct cpsw_priv*) ;
 int FUNC_12 (struct cpsw_priv*) ;
 int FUNC_13 (struct net_device*,struct ethtool_coalesce*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*,int ,int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct cpsw_priv*,int ,struct cpsw_priv*) ;
 int FUNC_19 (int *) ;
 struct cpsw_priv* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*,int ) ;
 int FUNC_23 (struct net_device*,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int,int *) ;
 int FUNC_28 (int,int *) ;

__attribute__((used)) static int FUNC_29(struct net_device *VAR_3)
{
 struct cpsw_priv *VAR_4 = FUNC_20(VAR_3);
 struct cpsw_common *VAR_5 = VAR_4->cpsw;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_24(VAR_5->dev);
 if (VAR_6 < 0) {
  FUNC_25(VAR_5->dev);
  return VAR_6;
 }

 FUNC_21(VAR_3);


 VAR_6 = FUNC_23(VAR_3, VAR_5->tx_ch_num);
 if (VAR_6) {
  FUNC_15(VAR_4->dev, "cannot set real number of tx queues\n");
  goto err_cleanup;
 }

 VAR_6 = FUNC_22(VAR_3, VAR_5->rx_ch_num);
 if (VAR_6) {
  FUNC_15(VAR_4->dev, "cannot set real number of rx queues\n");
  goto err_cleanup;
 }

 VAR_7 = VAR_5->version;

 FUNC_16(VAR_4->dev, "initializing cpsw version %d.%d (%d)\n",
   FUNC_0(VAR_7), FUNC_1(VAR_7),
   FUNC_2(VAR_7));


 if (!VAR_5->usage_count)
  FUNC_10(VAR_4);
 FUNC_18(VAR_4, VAR_1, VAR_4);


 if (!VAR_5->data.dual_emac)
  FUNC_5(VAR_4);
 else
  FUNC_6(VAR_5->ale, VAR_5->data.default_vlan,
      VAR_0, VAR_0, 0, 0);


 if (!VAR_5->usage_count) {

  FUNC_28(0, &VAR_5->regs->ptype);


  FUNC_28(0x7, &VAR_5->regs->stat_port_en);


  FUNC_27(0x7, &VAR_5->regs->flow_control);

  FUNC_19(&VAR_5->napi_rx);
  FUNC_19(&VAR_5->napi_tx);

  if (VAR_5->tx_irq_disabled) {
   VAR_5->tx_irq_disabled = 0;
   FUNC_17(VAR_5->irqs_table[1]);
  }

  if (VAR_5->rx_irq_disabled) {
   VAR_5->rx_irq_disabled = 0;
   FUNC_17(VAR_5->irqs_table[0]);
  }




  VAR_6 = FUNC_7(VAR_5);
  if (VAR_6 < 0)
   goto err_cleanup;

  VAR_6 = FUNC_9(VAR_4);
  if (VAR_6 < 0)
   goto err_cleanup;

  if (FUNC_14(VAR_5->cpts))
   FUNC_15(VAR_4->dev, "error registering cpts device\n");

 }

 FUNC_12(VAR_4);


 if (VAR_5->coal_intvl != 0) {
  struct ethtool_coalesce VAR_8;

  VAR_8.rx_coalesce_usecs = VAR_5->coal_intvl;
  FUNC_13(VAR_3, &VAR_8);
 }

 FUNC_3(VAR_5->dma);
 FUNC_11(VAR_5);
 VAR_5->usage_count++;

 return 0;

err_cleanup:
 if (!VAR_5->usage_count) {
  FUNC_4(VAR_5->dma);
  FUNC_8(VAR_5);
 }

 FUNC_18(VAR_4, VAR_2, VAR_5);
 FUNC_26(VAR_5->dev);
 FUNC_21(VAR_4->ndev);
 return VAR_6;
}
