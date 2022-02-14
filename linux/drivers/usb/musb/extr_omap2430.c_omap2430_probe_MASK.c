
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct resource {int flags; int end; int start; int name; } ;
struct TYPE_9__ {int coherent_dma_mask; int * dma_mask; struct TYPE_9__* parent; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; TYPE_1__* resource; } ;
struct omap_musb_board_data {int interface_type; } ;
struct omap2430_glue {TYPE_2__* dev; int omap_musb_mailbox_work; TYPE_2__* control_otghs; int status; struct platform_device* musb; } ;
struct musb_hdrc_platform_data {int * platform_ops; struct musb_hdrc_config* config; struct omap_musb_board_data* board_data; int power; int mode; } ;
struct musb_hdrc_config {int multipoint; int ram_bits; int num_eps; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int flags; int end; int start; int name; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct omap2430_glue* VAR_6 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct musb_hdrc_platform_data* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct resource*,int,int) ;
 struct platform_device* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int ) ;
 int FUNC_9 (struct device_node*,char*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,struct musb_hdrc_platform_data*,int) ;
 int FUNC_12 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_13 (char*,int ) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*,struct omap2430_glue*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 struct resource VAR_11[3];
 struct musb_hdrc_platform_data *VAR_12 = FUNC_4(&VAR_10->dev);
 struct omap_musb_board_data *VAR_13;
 struct platform_device *VAR_14;
 struct omap2430_glue *VAR_15;
 struct device_node *VAR_16 = VAR_10->dev.of_node;
 struct musb_hdrc_config *VAR_17;
 struct device_node *VAR_18;
 struct platform_device *VAR_19;
 int VAR_20 = -VAR_2, VAR_21;

 if (!VAR_16)
  return -VAR_1;

 VAR_15 = FUNC_5(&VAR_10->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  goto err0;

 VAR_14 = FUNC_13("musb-hdrc", VAR_5);
 if (!VAR_14) {
  FUNC_3(&VAR_10->dev, "failed to allocate musb device\n");
  goto err0;
 }

 VAR_14->dev.parent = &VAR_10->dev;
 VAR_14->dev.dma_mask = &VAR_7;
 VAR_14->dev.coherent_dma_mask = VAR_7;

 VAR_15->dev = &VAR_10->dev;
 VAR_15->musb = VAR_14;
 VAR_15->status = VAR_4;
 VAR_15->control_otghs = FUNC_1(-VAR_1);

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  goto err2;

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  goto err2;

 VAR_17 = FUNC_5(&VAR_10->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  goto err2;

 FUNC_9(VAR_16, "mode", (u32 *)&VAR_12->mode);
 FUNC_9(VAR_16, "interface-type",
   (u32 *)&VAR_13->interface_type);
 FUNC_9(VAR_16, "num-eps", (u32 *)&VAR_17->num_eps);
 FUNC_9(VAR_16, "ram-bits", (u32 *)&VAR_17->ram_bits);
 FUNC_9(VAR_16, "power", (u32 *)&VAR_12->power);

 VAR_20 = FUNC_9(VAR_16, "multipoint", &VAR_21);
 if (!VAR_20 && VAR_21)
  VAR_17->multipoint = 1;

 VAR_12->board_data = VAR_13;
 VAR_12->config = VAR_17;

 VAR_18 = FUNC_8(VAR_16, "ctrl-module", 0);
 if (VAR_18) {
  VAR_19 = FUNC_7(VAR_18);
  if (!VAR_19) {
   FUNC_3(&VAR_10->dev, "Failed to get control device\n");
   VAR_20 = -VAR_0;
   goto err2;
  }
  VAR_15->control_otghs = &VAR_19->dev;
 }

 VAR_12->platform_ops = &VAR_8;

 FUNC_15(VAR_10, VAR_15);





 VAR_6 = VAR_15;

 FUNC_2(&VAR_15->omap_musb_mailbox_work, VAR_9);

 FUNC_6(VAR_11, 0x00, sizeof(*VAR_11) *
   FUNC_0(VAR_11));

 VAR_11[0].name = VAR_10->resource[0].name;
 VAR_11[0].start = VAR_10->resource[0].start;
 VAR_11[0].end = VAR_10->resource[0].end;
 VAR_11[0].flags = VAR_10->resource[0].flags;

 VAR_11[1].name = VAR_10->resource[1].name;
 VAR_11[1].start = VAR_10->resource[1].start;
 VAR_11[1].end = VAR_10->resource[1].end;
 VAR_11[1].flags = VAR_10->resource[1].flags;

 VAR_11[2].name = VAR_10->resource[2].name;
 VAR_11[2].start = VAR_10->resource[2].start;
 VAR_11[2].end = VAR_10->resource[2].end;
 VAR_11[2].flags = VAR_10->resource[2].flags;

 VAR_20 = FUNC_12(VAR_14, VAR_11,
   FUNC_0(VAR_11));
 if (VAR_20) {
  FUNC_3(&VAR_10->dev, "failed to add resources\n");
  goto err2;
 }

 VAR_20 = FUNC_11(VAR_14, VAR_12, sizeof(*VAR_12));
 if (VAR_20) {
  FUNC_3(&VAR_10->dev, "failed to add platform_data\n");
  goto err2;
 }

 FUNC_17(VAR_15->dev);

 VAR_20 = FUNC_10(VAR_14);
 if (VAR_20) {
  FUNC_3(&VAR_10->dev, "failed to register musb device\n");
  goto err3;
 }

 return 0;

err3:
 FUNC_16(VAR_15->dev);

err2:
 FUNC_14(VAR_14);

err0:
 return VAR_20;
}
