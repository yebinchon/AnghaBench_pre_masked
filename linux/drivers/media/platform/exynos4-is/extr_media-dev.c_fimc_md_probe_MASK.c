
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_device {int name; int notify; TYPE_4__* mdev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {struct device* dev; int * ops; int model; } ;
struct TYPE_6__ {int * ops; } ;
struct fimc_md {int user_subdev_api; scalar_t__ num_sensors; struct v4l2_device v4l2_dev; TYPE_4__ media_dev; TYPE_1__ subdev_notifier; int use_isp; struct platform_device* pdev; int pipelines; int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;
 struct fimc_md* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct fimc_md*) ;
 int FUNC_6 (struct fimc_md*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (struct fimc_md*) ;
 int FUNC_9 (struct fimc_md*) ;
 int FUNC_10 (struct fimc_md*,int ) ;
 int FUNC_11 (struct fimc_md*) ;
 int FUNC_12 (struct fimc_md*) ;
 int FUNC_13 (struct fimc_md*) ;
 int VAR_5 ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (struct platform_device*,struct fimc_md*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (struct v4l2_device*,TYPE_1__*) ;
 int FUNC_22 (struct device*,struct v4l2_device*) ;
 int FUNC_23 (struct v4l2_device*) ;
 int FUNC_24 (struct v4l2_device*,char*,...) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct v4l2_device *VAR_9;
 struct fimc_md *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_8, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 FUNC_17(&VAR_10->slock);
 FUNC_0(&VAR_10->pipelines);
 VAR_10->pdev = VAR_7;

 FUNC_18(VAR_10->media_dev.model, "SAMSUNG S5P FIMC",
  sizeof(VAR_10->media_dev.model));
 VAR_10->media_dev.ops = &VAR_4;
 VAR_10->media_dev.dev = VAR_8;

 VAR_9 = &VAR_10->v4l2_dev;
 VAR_9->mdev = &VAR_10->media_dev;
 VAR_9->notify = VAR_5;
 FUNC_18(VAR_9->name, "s5p-fimc-md", sizeof(VAR_9->name));

 VAR_10->use_isp = FUNC_7(VAR_8->of_node);
 VAR_10->user_subdev_api = 1;

 FUNC_15(&VAR_10->media_dev);

 VAR_11 = FUNC_22(VAR_8, &VAR_10->v4l2_dev);
 if (VAR_11 < 0) {
  FUNC_24(VAR_9, "Failed to register v4l2_device: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  goto err_md;

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 < 0) {
  if (VAR_11 != VAR_1)
   FUNC_1(VAR_8, "Failed to get pinctrl: %d\n", VAR_11);
  goto err_clk;
 }

 FUNC_16(VAR_7, VAR_10);

 FUNC_20(&VAR_10->subdev_notifier);

 VAR_11 = FUNC_10(VAR_10, VAR_8->of_node);
 if (VAR_11)
  goto err_clk;

 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11)
  goto err_m_ent;

 VAR_11 = FUNC_2(&VAR_7->dev, &VAR_3);
 if (VAR_11)
  goto err_cleanup;





 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11 < 0) {
  FUNC_24(VAR_9, "clock provider registration failed\n");
  goto err_attr;
 }

 if (VAR_10->num_sensors > 0) {
  VAR_10->subdev_notifier.ops = &VAR_6;
  VAR_10->num_sensors = 0;

  VAR_11 = FUNC_21(&VAR_10->v4l2_dev,
      &VAR_10->subdev_notifier);
  if (VAR_11)
   goto err_clk_p;
 }

 return 0;

err_clk_p:
 FUNC_12(VAR_10);
err_attr:
 FUNC_3(&VAR_7->dev, &VAR_3);
err_cleanup:
 FUNC_19(&VAR_10->subdev_notifier);
err_m_ent:
 FUNC_13(VAR_10);
err_clk:
 FUNC_8(VAR_10);
err_md:
 FUNC_14(&VAR_10->media_dev);
 FUNC_23(&VAR_10->v4l2_dev);
 return VAR_11;
}
