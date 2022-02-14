
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rc_device {int rxuhfmode; int irq; scalar_t__ sys_clock; struct rc_dev* rdev; struct device* dev; scalar_t__ rstc; scalar_t__ base; scalar_t__ rx_base; } ;
struct resource {int dummy; } ;
struct rc_dev {int rx_resolution; char* device_name; int map_name; int driver_name; int close; int open; struct st_rc_device* priv; int timeout; int allowed_protocols; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,char*) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*,int) ;
 scalar_t__ FUNC_8 (struct device*,int *) ;
 scalar_t__ FUNC_9 (struct device*,struct resource*) ;
 struct st_rc_device* FUNC_10 (struct device*,int,int ) ;
 scalar_t__ FUNC_11 (struct device*,int,int ,int ,int ,struct st_rc_device*) ;
 int FUNC_12 (struct device_node*,char*,char const**) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct st_rc_device*) ;
 struct rc_dev* FUNC_16 (int ) ;
 int FUNC_17 (struct rc_dev*) ;
 int FUNC_18 (struct rc_dev*) ;
 int FUNC_19 (struct rc_dev*) ;
 scalar_t__ FUNC_20 (struct device*,int *) ;
 int VAR_9 ;
 int FUNC_21 (struct st_rc_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_22 (struct rc_dev*) ;
 int FUNC_23 (char const*,char*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_12)
{
 int VAR_13 = -VAR_0;
 struct rc_dev *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 struct resource *VAR_16;
 struct st_rc_device *VAR_17;
 struct device_node *VAR_18 = VAR_12->dev.of_node;
 const char *VAR_19;

 VAR_17 = FUNC_10(VAR_15, sizeof(struct st_rc_device), VAR_2);

 if (!VAR_17)
  return -VAR_1;

 VAR_14 = FUNC_16(VAR_6);

 if (!VAR_14)
  return -VAR_1;

 if (VAR_18 && !FUNC_12(VAR_18, "rx-mode", &VAR_19)) {

  if (!FUNC_23(VAR_19, "uhf")) {
   VAR_17->rxuhfmode = 1;
  } else if (!FUNC_23(VAR_19, "infrared")) {
   VAR_17->rxuhfmode = 0;
  } else {
   FUNC_4(VAR_15, "Unsupported rx mode [%s]\n", VAR_19);
   goto err;
  }

 } else {
  goto err;
 }

 VAR_17->sys_clock = FUNC_8(VAR_15, ((void*)0));
 if (FUNC_0(VAR_17->sys_clock)) {
  FUNC_4(VAR_15, "System clock not found\n");
  VAR_13 = FUNC_1(VAR_17->sys_clock);
  goto err;
 }

 VAR_17->irq = FUNC_13(VAR_12, 0);
 if (VAR_17->irq < 0) {
  VAR_13 = VAR_17->irq;
  goto err;
 }

 VAR_16 = FUNC_14(VAR_12, VAR_3, 0);

 VAR_17->base = FUNC_9(VAR_15, VAR_16);
 if (FUNC_0(VAR_17->base)) {
  VAR_13 = FUNC_1(VAR_17->base);
  goto err;
 }

 if (VAR_17->rxuhfmode)
  VAR_17->rx_base = VAR_17->base + 0x40;
 else
  VAR_17->rx_base = VAR_17->base;

 VAR_17->rstc = FUNC_20(VAR_15, ((void*)0));
 if (FUNC_0(VAR_17->rstc)) {
  VAR_13 = FUNC_1(VAR_17->rstc);
  goto err;
 }

 VAR_17->dev = VAR_15;
 FUNC_15(VAR_12, VAR_17);
 FUNC_21(VAR_17);

 VAR_14->allowed_protocols = VAR_8;

 VAR_14->rx_resolution = 100;
 VAR_14->timeout = FUNC_2(VAR_5);
 VAR_14->priv = VAR_17;
 VAR_14->open = VAR_10;
 VAR_14->close = VAR_9;
 VAR_14->driver_name = VAR_4;
 VAR_14->map_name = VAR_7;
 VAR_14->device_name = "ST Remote Control Receiver";

 VAR_13 = FUNC_18(VAR_14);
 if (VAR_13 < 0)
  goto clkerr;

 VAR_17->rdev = VAR_14;
 if (FUNC_11(VAR_15, VAR_17->irq, VAR_11,
        0, VAR_4, VAR_17) < 0) {
  FUNC_4(VAR_15, "IRQ %d register failed\n", VAR_17->irq);
  VAR_13 = -VAR_0;
  goto rcerr;
 }


 FUNC_7(VAR_15, 1);
 FUNC_6(VAR_15, VAR_17->irq);





 FUNC_22(VAR_14);

 FUNC_5(VAR_15, "setup in %s mode\n", VAR_17->rxuhfmode ? "UHF" : "IR");

 return VAR_13;
rcerr:
 FUNC_19(VAR_14);
 VAR_14 = ((void*)0);
clkerr:
 FUNC_3(VAR_17->sys_clock);
err:
 FUNC_17(VAR_14);
 FUNC_4(VAR_15, "Unable to register device (%d)\n", VAR_13);
 return VAR_13;
}
