
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_async_subdev {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {int function; int * ops; } ;
struct TYPE_8__ {int grp_id; TYPE_1__ entity; int name; int flags; int owner; int * dev; int * internal_ops; } ;
struct csi2_dev {int lock; void* pllref_clk; void* dphy_clk; TYPE_2__ sd; int base; void* pix_clk; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 struct csi2_dev* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,TYPE_2__*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (TYPE_2__*,int,unsigned int*,int,int ) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_14)
{
 unsigned int VAR_15 = 0;
 struct csi2_dev *VAR_16;
 struct resource *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_6(&VAR_14->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->dev = &VAR_14->dev;

 FUNC_15(&VAR_16->sd, &VAR_13);
 FUNC_14(&VAR_16->sd, &VAR_14->dev);
 VAR_16->sd.internal_ops = &VAR_11;
 VAR_16->sd.entity.ops = &VAR_10;
 VAR_16->sd.dev = &VAR_14->dev;
 VAR_16->sd.owner = VAR_8;
 VAR_16->sd.flags = VAR_9;
 FUNC_11(VAR_16->sd.name, VAR_0, sizeof(VAR_16->sd.name));
 VAR_16->sd.entity.function = VAR_6;
 VAR_16->sd.grp_id = VAR_4;

 VAR_16->pllref_clk = FUNC_4(&VAR_14->dev, "ref");
 if (FUNC_0(VAR_16->pllref_clk)) {
  FUNC_13(&VAR_16->sd, "failed to get pll reference clock\n");
  VAR_18 = FUNC_1(VAR_16->pllref_clk);
  return VAR_18;
 }

 VAR_16->dphy_clk = FUNC_4(&VAR_14->dev, "dphy");
 if (FUNC_0(VAR_16->dphy_clk)) {
  FUNC_13(&VAR_16->sd, "failed to get dphy clock\n");
  VAR_18 = FUNC_1(VAR_16->dphy_clk);
  return VAR_18;
 }

 VAR_16->pix_clk = FUNC_4(&VAR_14->dev, "pix");
 if (FUNC_0(VAR_16->pix_clk)) {
  FUNC_13(&VAR_16->sd, "failed to get pixel clock\n");
  VAR_18 = FUNC_1(VAR_16->pix_clk);
  return VAR_18;
 }

 VAR_17 = FUNC_9(VAR_14, VAR_5, 0);
 if (!VAR_17) {
  FUNC_13(&VAR_16->sd, "failed to get platform resources\n");
  return -VAR_1;
 }

 VAR_16->base = FUNC_5(&VAR_14->dev, VAR_17->start, VAR_7);
 if (!VAR_16->base)
  return -VAR_2;

 FUNC_8(&VAR_16->lock);

 VAR_18 = FUNC_3(VAR_16->pllref_clk);
 if (VAR_18) {
  FUNC_13(&VAR_16->sd, "failed to enable pllref_clk\n");
  goto rmmutex;
 }

 VAR_18 = FUNC_3(VAR_16->dphy_clk);
 if (VAR_18) {
  FUNC_13(&VAR_16->sd, "failed to enable dphy_clk\n");
  goto pllref_off;
 }

 FUNC_10(VAR_14, &VAR_16->sd);

 VAR_18 = FUNC_12(
  &VAR_16->sd, sizeof(struct v4l2_async_subdev),
  &VAR_15, 1, VAR_12);
 if (VAR_18)
  goto dphy_off;

 return 0;

dphy_off:
 FUNC_2(VAR_16->dphy_clk);
pllref_off:
 FUNC_2(VAR_16->pllref_clk);
rmmutex:
 FUNC_7(&VAR_16->lock);
 return VAR_18;
}
