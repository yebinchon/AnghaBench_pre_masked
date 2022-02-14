
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int coherent_dma_mask; int * dma_mask; struct device* parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct musb_hdrc_platform_data {int power; int mode; int * platform_ops; struct musb_hdrc_config* config; } ;
struct musb_hdrc_config {int num_eps; int ram_bits; int host_port_deassert_reset_at_resume; int multipoint; int maximum_speed; } ;
struct dsps_glue {struct platform_device* musb; } ;
struct device_node {int dummy; } ;
typedef int resources ;
typedef int pdata ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct device*) ;
 struct musb_hdrc_config* FUNC_4 (struct device*,int,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct resource*,int ,int) ;
 int VAR_7 ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device_node*,char*,int*) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,struct musb_hdrc_platform_data*,int) ;
 int FUNC_11 (struct platform_device*,struct resource*,int ) ;
 struct platform_device* FUNC_12 (char*,int) ;
 int FUNC_13 (struct platform_device*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct device*) ;

__attribute__((used)) static int FUNC_16(struct dsps_glue *VAR_8,
  struct platform_device *VAR_9)
{
 struct musb_hdrc_platform_data VAR_10;
 struct resource VAR_11[2];
 struct resource *VAR_12;
 struct device *VAR_13 = &VAR_9->dev;
 struct musb_hdrc_config *VAR_14;
 struct platform_device *VAR_15;
 struct device_node *VAR_16 = VAR_9->dev.of_node;
 int VAR_17, VAR_18;

 FUNC_6(VAR_11, 0, sizeof(VAR_11));
 VAR_12 = FUNC_14(VAR_9, VAR_4, "mc");
 if (!VAR_12) {
  FUNC_1(VAR_13, "failed to get memory.\n");
  return -VAR_0;
 }
 VAR_11[0] = *VAR_12;

 VAR_12 = FUNC_14(VAR_9, VAR_3, "mc");
 if (!VAR_12) {
  FUNC_1(VAR_13, "failed to get irq.\n");
  return -VAR_0;
 }
 VAR_11[1] = *VAR_12;


 VAR_15 = FUNC_12("musb-hdrc",
   (VAR_11[0].start & 0xFFF) == 0x400 ? 0 : 1);
 if (!VAR_15) {
  FUNC_1(VAR_13, "failed to allocate musb device\n");
  return -VAR_1;
 }

 VAR_15->dev.parent = VAR_13;
 VAR_15->dev.dma_mask = &VAR_7;
 VAR_15->dev.coherent_dma_mask = VAR_7;
 FUNC_3(&VAR_15->dev, &VAR_9->dev);

 VAR_8->musb = VAR_15;

 VAR_17 = FUNC_11(VAR_15, VAR_11,
   FUNC_0(VAR_11));
 if (VAR_17) {
  FUNC_1(VAR_13, "failed to add resources\n");
  goto err;
 }

 VAR_14 = FUNC_4(&VAR_9->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14) {
  VAR_17 = -VAR_1;
  goto err;
 }
 VAR_10.config = VAR_14;
 VAR_10.platform_ops = &VAR_6;

 VAR_14->num_eps = FUNC_5(VAR_16, "mentor,num-eps");
 VAR_14->ram_bits = FUNC_5(VAR_16, "mentor,ram-bits");
 VAR_14->host_port_deassert_reset_at_resume = 1;
 VAR_10.mode = FUNC_7(VAR_13);

 VAR_10.power = FUNC_5(VAR_16, "mentor,power") / 2;

 VAR_17 = FUNC_8(VAR_16, "mentor,multipoint", &VAR_18);
 if (!VAR_17 && VAR_18)
  VAR_14->multipoint = 1;

 VAR_14->maximum_speed = FUNC_15(&VAR_9->dev);
 switch (VAR_14->maximum_speed) {
 case 129:
 case 130:
  break;
 case 128:
  FUNC_2(VAR_13, "ignore incorrect maximum_speed "
    "(super-speed) setting in dts");

 default:
  VAR_14->maximum_speed = VAR_5;
 }

 VAR_17 = FUNC_10(VAR_15, &VAR_10, sizeof(VAR_10));
 if (VAR_17) {
  FUNC_1(VAR_13, "failed to add platform_data\n");
  goto err;
 }

 VAR_17 = FUNC_9(VAR_15);
 if (VAR_17) {
  FUNC_1(VAR_13, "failed to register musb device\n");
  goto err;
 }
 return 0;

err:
 FUNC_13(VAR_15);
 return VAR_17;
}
