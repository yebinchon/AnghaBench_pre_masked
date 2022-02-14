
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clock_frequency; } ;
struct s3c_camif_plat_data {int (* gpio_get ) () ;int (* gpio_put ) () ;TYPE_1__ sensor; } ;
struct s3c_camif_drvdata {int variant; } ;
struct resource {int dummy; } ;
struct device {struct s3c_camif_plat_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct camif_dev {int media_dev; int v4l2_dev; int subdev; int * clock; struct s3c_camif_plat_data pdata; int io_base; int variant; struct device* dev; int lock; int slock; } ;
struct TYPE_4__ {scalar_t__ driver_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct camif_dev*) ;
 int FUNC_3 (struct camif_dev*) ;
 int FUNC_4 (struct camif_dev*) ;
 int FUNC_5 (struct camif_dev*) ;
 int FUNC_6 (struct camif_dev*) ;
 int FUNC_7 (struct camif_dev*) ;
 int FUNC_8 (struct platform_device*,struct camif_dev*) ;
 int FUNC_9 (struct camif_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,char*,int ) ;
 int FUNC_14 (struct device*,struct resource*) ;
 struct camif_dev* FUNC_15 (struct device*,int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 TYPE_2__* FUNC_20 (struct platform_device*) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct camif_dev*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct camif_dev*) ;
 int FUNC_28 (struct camif_dev*) ;
 int FUNC_29 (struct camif_dev*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 (int *,int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;

__attribute__((used)) static int FUNC_36(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct s3c_camif_plat_data *VAR_7 = VAR_6->platform_data;
 struct s3c_camif_drvdata *VAR_8;
 struct camif_dev *VAR_9;
 struct resource *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_15(VAR_6, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_30(&VAR_9->slock);
 FUNC_19(&VAR_9->lock);

 VAR_9->dev = VAR_6;

 if (!VAR_7 || !VAR_7->gpio_get || !VAR_7->gpio_put) {
  FUNC_12(VAR_6, "wrong platform data\n");
  return -VAR_1;
 }

 VAR_9->pdata = *VAR_7;
 VAR_8 = (void *)FUNC_20(VAR_5)->driver_data;
 VAR_9->variant = VAR_8->variant;

 VAR_10 = FUNC_21(VAR_5, VAR_4, 0);

 VAR_9->io_base = FUNC_14(VAR_6, VAR_10);
 if (FUNC_0(VAR_9->io_base))
  return FUNC_1(VAR_9->io_base);

 VAR_11 = FUNC_8(VAR_5, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = VAR_7->gpio_get();
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_27(VAR_9);
 if (VAR_11 < 0)
  goto err_sd;

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 < 0)
  goto err_clk;

 FUNC_22(VAR_5, VAR_9);
 FUNC_11(VAR_9->clock[VAR_0],
   VAR_9->pdata.sensor.clock_frequency);

 FUNC_13(VAR_6, "sensor clock frequency: %lu\n",
   FUNC_10(VAR_9->clock[VAR_0]));





 FUNC_28(VAR_9);

 FUNC_24(VAR_6);

 VAR_11 = FUNC_25(VAR_6);
 if (VAR_11 < 0)
  goto err_pm;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 < 0)
  goto err_alloc;

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11 < 0)
  goto err_sens;

 VAR_11 = FUNC_33(&VAR_9->v4l2_dev, &VAR_9->subdev);
 if (VAR_11 < 0)
  goto err_sens;

 VAR_11 = FUNC_34(&VAR_9->v4l2_dev);
 if (VAR_11 < 0)
  goto err_sens;

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11 < 0)
  goto err_sens;

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11 < 0)
  goto err_sens;

 VAR_11 = FUNC_17(&VAR_9->media_dev);
 if (VAR_11 < 0)
  goto err_sens;

 FUNC_26(VAR_6);
 return 0;

err_sens:
 FUNC_35(&VAR_9->v4l2_dev);
 FUNC_18(&VAR_9->media_dev);
 FUNC_16(&VAR_9->media_dev);
 FUNC_9(VAR_9);
err_alloc:
 FUNC_26(VAR_6);
 FUNC_23(VAR_6);
err_pm:
 FUNC_3(VAR_9);
err_clk:
 FUNC_29(VAR_9);
err_sd:
 VAR_7->gpio_put();
 return VAR_11;
}
