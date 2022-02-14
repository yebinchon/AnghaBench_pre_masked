
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int notifier_call; } ;
struct sunxi_glue {int usb_phy; int musb_pdev; int xceiv; int phy; int extcon; int rst; int flags; int clk; TYPE_1__ host_nb; int work; TYPE_2__* dev; int phy_mode; } ;
struct platform_device_info {char* name; int size_data; struct platform_device_info* data; int num_res; int res; TYPE_2__* parent; int id; int * config; int * platform_ops; int mode; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int num_resources; int resource; } ;
struct musb_hdrc_platform_data {char* name; int size_data; struct musb_hdrc_platform_data* data; int num_res; int res; TYPE_2__* parent; int id; int * config; int * platform_ops; int mode; } ;
struct device_node {int dummy; } ;
typedef int pinfo ;
typedef int pdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int VAR_14 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 struct sunxi_glue* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct platform_device_info*,int ,int) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct platform_device_info*) ;
 int FUNC_13 (struct platform_device*,struct sunxi_glue*) ;
 int FUNC_14 (int ,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_20)
{
 struct musb_hdrc_platform_data VAR_21;
 struct platform_device_info VAR_22;
 struct sunxi_glue *VAR_23;
 struct device_node *VAR_24 = VAR_20->dev.of_node;
 int VAR_25;

 if (!VAR_24) {
  FUNC_3(&VAR_20->dev, "Error no device tree node found\n");
  return -VAR_0;
 }

 VAR_23 = FUNC_5(&VAR_20->dev, sizeof(*VAR_23), VAR_3);
 if (!VAR_23)
  return -VAR_1;

 FUNC_10(&VAR_21, 0, sizeof(VAR_21));
 switch (FUNC_16(&VAR_20->dev)) {
 default:
  FUNC_3(&VAR_20->dev, "Invalid or missing 'dr_mode' property\n");
  return -VAR_0;
 }
 VAR_21.platform_ops = &VAR_18;
 if (!FUNC_11(VAR_24, "allwinner,sun8i-h3-musb"))
  VAR_21.config = &VAR_15;
 else
  VAR_21.config = &VAR_16;

 VAR_23->dev = &VAR_20->dev;
 FUNC_0(&VAR_23->work, VAR_19);
 VAR_23->host_nb.notifier_call = VAR_17;

 if (FUNC_11(VAR_24, "allwinner,sun4i-a10-musb"))
  FUNC_14(VAR_12, &VAR_23->flags);

 if (FUNC_11(VAR_24, "allwinner,sun6i-a31-musb"))
  FUNC_14(VAR_11, &VAR_23->flags);

 if (FUNC_11(VAR_24, "allwinner,sun8i-a33-musb") ||
     FUNC_11(VAR_24, "allwinner,sun8i-h3-musb")) {
  FUNC_14(VAR_11, &VAR_23->flags);
  FUNC_14(VAR_13, &VAR_23->flags);
 }

 VAR_23->clk = FUNC_4(&VAR_20->dev, ((void*)0));
 if (FUNC_1(VAR_23->clk)) {
  FUNC_3(&VAR_20->dev, "Error getting clock: %ld\n",
   FUNC_2(VAR_23->clk));
  return FUNC_2(VAR_23->clk);
 }

 if (FUNC_15(VAR_11, &VAR_23->flags)) {
  VAR_23->rst = FUNC_7(&VAR_20->dev, ((void*)0));
  if (FUNC_1(VAR_23->rst)) {
   if (FUNC_2(VAR_23->rst) == -VAR_2)
    return -VAR_2;
   FUNC_3(&VAR_20->dev, "Error getting reset %ld\n",
    FUNC_2(VAR_23->rst));
   return FUNC_2(VAR_23->rst);
  }
 }

 VAR_23->extcon = FUNC_9(&VAR_20->dev, 0);
 if (FUNC_1(VAR_23->extcon)) {
  if (FUNC_2(VAR_23->extcon) == -VAR_2)
   return -VAR_2;
  FUNC_3(&VAR_20->dev, "Invalid or missing extcon\n");
  return FUNC_2(VAR_23->extcon);
 }

 VAR_23->phy = FUNC_6(&VAR_20->dev, "usb");
 if (FUNC_1(VAR_23->phy)) {
  if (FUNC_2(VAR_23->phy) == -VAR_2)
   return -VAR_2;
  FUNC_3(&VAR_20->dev, "Error getting phy %ld\n",
   FUNC_2(VAR_23->phy));
  return FUNC_2(VAR_23->phy);
 }

 VAR_23->usb_phy = FUNC_17();
 if (FUNC_1(VAR_23->usb_phy)) {
  FUNC_3(&VAR_20->dev, "Error registering usb-phy %ld\n",
   FUNC_2(VAR_23->usb_phy));
  return FUNC_2(VAR_23->usb_phy);
 }

 VAR_23->xceiv = FUNC_8(&VAR_20->dev, VAR_14);
 if (FUNC_1(VAR_23->xceiv)) {
  VAR_25 = FUNC_2(VAR_23->xceiv);
  FUNC_3(&VAR_20->dev, "Error getting usb-phy %d\n", VAR_25);
  goto err_unregister_usb_phy;
 }

 FUNC_13(VAR_20, VAR_23);

 FUNC_10(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.name = "musb-hdrc";
 VAR_22.id = VAR_10;
 VAR_22.parent = &VAR_20->dev;
 VAR_22.res = VAR_20->resource;
 VAR_22.num_res = VAR_20->num_resources;
 VAR_22.data = &VAR_21;
 VAR_22.size_data = sizeof(VAR_21);

 VAR_23->musb_pdev = FUNC_12(&VAR_22);
 if (FUNC_1(VAR_23->musb_pdev)) {
  VAR_25 = FUNC_2(VAR_23->musb_pdev);
  FUNC_3(&VAR_20->dev, "Error registering musb dev: %d\n", VAR_25);
  goto err_unregister_usb_phy;
 }

 return 0;

err_unregister_usb_phy:
 FUNC_18(VAR_23->usb_phy);
 return VAR_25;
}
