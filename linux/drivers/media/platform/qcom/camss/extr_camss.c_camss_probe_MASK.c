
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_11__ {int * ops; } ;
struct TYPE_10__ {TYPE_8__* mdev; } ;
struct TYPE_12__ {int * ops; int model; struct device* dev; } ;
struct camss {scalar_t__ version; int csiphy_num; int csid_num; int vfe_num; TYPE_5__ notifier; TYPE_1__ v4l2_dev; void** genpd; struct device* dev; TYPE_8__ media_dev; void* vfe; void* csid; void* csiphy; int ref_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct camss*) ;
 int VAR_7 ;
 int FUNC_4 (struct camss*) ;
 int FUNC_5 (struct camss*) ;
 int VAR_8 ;
 int FUNC_6 (struct camss*) ;
 int FUNC_7 (struct device*,char*,int) ;
 void* FUNC_8 (struct device*,size_t) ;
 int FUNC_9 (void*,int) ;
 void* FUNC_10 (struct device*,int,int,int ) ;
 int FUNC_11 (struct device*,int) ;
 struct camss* FUNC_12 (int,int ) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (TYPE_8__*) ;
 scalar_t__ FUNC_15 (int ,char*) ;
 int FUNC_16 (struct platform_device*,struct camss*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_22 (struct device*,TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct camss *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_12(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 FUNC_2(&VAR_11->ref_count, 0);
 VAR_11->dev = VAR_10;
 FUNC_16(VAR_9, VAR_11);

 if (FUNC_15(VAR_10->of_node, "qcom,msm8916-camss")) {
  VAR_11->version = VAR_0;
  VAR_11->csiphy_num = 2;
  VAR_11->csid_num = 2;
  VAR_11->vfe_num = 1;
 } else if (FUNC_15(VAR_10->of_node,
        "qcom,msm8996-camss")) {
  VAR_11->version = VAR_1;
  VAR_11->csiphy_num = 3;
  VAR_11->csid_num = 4;
  VAR_11->vfe_num = 2;
 } else {
  return -VAR_2;
 }

 VAR_11->csiphy = FUNC_10(VAR_10, VAR_11->csiphy_num,
         sizeof(*VAR_11->csiphy), VAR_4);
 if (!VAR_11->csiphy)
  return -VAR_3;

 VAR_11->csid = FUNC_10(VAR_10, VAR_11->csid_num, sizeof(*VAR_11->csid),
       VAR_4);
 if (!VAR_11->csid)
  return -VAR_3;

 VAR_11->vfe = FUNC_10(VAR_10, VAR_11->vfe_num, sizeof(*VAR_11->vfe),
      VAR_4);
 if (!VAR_11->vfe)
  return -VAR_3;

 FUNC_20(&VAR_11->notifier);

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_3(VAR_11);
 if (VAR_13 < 0)
  goto err_cleanup;

 VAR_13 = FUNC_11(VAR_10, 0xffffffff);
 if (VAR_13)
  goto err_cleanup;

 VAR_11->media_dev.dev = VAR_11->dev;
 FUNC_18(VAR_11->media_dev.model, "Qualcomm Camera Subsystem",
  sizeof(VAR_11->media_dev.model));
 VAR_11->media_dev.ops = &VAR_7;
 FUNC_13(&VAR_11->media_dev);

 VAR_11->v4l2_dev.mdev = &VAR_11->media_dev;
 VAR_13 = FUNC_22(VAR_11->dev, &VAR_11->v4l2_dev);
 if (VAR_13 < 0) {
  FUNC_7(VAR_10, "Failed to register V4L2 device: %d\n", VAR_13);
  goto err_cleanup;
 }

 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13 < 0)
  goto err_register_entities;

 if (VAR_12) {
  VAR_11->notifier.ops = &VAR_8;

  VAR_13 = FUNC_21(&VAR_11->v4l2_dev,
         &VAR_11->notifier);
  if (VAR_13) {
   FUNC_7(VAR_10,
    "Failed to register async subdev nodes: %d\n",
    VAR_13);
   goto err_register_subdevs;
  }
 } else {
  VAR_13 = FUNC_23(&VAR_11->v4l2_dev);
  if (VAR_13 < 0) {
   FUNC_7(VAR_10, "Failed to register subdev nodes: %d\n",
    VAR_13);
   goto err_register_subdevs;
  }

  VAR_13 = FUNC_14(&VAR_11->media_dev);
  if (VAR_13 < 0) {
   FUNC_7(VAR_10, "Failed to register media device: %d\n",
    VAR_13);
   goto err_register_subdevs;
  }
 }

 if (VAR_11->version == VAR_1) {
  VAR_11->genpd[VAR_5] = FUNC_8(
      VAR_11->dev, VAR_5);
  if (FUNC_0(VAR_11->genpd[VAR_5]))
   return FUNC_1(VAR_11->genpd[VAR_5]);

  VAR_11->genpd[VAR_6] = FUNC_8(
      VAR_11->dev, VAR_6);
  if (FUNC_0(VAR_11->genpd[VAR_6])) {
   FUNC_9(VAR_11->genpd[VAR_5],
          1);
   return FUNC_1(VAR_11->genpd[VAR_6]);
  }
 }

 FUNC_17(VAR_10);

 return 0;

err_register_subdevs:
 FUNC_6(VAR_11);
err_register_entities:
 FUNC_24(&VAR_11->v4l2_dev);
err_cleanup:
 FUNC_19(&VAR_11->notifier);

 return VAR_13;
}
