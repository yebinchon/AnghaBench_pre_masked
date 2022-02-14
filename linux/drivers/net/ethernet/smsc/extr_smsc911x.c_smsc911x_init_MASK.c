
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smsc911x_data {int generation; unsigned int idrev; int napi; int mac_lock; TYPE_1__ config; int * ioaddr; int dev_lock; } ;
struct net_device {int * ethtool_ops; int * netdev_ops; int flags; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,...) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*,char*) ;
 struct smsc911x_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int *,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (struct smsc911x_data*) ;
 int VAR_13 ;
 int FUNC_6 (struct net_device*) ;
 unsigned int FUNC_7 (struct smsc911x_data*,int ) ;
 int FUNC_8 (struct smsc911x_data*,int ,int) ;
 scalar_t__ FUNC_9 (struct smsc911x_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 unsigned int FUNC_13 (unsigned int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_14)
{
 struct smsc911x_data *VAR_15 = FUNC_3(VAR_14);
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18 = 100;

 FUNC_0(VAR_15, VAR_10, "Driver Parameters:");
 FUNC_0(VAR_15, VAR_10, "LAN base: 0x%08lX",
     (unsigned long)VAR_15->ioaddr);
 FUNC_0(VAR_15, VAR_10, "IRQ: %d", VAR_14->irq);
 FUNC_0(VAR_15, VAR_10, "PHY will be autodetected.");

 FUNC_10(&VAR_15->dev_lock);
 FUNC_10(&VAR_15->mac_lock);

 if (VAR_15->ioaddr == ((void*)0)) {
  FUNC_1(VAR_15, VAR_10, "pdata->ioaddr: 0x00000000");
  return -VAR_1;
 }
 VAR_17 = VAR_5 | FUNC_13(VAR_5);
 while (!(FUNC_7(VAR_15, VAR_4) & VAR_17) && --VAR_18)
  FUNC_14(1000);

 if (VAR_18 == 0) {
  FUNC_2(VAR_14, "Device not READY in 100ms aborting\n");
  return -VAR_1;
 }


 VAR_16 = FUNC_7(VAR_15, VAR_0);
 FUNC_0(VAR_15, VAR_10, "BYTE_TEST: 0x%08X", VAR_16);
 if (VAR_16 == 0x43218765) {
  FUNC_0(VAR_15, VAR_10, "BYTE_TEST looks swapped, "
      "applying WORD_SWAP");
  FUNC_8(VAR_15, VAR_8, 0xffffffff);



  VAR_16 = FUNC_7(VAR_15, VAR_0);

  VAR_16 = FUNC_7(VAR_15, VAR_0);
 }

 if (VAR_16 != 0x87654321) {
  FUNC_1(VAR_15, VAR_9, "BYTE_TEST: 0x%08X", VAR_16);
  if (((VAR_16 >> 16) & 0xFFFF) == (VAR_16 & 0xFFFF)) {
   FUNC_1(VAR_15, VAR_10,
      "top 16 bits equal to bottom 16 bits");
   FUNC_0(VAR_15, VAR_10,
       "This may mean the chip is set "
       "for 32 bit while the bus is reading 16 bit");
  }
  return -VAR_1;
 }


 VAR_15->generation = 0;

 VAR_15->idrev = FUNC_7(VAR_15, VAR_2);
 switch (VAR_15->idrev & 0xFFFF0000) {
 case 137:
 case 138:
 case 139:
 case 140:
 case 141:

  VAR_15->generation = VAR_15->idrev & 0x0000FFFF;
  break;

 case 131:
 case 132:
 case 133:
 case 134:

  VAR_15->generation = 3;
  break;

 case 136:
 case 135:
 case 130:
 case 129:
 case 128:

  VAR_15->generation = 4;
  break;

 default:
  FUNC_1(VAR_15, VAR_10, "LAN911x not identified, idrev: 0x%08X",
     VAR_15->idrev);
  return -VAR_1;
 }

 FUNC_0(VAR_15, VAR_10,
     "LAN911x identified, idrev: 0x%08X, generation: %d",
     VAR_15->idrev, VAR_15->generation);

 if (VAR_15->generation == 0)
  FUNC_1(VAR_15, VAR_10,
     "This driver is not intended for this chip revision");




 if (VAR_15->config.flags & VAR_6) {
  FUNC_11(&VAR_15->mac_lock);
  FUNC_6(VAR_14);
  FUNC_12(&VAR_15->mac_lock);
 }


 if (FUNC_5(VAR_15) || FUNC_9(VAR_15))
  return -VAR_1;

 VAR_14->flags |= VAR_3;
 FUNC_4(VAR_14, &VAR_15->napi, VAR_13, VAR_7);
 VAR_14->netdev_ops = &VAR_12;
 VAR_14->ethtool_ops = &VAR_11;

 return 0;
}
