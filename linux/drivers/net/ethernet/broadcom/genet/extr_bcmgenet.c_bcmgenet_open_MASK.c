
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int name; int dev_addr; } ;
struct bcmgenet_priv {int crc_fwd_en; int clk; scalar_t__ internal_phy; int irq0; int irq1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*) ;
 int FUNC_2 (struct bcmgenet_priv*,unsigned long) ;
 int FUNC_3 (struct bcmgenet_priv*,int ) ;
 int FUNC_4 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_5 (struct bcmgenet_priv*) ;
 int FUNC_6 (struct bcmgenet_priv*) ;
 int FUNC_7 (struct bcmgenet_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct bcmgenet_priv*,int ) ;
 int FUNC_11 (struct bcmgenet_priv*,int ) ;
 int FUNC_12 (struct bcmgenet_priv*,int ) ;
 int FUNC_13 (struct bcmgenet_priv*,int ) ;
 int FUNC_14 (struct bcmgenet_priv*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,struct bcmgenet_priv*) ;
 int VAR_8 ;
 int FUNC_18 (struct bcmgenet_priv*) ;
 int FUNC_19 (struct net_device*,char*,...) ;
 struct bcmgenet_priv* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct bcmgenet_priv*,int ,struct net_device*,char*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (int ,int ,int ,int ,struct bcmgenet_priv*) ;

__attribute__((used)) static int FUNC_24(struct net_device *VAR_9)
{
 struct bcmgenet_priv *VAR_10 = FUNC_20(VAR_9);
 unsigned long VAR_11;
 u32 VAR_12;
 int VAR_13;

 FUNC_21(VAR_10, VAR_8, VAR_9, "bcmgenet_open\n");


 FUNC_16(VAR_10->clk);




 if (VAR_10->internal_phy)
  FUNC_11(VAR_10, VAR_3);


 FUNC_14(VAR_10);

 FUNC_18(VAR_10);


 VAR_12 = FUNC_13(VAR_10, VAR_5);
 VAR_10->crc_fwd_en = !!(VAR_12 & VAR_0);

 FUNC_12(VAR_10, VAR_9->dev_addr);

 if (VAR_10->internal_phy) {
  VAR_12 = FUNC_3(VAR_10, VAR_2);
  VAR_12 |= VAR_1;
  FUNC_4(VAR_10, VAR_12, VAR_2);
 }


 VAR_11 = FUNC_0(VAR_10);


 VAR_13 = FUNC_7(VAR_10);
 if (VAR_13) {
  FUNC_19(VAR_9, "failed to initialize DMA\n");
  goto err_clk_disable;
 }


 FUNC_2(VAR_10, VAR_11);


 FUNC_6(VAR_10);

 VAR_13 = FUNC_23(VAR_10->irq0, VAR_6, VAR_4,
     VAR_9->name, VAR_10);
 if (VAR_13 < 0) {
  FUNC_19(VAR_9, "can't request IRQ %d\n", VAR_10->irq0);
  goto err_fini_dma;
 }

 VAR_13 = FUNC_23(VAR_10->irq1, VAR_7, VAR_4,
     VAR_9->name, VAR_10);
 if (VAR_13 < 0) {
  FUNC_19(VAR_9, "can't request IRQ %d\n", VAR_10->irq1);
  goto err_irq0;
 }

 VAR_13 = FUNC_8(VAR_9);
 if (VAR_13) {
  FUNC_19(VAR_9, "failed to connect to PHY\n");
  goto err_irq1;
 }

 FUNC_9(VAR_9);

 FUNC_22(VAR_9);

 return 0;

err_irq1:
 FUNC_17(VAR_10->irq1, VAR_10);
err_irq0:
 FUNC_17(VAR_10->irq0, VAR_10);
err_fini_dma:
 FUNC_1(VAR_10);
 FUNC_5(VAR_10);
err_clk_disable:
 if (VAR_10->internal_phy)
  FUNC_10(VAR_10, VAR_3);
 FUNC_15(VAR_10->clk);
 return VAR_13;
}
