
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {unsigned int num_tx_queues; int name; int dev_addr; int features; } ;
struct bcm_sysport_priv {int old_duplex; int old_link; int old_pause; int irq0; int irq1; int is_lite; int phy_interface; int phy_dn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bcm_sysport_priv*) ;
 int FUNC_1 (struct bcm_sysport_priv*,unsigned int) ;
 int FUNC_2 (struct bcm_sysport_priv*) ;
 int FUNC_3 (struct bcm_sysport_priv*,unsigned int) ;
 int FUNC_4 (struct bcm_sysport_priv*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_6 (struct net_device*,int ) ;
 int VAR_11 ;
 int FUNC_7 (int ,struct net_device*) ;
 int FUNC_8 (struct bcm_sysport_priv*) ;
 int FUNC_9 (struct bcm_sysport_priv*,int) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 struct bcm_sysport_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 struct phy_device* FUNC_13 (struct net_device*,int ,int ,int ,int ) ;
 int FUNC_14 (struct phy_device*) ;
 int FUNC_15 (struct bcm_sysport_priv*) ;
 int FUNC_16 (struct bcm_sysport_priv*,int) ;
 int FUNC_17 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_18 (struct bcm_sysport_priv*,int) ;
 int FUNC_19 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_20 (struct bcm_sysport_priv*) ;
 int FUNC_21 (struct bcm_sysport_priv*,int,int) ;
 int FUNC_22 (struct bcm_sysport_priv*) ;
 int FUNC_23 (struct bcm_sysport_priv*,int ) ;
 int FUNC_24 (struct bcm_sysport_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_25(struct net_device *VAR_12)
{
 struct bcm_sysport_priv *VAR_13 = FUNC_11(VAR_12);
 struct phy_device *VAR_14;
 unsigned int VAR_15;
 int VAR_16;


 FUNC_22(VAR_13);


 FUNC_20(VAR_13);


 FUNC_21(VAR_13, VAR_0 | VAR_1, 0);


 FUNC_15(VAR_13);


 if (!VAR_13->is_lite)
  FUNC_24(VAR_13, VAR_8, VAR_7);
 else
  FUNC_8(VAR_13);




 FUNC_6(VAR_12, VAR_12->features);


 FUNC_23(VAR_13, VAR_12->dev_addr);

 VAR_14 = FUNC_13(VAR_12, VAR_13->phy_dn, VAR_9,
    0, VAR_13->phy_interface);
 if (!VAR_14) {
  FUNC_10(VAR_12, "could not attach to PHY\n");
  return -VAR_2;
 }


 VAR_13->old_duplex = -1;
 VAR_13->old_link = -1;
 VAR_13->old_pause = -1;


 FUNC_4(VAR_13);

 VAR_16 = FUNC_17(VAR_13->irq0, VAR_10, 0, VAR_12->name, VAR_12);
 if (VAR_16) {
  FUNC_10(VAR_12, "failed to request RX interrupt\n");
  goto out_phy_disconnect;
 }

 if (!VAR_13->is_lite) {
  VAR_16 = FUNC_17(VAR_13->irq1, VAR_11, 0,
      VAR_12->name, VAR_12);
  if (VAR_16) {
   FUNC_10(VAR_12, "failed to request TX interrupt\n");
   goto out_free_irq0;
  }
 }


 for (VAR_15 = 0; VAR_15 < VAR_12->num_tx_queues; VAR_15++) {
  VAR_16 = FUNC_3(VAR_13, VAR_15);
  if (VAR_16) {
   FUNC_10(VAR_12, "failed to initialize TX ring %d\n",
       VAR_15);
   goto out_free_tx_ring;
  }
 }


 FUNC_19(VAR_13, VAR_5, VAR_6);


 VAR_16 = FUNC_2(VAR_13);
 if (VAR_16) {
  FUNC_10(VAR_12, "failed to initialize RX ring\n");
  goto out_free_rx_ring;
 }


 VAR_16 = FUNC_16(VAR_13, 1);
 if (VAR_16)
  goto out_free_rx_ring;


 VAR_16 = FUNC_18(VAR_13, 1);
 if (VAR_16)
  goto out_clear_rx_int;


 FUNC_21(VAR_13, VAR_0 | VAR_1, 1);

 FUNC_5(VAR_12);

 FUNC_12(VAR_12);

 return 0;

out_clear_rx_int:
 FUNC_9(VAR_13, VAR_3 | VAR_4);
out_free_rx_ring:
 FUNC_0(VAR_13);
out_free_tx_ring:
 for (VAR_15 = 0; VAR_15 < VAR_12->num_tx_queues; VAR_15++)
  FUNC_1(VAR_13, VAR_15);
 if (!VAR_13->is_lite)
  FUNC_7(VAR_13->irq1, VAR_12);
out_free_irq0:
 FUNC_7(VAR_13->irq0, VAR_12);
out_phy_disconnect:
 FUNC_14(VAR_14);
 return VAR_16;
}
