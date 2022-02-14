
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_platform_config {struct smsc911x_platform_config* mac; scalar_t__ shift; } ;
struct smsc911x_data {int msg_enable; int * ioaddr; int mac_lock; struct smsc911x_platform_config config; int * ops; struct net_device* dev; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct net_device {int irq; struct smsc911x_platform_config* dev_addr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_6 ;
 int FUNC_1 (struct smsc911x_data*,int ,char*,...) ;
 int FUNC_2 (struct smsc911x_data*,int ,char*,...) ;
 struct net_device* FUNC_3 (int) ;
 int VAR_7 ;
 struct smsc911x_platform_config* FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct smsc911x_platform_config*) ;
 int FUNC_10 (struct smsc911x_platform_config*,struct smsc911x_platform_config*,int) ;
 int FUNC_11 (struct net_device*,char*,struct smsc911x_platform_config*) ;
 struct smsc911x_data* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,char*) ;
 int FUNC_17 (struct platform_device*,struct net_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*) ;
 int VAR_8 ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ,int,int ) ;
 int FUNC_26 (struct resource*) ;
 int VAR_9 ;
 int FUNC_27 (struct platform_device*) ;
 int FUNC_28 (struct platform_device*) ;
 int FUNC_29 (struct platform_device*) ;
 int FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct platform_device*,struct net_device*) ;
 int FUNC_32 (struct smsc911x_platform_config*,int *) ;
 int FUNC_33 (struct platform_device*) ;
 int FUNC_34 (struct smsc911x_data*,struct smsc911x_platform_config*) ;
 int FUNC_35 (struct net_device*) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_38(struct platform_device *VAR_11)
{
 struct net_device *VAR_12;
 struct smsc911x_data *VAR_13;
 struct smsc911x_platform_config *VAR_14 = FUNC_4(&VAR_11->dev);
 struct resource *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;

 VAR_15 = FUNC_16(VAR_11, VAR_5,
        "smsc911x-memory");
 if (!VAR_15)
  VAR_15 = FUNC_15(VAR_11, VAR_5, 0);
 if (!VAR_15) {
  FUNC_22("Could not allocate resource\n");
  VAR_18 = -VAR_1;
  goto out_0;
 }
 VAR_16 = FUNC_26(VAR_15);

 VAR_17 = FUNC_14(VAR_11, 0);
 if (VAR_17 == -VAR_3) {
  VAR_18 = -VAR_3;
  goto out_0;
 } else if (VAR_17 <= 0) {
  FUNC_22("Could not allocate irq resource\n");
  VAR_18 = -VAR_1;
  goto out_0;
 }

 if (!FUNC_25(VAR_15->start, VAR_16, VAR_6)) {
  VAR_18 = -VAR_0;
  goto out_0;
 }

 VAR_12 = FUNC_3(sizeof(struct smsc911x_data));
 if (!VAR_12) {
  VAR_18 = -VAR_2;
  goto out_release_io_1;
 }

 FUNC_0(VAR_12, &VAR_11->dev);

 VAR_13 = FUNC_12(VAR_12);
 VAR_12->irq = VAR_17;
 VAR_13->ioaddr = FUNC_7(VAR_15->start, VAR_16);
 if (!VAR_13->ioaddr) {
  VAR_18 = -VAR_2;
  goto out_ioremap_fail;
 }

 VAR_13->dev = VAR_12;
 VAR_13->msg_enable = ((1 << VAR_7) - 1);

 FUNC_17(VAR_11, VAR_12);

 VAR_18 = FUNC_33(VAR_11);
 if (VAR_18)
  goto out_request_resources_fail;

 VAR_18 = FUNC_28(VAR_11);
 if (VAR_18)
  goto out_enable_resources_fail;

 if (VAR_13->ioaddr == ((void*)0)) {
  FUNC_2(VAR_13, VAR_8, "Error smsc911x base address invalid");
  VAR_18 = -VAR_2;
  goto out_disable_resources;
 }

 VAR_18 = FUNC_32(&VAR_13->config, &VAR_11->dev);
 if (VAR_18 && VAR_14) {

  FUNC_10(&VAR_13->config, VAR_14, sizeof(VAR_13->config));
  VAR_18 = 0;
 }

 if (VAR_18) {
  FUNC_2(VAR_13, VAR_8, "Error smsc911x config not found");
  goto out_disable_resources;
 }


 VAR_13->ops = &VAR_10;

 if (VAR_13->config.shift)
  VAR_13->ops = &VAR_9;

 FUNC_19(&VAR_11->dev);
 FUNC_20(&VAR_11->dev);

 VAR_18 = FUNC_30(VAR_12);
 if (VAR_18 < 0)
  goto out_disable_resources;

 FUNC_13(VAR_12);

 VAR_18 = FUNC_31(VAR_11, VAR_12);
 if (VAR_18) {
  FUNC_2(VAR_13, VAR_8, "Error %i initialising mii", VAR_18);
  goto out_disable_resources;
 }

 VAR_18 = FUNC_23(VAR_12);
 if (VAR_18) {
  FUNC_2(VAR_13, VAR_8, "Error %i registering device", VAR_18);
  goto out_disable_resources;
 } else {
  FUNC_1(VAR_13, VAR_8,
      "Network interface: \"%s\"", VAR_12->name);
 }

 FUNC_36(&VAR_13->mac_lock);


 if (FUNC_9(VAR_12->dev_addr)) {
  FUNC_34(VAR_13, VAR_12->dev_addr);
  FUNC_1(VAR_13, VAR_8,
      "MAC Address is specified by configuration");
 } else if (FUNC_9(VAR_13->config.mac)) {
  FUNC_10(VAR_12->dev_addr, VAR_13->config.mac, VAR_4);
  FUNC_1(VAR_13, VAR_8,
      "MAC Address specified by platform data");
 } else {


  FUNC_35(VAR_12);

  if (FUNC_9(VAR_12->dev_addr)) {

   FUNC_1(VAR_13, VAR_8,
       "Mac Address is read from LAN911x EEPROM");
  } else {

   FUNC_5(VAR_12);
   FUNC_34(VAR_13, VAR_12->dev_addr);
   FUNC_1(VAR_13, VAR_8,
       "MAC Address is set to eth_random_addr");
  }
 }

 FUNC_37(&VAR_13->mac_lock);

 FUNC_11(VAR_12, "MAC Address: %pM\n", VAR_12->dev_addr);

 return 0;

out_disable_resources:
 FUNC_21(&VAR_11->dev);
 FUNC_18(&VAR_11->dev);
 (void)FUNC_27(VAR_11);
out_enable_resources_fail:
 FUNC_29(VAR_11);
out_request_resources_fail:
 FUNC_8(VAR_13->ioaddr);
out_ioremap_fail:
 FUNC_6(VAR_12);
out_release_io_1:
 FUNC_24(VAR_15->start, FUNC_26(VAR_15));
out_0:
 return VAR_18;
}
