
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ irq_type; scalar_t__ irq_polarity; } ;
struct smsc911x_data {int last_duplex; int last_carrier; int mac_lock; int napi; scalar_t__ ioaddr; scalar_t__ software_irq_signal; TYPE_1__ config; } ;
struct net_device {int * phydev; int irq; int name; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,...) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*,...) ;
 int VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,unsigned long,int ) ;
 struct smsc911x_data* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,char*,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_33 ;
 int FUNC_12 (int ,int ,int,int ,struct net_device*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct net_device*) ;
 int VAR_34 ;
 unsigned int FUNC_15 (struct smsc911x_data*,int ) ;
 int FUNC_16 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_17 (struct net_device*) ;
 unsigned int FUNC_18 (struct smsc911x_data*,int ) ;
 int FUNC_19 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_20 (struct smsc911x_data*,int ) ;
 int FUNC_21 (struct smsc911x_data*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct net_device *VAR_35)
{
 struct smsc911x_data *VAR_36 = FUNC_7(VAR_35);
 unsigned int VAR_37;
 unsigned int VAR_38;
 unsigned int VAR_39;
 int VAR_40;
 int VAR_41;


 if (!VAR_35->phydev) {
  VAR_40 = FUNC_17(VAR_35);
  if (VAR_40 < 0) {
   FUNC_1(VAR_36, VAR_33, "Error starting phy");
   goto out;
  }
 }


 VAR_40 = FUNC_21(VAR_36);
 if (VAR_40) {
  FUNC_1(VAR_36, VAR_31, "soft reset failed");
  goto mii_free_out;
 }

 FUNC_19(VAR_36, VAR_9, 0x00050000);
 FUNC_19(VAR_36, VAR_0, 0x006E3740);


 FUNC_22(&VAR_36->mac_lock);
 FUNC_16(VAR_36, VAR_30, VAR_4);
 FUNC_23(&VAR_36->mac_lock);


 VAR_37 = 50;
 while ((FUNC_18(VAR_36, VAR_1) & VAR_2) &&
        --VAR_37) {
  FUNC_24(10);
 }

 if (FUNC_25(VAR_37 == 0))
  FUNC_1(VAR_36, VAR_32,
     "Timed out waiting for EEPROM busy bit to clear");

 FUNC_19(VAR_36, VAR_8, 0x70070000);



 FUNC_22(&VAR_36->mac_lock);
 FUNC_20(VAR_36, VAR_35->dev_addr);
 FUNC_23(&VAR_36->mac_lock);


 FUNC_14(VAR_35);


 VAR_39 = ((10 << 24) | VAR_13);

 if (VAR_36->config.irq_polarity) {
  FUNC_0(VAR_36, VAR_32, "irq polarity: active high");
  VAR_39 |= VAR_14;
 } else {
  FUNC_0(VAR_36, VAR_32, "irq polarity: active low");
 }

 if (VAR_36->config.irq_type) {
  FUNC_0(VAR_36, VAR_32, "irq type: push-pull");
  VAR_39 |= VAR_15;
 } else {
  FUNC_0(VAR_36, VAR_32, "irq type: open drain");
 }

 FUNC_19(VAR_36, VAR_12, VAR_39);

 FUNC_0(VAR_36, VAR_32, "Testing irq handler using IRQ %d", VAR_35->irq);
 VAR_36->software_irq_signal = 0;
 FUNC_13();

 VAR_41 = FUNC_3(VAR_35->irq);
 VAR_40 = FUNC_12(VAR_35->irq, VAR_34,
        VAR_41 | VAR_21, VAR_35->name, VAR_35);
 if (VAR_40) {
  FUNC_1(VAR_36, VAR_33,
     "Unable to claim requested irq: %d", VAR_35->irq);
  goto mii_free_out;
 }

 VAR_38 = FUNC_18(VAR_36, VAR_16);
 VAR_38 |= VAR_19;
 FUNC_19(VAR_36, VAR_16, VAR_38);

 VAR_37 = 1000;
 while (VAR_37--) {
  if (VAR_36->software_irq_signal)
   break;
  FUNC_4(1);
 }

 if (!VAR_36->software_irq_signal) {
  FUNC_8(VAR_35, "ISR failed signaling test (IRQ %d)\n",
       VAR_35->irq);
  VAR_40 = -VAR_3;
  goto irq_stop_out;
 }
 FUNC_0(VAR_36, VAR_32, "IRQ handler passed test using IRQ %d",
     VAR_35->irq);

 FUNC_6(VAR_35, "SMSC911x/921x identified at %#08lx, IRQ: %d\n",
      (unsigned long)VAR_36->ioaddr, VAR_35->irq);


 VAR_36->last_duplex = -1;
 VAR_36->last_carrier = -1;


 FUNC_11(VAR_35->phydev);

 VAR_38 = FUNC_18(VAR_36, VAR_9);

 VAR_38 &= (VAR_11|0x00000FFF);
 VAR_38 |= VAR_10;
 FUNC_19(VAR_36, VAR_9, VAR_38);

 VAR_38 = FUNC_18(VAR_36, VAR_5);
 VAR_38 |= VAR_7;
 VAR_38 &= ~(VAR_6);
 FUNC_19(VAR_36, VAR_5, VAR_38);


 FUNC_19(VAR_36, VAR_27, (VAR_26 << 8));


 FUNC_5(&VAR_36->napi);

 VAR_38 = FUNC_18(VAR_36, VAR_16);
 VAR_38 |= (VAR_20 | VAR_17 | VAR_18);
 FUNC_19(VAR_36, VAR_16, VAR_38);

 FUNC_22(&VAR_36->mac_lock);
 VAR_38 = FUNC_15(VAR_36, VAR_22);
 VAR_38 |= (VAR_25 | VAR_24 | VAR_23);
 FUNC_16(VAR_36, VAR_22, VAR_38);
 FUNC_23(&VAR_36->mac_lock);

 FUNC_19(VAR_36, VAR_28, VAR_29);

 FUNC_9(VAR_35);
 return 0;

irq_stop_out:
 FUNC_2(VAR_35->irq, VAR_35);
mii_free_out:
 FUNC_10(VAR_35->phydev);
 VAR_35->phydev = ((void*)0);
out:
 return VAR_40;
}
