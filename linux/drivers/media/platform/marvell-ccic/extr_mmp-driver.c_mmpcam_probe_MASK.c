
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_10__ {int of_node; struct mmp_camera_platform_data* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct mmp_camera_platform_data {int mclk_src; int mclk_div; scalar_t__ bus_type; scalar_t__* dphy; int lane; } ;
struct TYPE_8__ {struct fwnode_handle* fwnode; } ;
struct TYPE_9__ {TYPE_1__ match; int match_type; } ;
struct mcam_camera {int mclk_src; int mclk_div; scalar_t__ bus_type; scalar_t__* dphy; int mipi_enabled; TYPE_2__ asd; int mclk; int regs_size; int regs; int dev_lock; int bus_info; int buffer_mode; int chip_id; TYPE_3__* dev; int lane; int calc_dphy; } ;
struct mmp_camera {int irq; int mipi_clk; struct mcam_camera mcam; int devlist; struct platform_device* pdev; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,struct resource*) ;
 struct mmp_camera* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,char*,struct mcam_camera*) ;
 struct fwnode_handle* FUNC_8 (int ,int *) ;
 struct fwnode_handle* FUNC_9 (struct fwnode_handle*) ;
 int FUNC_10 (struct fwnode_handle*) ;
 int FUNC_11 (struct mcam_camera*) ;
 int FUNC_12 (struct mcam_camera*) ;
 int FUNC_13 (struct mcam_camera*) ;
 int FUNC_14 (struct mmp_camera*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_16 (int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct resource*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,char*,int) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_13)
{
 struct mmp_camera *VAR_14;
 struct mcam_camera *VAR_15;
 struct resource *VAR_16;
 struct fwnode_handle *VAR_17;
 struct mmp_camera_platform_data *VAR_18;
 int VAR_19;

 VAR_14 = FUNC_6(&VAR_13->dev, sizeof(*VAR_14), VAR_3);
 if (VAR_14 == ((void*)0))
  return -VAR_2;
 VAR_14->pdev = VAR_13;
 FUNC_0(&VAR_14->devlist);

 VAR_15 = &VAR_14->mcam;
 VAR_15->calc_dphy = VAR_10;
 VAR_15->dev = &VAR_13->dev;
 VAR_18 = VAR_13->dev.platform_data;
 if (VAR_18) {
  VAR_15->mclk_src = VAR_18->mclk_src;
  VAR_15->mclk_div = VAR_18->mclk_div;
  VAR_15->bus_type = VAR_18->bus_type;
  VAR_15->dphy = VAR_18->dphy;
  VAR_15->lane = VAR_18->lane;
 } else {






  VAR_15->mclk_src = 3;
  VAR_15->mclk_div = 2;
 }
 if (VAR_15->bus_type == VAR_9) {
  VAR_14->mipi_clk = FUNC_4(VAR_15->dev, "mipi");
  if ((FUNC_1(VAR_14->mipi_clk) && VAR_15->dphy[2] == 0))
   return FUNC_2(VAR_14->mipi_clk);
 }
 VAR_15->mipi_enabled = 0;
 VAR_15->chip_id = VAR_7;
 VAR_15->buffer_mode = VAR_0;
 FUNC_20(VAR_15->bus_info, "platform:mmp-camera", sizeof(VAR_15->bus_info));
 FUNC_19(&VAR_15->dev_lock);



 VAR_16 = FUNC_17(VAR_13, VAR_5, 0);
 VAR_15->regs = FUNC_5(&VAR_13->dev, VAR_16);
 if (FUNC_1(VAR_15->regs))
  return FUNC_2(VAR_15->regs);
 VAR_15->regs_size = FUNC_18(VAR_16);

 FUNC_11(VAR_15);




 VAR_17 = FUNC_8(FUNC_16(VAR_13->dev.of_node),
         ((void*)0));
 if (!VAR_17)
  return -VAR_1;

 VAR_15->asd.match_type = VAR_8;
 VAR_15->asd.match.fwnode = FUNC_9(VAR_17);

 FUNC_10(VAR_17);




 VAR_19 = FUNC_12(VAR_15);
 if (VAR_19)
  return VAR_19;




 VAR_19 = FUNC_15(VAR_13->dev.of_node, VAR_12,
        VAR_15->mclk);
 if (VAR_19) {
  FUNC_3(&VAR_13->dev, "can't add DT clock provider\n");
  goto out;
 }





 VAR_16 = FUNC_17(VAR_13, VAR_4, 0);
 if (VAR_16 == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto out;
 }
 VAR_14->irq = VAR_16->start;
 VAR_19 = FUNC_7(&VAR_13->dev, VAR_14->irq, VAR_11, VAR_6,
     "mmp-camera", VAR_15);
 if (VAR_19 == 0) {
  FUNC_14(VAR_14);
  return 0;
 }

out:
 FUNC_10(VAR_15->asd.match.fwnode);
 FUNC_13(VAR_15);

 return VAR_19;
}
