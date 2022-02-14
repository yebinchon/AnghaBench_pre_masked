
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct smsc9420_pdata {int software_irq_signal; int int_lock; int napi; int dev; TYPE_1__* pdev; } ;
struct net_device {int phydev; int dev_addr; } ;
struct TYPE_2__ {int irq; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int const,struct smsc9420_pdata*) ;
 int VAR_34 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 struct smsc9420_pdata* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct smsc9420_pdata*,int ,int ,char*,int const) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct smsc9420_pdata*,int ,int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int const,int ,int ,int ,struct smsc9420_pdata*) ;
 int FUNC_11 (struct smsc9420_pdata*) ;
 int FUNC_12 (struct smsc9420_pdata*) ;
 int FUNC_13 (struct smsc9420_pdata*) ;
 int FUNC_14 (struct smsc9420_pdata*) ;
 int FUNC_15 (struct smsc9420_pdata*) ;
 int VAR_35 ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct smsc9420_pdata*) ;
 int FUNC_18 (struct smsc9420_pdata*,int ) ;
 int FUNC_19 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_23(struct net_device *VAR_36)
{
 struct smsc9420_pdata *VAR_37 = FUNC_4(VAR_36);
 u32 VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 const int VAR_44 = VAR_37->pdev->irq;
 unsigned long VAR_45;
 int VAR_46 = 0, VAR_47;

 if (!FUNC_1(VAR_36->dev_addr)) {
  FUNC_8(VAR_37, VAR_34, VAR_37->dev,
      "dev_addr is not a valid MAC address\n");
  VAR_46 = -VAR_15;
  goto out_0;
 }

 FUNC_5(VAR_36);


 FUNC_21(&VAR_37->int_lock, VAR_45);
 VAR_41 = FUNC_18(VAR_37, VAR_22) & (~VAR_24);
 FUNC_19(VAR_37, VAR_22, VAR_41);
 FUNC_19(VAR_37, VAR_25, 0);
 FUNC_22(&VAR_37->int_lock, VAR_45);
 FUNC_19(VAR_37, VAR_10, 0);
 FUNC_19(VAR_37, VAR_28, 0xFFFFFFFF);
 FUNC_17(VAR_37);

 VAR_46 = FUNC_10(VAR_44, VAR_35, VAR_29, VAR_14, VAR_37);
 if (VAR_46) {
  FUNC_8(VAR_37, VAR_34, VAR_37->dev, "Unable to use IRQ = %d\n", VAR_44);
  VAR_46 = -VAR_16;
  goto out_0;
 }

 FUNC_13(VAR_37);


 FUNC_19(VAR_37, VAR_30, 0);

 FUNC_20(VAR_36);


 FUNC_19(VAR_37, VAR_18,
  (VAR_21 | VAR_20 | VAR_19));

 VAR_38 = VAR_4;





 FUNC_19(VAR_37, VAR_2, VAR_38);

 FUNC_17(VAR_37);


 FUNC_19(VAR_37, VAR_0, VAR_1);

 FUNC_19(VAR_37, VAR_5,
  (VAR_7 | VAR_6));

 FUNC_17(VAR_37);


 FUNC_6(VAR_37, VAR_34, VAR_37->dev, "Testing ISR using IRQ %d\n", VAR_44);
 VAR_37->software_irq_signal = 0;

 FUNC_21(&VAR_37->int_lock, VAR_45);

 VAR_41 = FUNC_18(VAR_37, VAR_22) | VAR_24;
 VAR_41 &= ~(VAR_23);
 VAR_41 |= (VAR_27 & VAR_23);
 FUNC_19(VAR_37, VAR_22, VAR_41);


 VAR_43 = FUNC_18(VAR_37, VAR_25) | VAR_26;
 FUNC_19(VAR_37, VAR_25, VAR_43);
 FUNC_22(&VAR_37->int_lock, VAR_45);
 FUNC_17(VAR_37);

 VAR_47 = 1000;
 while (VAR_47--) {
  if (VAR_37->software_irq_signal)
   break;
  FUNC_2(1);
 }


 FUNC_21(&VAR_37->int_lock, VAR_45);
 VAR_41 = FUNC_18(VAR_37, VAR_22) & (~VAR_24);
 FUNC_19(VAR_37, VAR_22, VAR_41);
 FUNC_22(&VAR_37->int_lock, VAR_45);

 if (!VAR_37->software_irq_signal) {
  FUNC_8(VAR_37, VAR_34, VAR_37->dev, "ISR failed signaling test\n");
  VAR_46 = -VAR_16;
  goto out_free_irq_1;
 }

 FUNC_6(VAR_37, VAR_34, VAR_37->dev, "ISR passed test using IRQ %d\n", VAR_44);

 VAR_46 = FUNC_12(VAR_37);
 if (VAR_46) {
  FUNC_8(VAR_37, VAR_34, VAR_37->dev,
      "Failed to Initialize tx dma ring\n");
  VAR_46 = -VAR_17;
  goto out_free_irq_1;
 }

 VAR_46 = FUNC_11(VAR_37);
 if (VAR_46) {
  FUNC_8(VAR_37, VAR_34, VAR_37->dev,
      "Failed to Initialize rx dma ring\n");
  VAR_46 = -VAR_17;
  goto out_free_tx_ring_2;
 }

 VAR_46 = FUNC_16(VAR_36);
 if (VAR_46) {
  FUNC_8(VAR_37, VAR_34, VAR_37->dev, "Failed to initialize Phy\n");
  VAR_46 = -VAR_16;
  goto out_free_rx_ring_3;
 }


 FUNC_9(VAR_36->phydev);

 FUNC_3(&VAR_37->napi);


 VAR_39 = FUNC_18(VAR_37, VAR_30) | VAR_32 | VAR_31;
 FUNC_19(VAR_37, VAR_30, VAR_39);

 VAR_40 = FUNC_18(VAR_37, VAR_5);
 VAR_40 |= VAR_9 | VAR_8;
 FUNC_19(VAR_37, VAR_5, VAR_40);
 FUNC_17(VAR_37);

 VAR_42 = FUNC_18(VAR_37, VAR_10);
 VAR_42 |=
  (VAR_13 | VAR_12 | VAR_11);
 FUNC_19(VAR_37, VAR_10, VAR_42);
 FUNC_17(VAR_37);

 FUNC_7(VAR_36);

 FUNC_19(VAR_37, VAR_33, 1);


 FUNC_21(&VAR_37->int_lock, VAR_45);
 VAR_41 = FUNC_18(VAR_37, VAR_22) | VAR_24;
 FUNC_19(VAR_37, VAR_22, VAR_41);
 FUNC_22(&VAR_37->int_lock, VAR_45);

 return 0;

out_free_rx_ring_3:
 FUNC_14(VAR_37);
out_free_tx_ring_2:
 FUNC_15(VAR_37);
out_free_irq_1:
 FUNC_0(VAR_44, VAR_37);
out_0:
 return VAR_46;
}
