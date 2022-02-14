
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int flags; int end; int start; int name; } ;
struct platform_device_info {int num_res; int size_data; struct musb_hdrc_platform_data* data; struct resource* res; TYPE_2__* parent; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__* resource; } ;
struct musb_hdrc_platform_data {int * platform_ops; int power; int mode; int * config; } ;
struct device_node {int dummy; } ;
struct da8xx_glue {int usb_phy; int musb; struct clk* clk; TYPE_2__* dev; struct clk* phy; } ;
struct clk {int dummy; } ;
struct TYPE_10__ {int flags; int end; int start; int name; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct platform_device_info VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 struct musb_hdrc_platform_data* FUNC_6 (TYPE_2__*) ;
 struct clk* FUNC_7 (TYPE_2__*,int *) ;
 void* FUNC_8 (TYPE_2__*,int,int ) ;
 struct clk* FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct resource*,int,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct device_node*,int *,int ,TYPE_2__*) ;
 int FUNC_14 (struct platform_device_info*) ;
 int FUNC_15 (struct platform_device*,struct da8xx_glue*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct resource VAR_9[2];
 struct musb_hdrc_platform_data *VAR_10 = FUNC_6(&VAR_8->dev);
 struct da8xx_glue *VAR_11;
 struct platform_device_info VAR_12;
 struct clk *VAR_13;
 struct device_node *VAR_14 = VAR_8->dev.of_node;
 int VAR_15;

 VAR_11 = FUNC_8(&VAR_8->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = FUNC_7(&VAR_8->dev, ((void*)0));
 if (FUNC_2(VAR_13)) {
  FUNC_5(&VAR_8->dev, "failed to get clock\n");
  return FUNC_3(VAR_13);
 }

 VAR_11->phy = FUNC_9(&VAR_8->dev, "usb-phy");
 if (FUNC_2(VAR_11->phy)) {
  if (FUNC_3(VAR_11->phy) != -VAR_2)
   FUNC_5(&VAR_8->dev, "failed to get phy\n");
  return FUNC_3(VAR_11->phy);
 }

 VAR_11->dev = &VAR_8->dev;
 VAR_11->clk = VAR_13;

 if (FUNC_1(VAR_0) && VAR_14) {
  VAR_10 = FUNC_8(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
  if (!VAR_10)
   return -VAR_1;

  VAR_10->config = &VAR_5;
  VAR_10->mode = FUNC_12(&VAR_8->dev);
  VAR_10->power = FUNC_10(&VAR_8->dev);
 }

 VAR_10->platform_ops = &VAR_7;

 VAR_11->usb_phy = FUNC_16();
 VAR_15 = FUNC_4(VAR_11->usb_phy);
 if (VAR_15) {
  FUNC_5(&VAR_8->dev, "failed to register usb_phy\n");
  return VAR_15;
 }
 FUNC_15(VAR_8, VAR_11);

 VAR_15 = FUNC_13(VAR_8->dev.of_node, ((void*)0),
       VAR_4, &VAR_8->dev);
 if (VAR_15)
  return VAR_15;

 FUNC_11(VAR_9, 0x00, sizeof(*VAR_9) *
   FUNC_0(VAR_9));

 VAR_9[0].name = VAR_8->resource[0].name;
 VAR_9[0].start = VAR_8->resource[0].start;
 VAR_9[0].end = VAR_8->resource[0].end;
 VAR_9[0].flags = VAR_8->resource[0].flags;

 VAR_9[1].name = VAR_8->resource[1].name;
 VAR_9[1].start = VAR_8->resource[1].start;
 VAR_9[1].end = VAR_8->resource[1].end;
 VAR_9[1].flags = VAR_8->resource[1].flags;

 VAR_12 = VAR_6;
 VAR_12.parent = &VAR_8->dev;
 VAR_12.res = VAR_9;
 VAR_12.num_res = FUNC_0(VAR_9);
 VAR_12.data = VAR_10;
 VAR_12.size_data = sizeof(*VAR_10);

 VAR_11->musb = FUNC_14(&VAR_12);
 VAR_15 = FUNC_4(VAR_11->musb);
 if (VAR_15) {
  FUNC_5(&VAR_8->dev, "failed to register musb device: %d\n", VAR_15);
  FUNC_17(VAR_11->usb_phy);
 }

 return VAR_15;
}
