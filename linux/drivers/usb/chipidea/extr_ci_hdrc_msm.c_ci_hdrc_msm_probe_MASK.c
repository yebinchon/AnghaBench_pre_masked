
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {int of_node; } ;
struct reset_control {TYPE_1__ dev; int num_resources; int resource; } ;
struct platform_device {TYPE_1__ dev; int num_resources; int resource; } ;
struct device_node {int dummy; } ;
struct clk {TYPE_1__ dev; int num_resources; int resource; } ;
struct TYPE_14__ {char* name; int flags; int notify_event; int capoffset; } ;
struct TYPE_16__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct ci_hdrc_msm {struct reset_control* core_clk; struct reset_control* iface_clk; struct reset_control* ci; TYPE_13__ pdata; int hsic; struct reset_control* fs_clk; TYPE_5__ rcdev; struct reset_control* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_8 ;
 struct reset_control* FUNC_2 (TYPE_1__*,int ,int ,TYPE_13__*) ;
 int FUNC_3 (struct ci_hdrc_msm*,struct reset_control*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct reset_control*) ;
 int FUNC_5 (struct reset_control*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 struct reset_control* FUNC_8 (TYPE_1__*,char*) ;
 struct reset_control* FUNC_9 (TYPE_1__*,char*) ;
 struct ci_hdrc_msm* FUNC_10 (TYPE_1__*,int,int ) ;
 struct reset_control* FUNC_11 (struct reset_control*,int) ;
 struct reset_control* FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_14 (struct device_node*,char*) ;
 struct device_node* FUNC_15 (int ,char*) ;
 struct device_node* FUNC_16 (struct device_node*,int *) ;
 int FUNC_17 (struct device_node*) ;
 int FUNC_18 (struct reset_control*,struct ci_hdrc_msm*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (struct reset_control*) ;
 int FUNC_23 (struct reset_control*) ;
 int FUNC_24 (int,int) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_11)
{
 struct ci_hdrc_msm *VAR_12;
 struct platform_device *VAR_13;
 struct clk *VAR_14;
 struct reset_control *VAR_15;
 int VAR_16;
 struct device_node *VAR_17, *VAR_18;

 FUNC_6(&VAR_11->dev, "ci_hdrc_msm_probe\n");

 VAR_12 = FUNC_10(&VAR_11->dev, sizeof(*VAR_12), VAR_7);
 if (!VAR_12)
  return -VAR_5;
 FUNC_18(VAR_11, VAR_12);

 VAR_12->pdata.name = "ci_hdrc_msm";
 VAR_12->pdata.capoffset = VAR_4;
 VAR_12->pdata.flags = VAR_3 | VAR_0 |
     VAR_1 |
     VAR_2;
 VAR_12->pdata.notify_event = VAR_9;

 VAR_15 = FUNC_12(&VAR_11->dev, "core");
 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);

 VAR_12->core_clk = VAR_14 = FUNC_8(&VAR_11->dev, "core");
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_12->iface_clk = VAR_14 = FUNC_8(&VAR_11->dev, "iface");
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_12->fs_clk = VAR_14 = FUNC_9(&VAR_11->dev, "fs");
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_12->base = FUNC_11(VAR_11, 1);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_12->rcdev.owner = VAR_8;
 VAR_12->rcdev.ops = &VAR_10;
 VAR_12->rcdev.of_node = VAR_11->dev.of_node;
 VAR_12->rcdev.nr_resets = 2;
 VAR_16 = FUNC_13(&VAR_11->dev, &VAR_12->rcdev);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_12->fs_clk);
 if (VAR_16)
  return VAR_16;

 FUNC_22(VAR_15);
 FUNC_24(10000, 12000);
 FUNC_23(VAR_15);

 FUNC_4(VAR_12->fs_clk);

 VAR_16 = FUNC_5(VAR_12->core_clk);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_12->iface_clk);
 if (VAR_16)
  goto err_iface;

 VAR_16 = FUNC_3(VAR_12, VAR_11);
 if (VAR_16)
  goto err_mux;

 VAR_17 = FUNC_15(VAR_11->dev.of_node, "ulpi");
 if (VAR_17) {
  VAR_18 = FUNC_16(VAR_17, ((void*)0));
  VAR_12->hsic = FUNC_14(VAR_18, "qcom,usb-hsic-phy");
  FUNC_17(VAR_18);
 }
 FUNC_17(VAR_17);

 VAR_13 = FUNC_2(&VAR_11->dev, VAR_11->resource,
         VAR_11->num_resources, &VAR_12->pdata);
 if (FUNC_0(VAR_13)) {
  VAR_16 = FUNC_1(VAR_13);
  if (VAR_16 != -VAR_6)
   FUNC_7(&VAR_11->dev, "ci_hdrc_add_device failed!\n");
  goto err_mux;
 }

 VAR_12->ci = VAR_13;

 FUNC_21(&VAR_11->dev);
 FUNC_20(&VAR_11->dev);
 FUNC_19(&VAR_11->dev);

 return 0;

err_mux:
 FUNC_4(VAR_12->iface_clk);
err_iface:
 FUNC_4(VAR_12->core_clk);
 return VAR_16;
}
