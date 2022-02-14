
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct mt9v032_platform_data {scalar_t__* link_freqs; scalar_t__ link_def_freq; } ;
struct TYPE_24__ {int error; } ;
struct TYPE_17__ {int function; } ;
struct TYPE_23__ {TYPE_14__ entity; int * dev; int flags; int * internal_ops; TYPE_6__* ctrl_handler; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_20__ {int colorspace; int field; void* height; void* width; int code; } ;
struct TYPE_19__ {void* height; void* width; int top; int left; } ;
struct mt9v032 {int hratio; int vratio; int aec_agc; int hblank; TYPE_6__ ctrls; TYPE_5__ subdev; TYPE_15__ pad; int sysclk; TYPE_2__ format; TYPE_3__* model; TYPE_1__ crop; int link_freq; int pixel_rate; int test_pattern; int test_pattern_color; struct mt9v032_platform_data* pdata; int power_lock; void* standby_gpio; void* reset_gpio; void* clk; void* regmap; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int dev; } ;
struct TYPE_22__ {int min_shutter; int max_shutter; int min_hblank; int min_vblank; int max_vblank; int * aec_max_shutter_v4l2_ctrl; } ;
struct TYPE_21__ {scalar_t__ color; TYPE_4__* data; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int FUNC_2 (void*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_3 (int *,char*,int) ;
 void* FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *,char*,int ) ;
 struct mt9v032* FUNC_6 (int *,int,int ) ;
 void* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (TYPE_14__*) ;
 int FUNC_9 (TYPE_14__*,int,TYPE_15__*) ;
 int * VAR_37 ;
 int VAR_38 ;
 struct mt9v032_platform_data* FUNC_10 (struct i2c_client*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int * VAR_43 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int,int *) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*,int) ;
 int FUNC_16 (TYPE_6__*,int *,int *) ;
 int FUNC_17 (TYPE_6__*,int *,int ,unsigned int,unsigned int,scalar_t__*) ;
 int FUNC_18 (TYPE_6__*,int *,int ,int,int,int,int) ;
 int FUNC_19 (TYPE_6__*,int *,int ,int ,int ,int ) ;
 int FUNC_20 (TYPE_6__*,int *,int ,int,int ,int ,int *) ;
 int FUNC_21 (TYPE_5__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_44,
  const struct i2c_device_id *VAR_45)
{
 struct mt9v032_platform_data *VAR_46 = FUNC_10(VAR_44);
 struct mt9v032 *VAR_47;
 unsigned int VAR_48;
 int VAR_49;

 VAR_47 = FUNC_6(&VAR_44->dev, sizeof(*VAR_47), VAR_1);
 if (!VAR_47)
  return -VAR_0;

 VAR_47->regmap = FUNC_7(VAR_44, &VAR_39);
 if (FUNC_1(VAR_47->regmap))
  return FUNC_2(VAR_47->regmap);

 VAR_47->clk = FUNC_4(&VAR_44->dev, ((void*)0));
 if (FUNC_1(VAR_47->clk))
  return FUNC_2(VAR_47->clk);

 VAR_47->reset_gpio = FUNC_5(&VAR_44->dev, "reset",
            VAR_2);
 if (FUNC_1(VAR_47->reset_gpio))
  return FUNC_2(VAR_47->reset_gpio);

 VAR_47->standby_gpio = FUNC_5(&VAR_44->dev, "standby",
       VAR_3);
 if (FUNC_1(VAR_47->standby_gpio))
  return FUNC_2(VAR_47->standby_gpio);

 FUNC_11(&VAR_47->power_lock);
 VAR_47->pdata = VAR_46;
 VAR_47->model = (const void *)VAR_45->driver_data;

 FUNC_15(&VAR_47->ctrls, 11 +
          FUNC_0(VAR_37));

 FUNC_18(&VAR_47->ctrls, &VAR_38,
     VAR_23, 0, 1, 1, 1);
 FUNC_18(&VAR_47->ctrls, &VAR_38,
     VAR_26, VAR_13,
     VAR_12, 1, VAR_11);
 FUNC_19(&VAR_47->ctrls, &VAR_38,
          VAR_25, VAR_34, 0,
          VAR_33);
 FUNC_18(&VAR_47->ctrls, &VAR_38,
     VAR_24, VAR_47->model->data->min_shutter,
     VAR_47->model->data->max_shutter, 1,
     VAR_19);
 FUNC_18(&VAR_47->ctrls, &VAR_38,
     VAR_27, VAR_47->model->data->min_hblank,
     VAR_16, 1,
     VAR_15);
 FUNC_18(&VAR_47->ctrls, &VAR_38,
     VAR_31, VAR_47->model->data->min_vblank,
     VAR_47->model->data->max_vblank, 1,
     VAR_20);
 VAR_47->test_pattern = FUNC_20(&VAR_47->ctrls,
    &VAR_38, VAR_30,
    FUNC_0(VAR_43) - 1, 0, 0,
    VAR_43);
 VAR_47->test_pattern_color = FUNC_16(&VAR_47->ctrls,
          &VAR_42, ((void*)0));

 FUNC_16(&VAR_47->ctrls,
        VAR_47->model->data->aec_max_shutter_v4l2_ctrl,
        ((void*)0));
 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_37); ++VAR_48)
  FUNC_16(&VAR_47->ctrls, &VAR_37[VAR_48],
         ((void*)0));

 FUNC_13(2, &VAR_47->test_pattern);

 VAR_47->pixel_rate =
  FUNC_18(&VAR_47->ctrls, &VAR_38,
      VAR_29, 1, VAR_4, 1, 1);

 if (VAR_46 && VAR_46->link_freqs) {
  unsigned int VAR_50 = 0;

  for (VAR_48 = 0; VAR_46->link_freqs[VAR_48]; ++VAR_48) {
   if (VAR_46->link_freqs[VAR_48] == VAR_46->link_def_freq)
    VAR_50 = VAR_48;
  }

  VAR_47->link_freq =
   FUNC_17(&VAR_47->ctrls,
            &VAR_38,
            VAR_28, VAR_48 - 1, VAR_50,
            VAR_46->link_freqs);
  FUNC_13(2, &VAR_47->link_freq);
 }


 VAR_47->subdev.ctrl_handler = &VAR_47->ctrls;

 if (VAR_47->ctrls.error) {
  FUNC_3(&VAR_44->dev, "control initialization error %d\n",
   VAR_47->ctrls.error);
  VAR_49 = VAR_47->ctrls.error;
  goto err;
 }

 VAR_47->crop.left = VAR_14;
 VAR_47->crop.top = VAR_17;
 VAR_47->crop.width = VAR_22;
 VAR_47->crop.height = VAR_21;

 if (VAR_47->model->color)
  VAR_47->format.code = VAR_5;
 else
  VAR_47->format.code = VAR_6;

 VAR_47->format.width = VAR_22;
 VAR_47->format.height = VAR_21;
 VAR_47->format.field = VAR_35;
 VAR_47->format.colorspace = VAR_32;

 VAR_47->hratio = 1;
 VAR_47->vratio = 1;

 VAR_47->aec_agc = VAR_9 | VAR_10;
 VAR_47->hblank = VAR_15;
 VAR_47->sysclk = VAR_18;

 FUNC_21(&VAR_47->subdev, VAR_44, &VAR_41);
 VAR_47->subdev.internal_ops = &VAR_40;
 VAR_47->subdev.flags |= VAR_36;

 VAR_47->subdev.entity.function = VAR_7;
 VAR_47->pad.flags = VAR_8;
 VAR_49 = FUNC_9(&VAR_47->subdev.entity, 1, &VAR_47->pad);
 if (VAR_49 < 0)
  goto err;

 VAR_47->subdev.dev = &VAR_44->dev;
 VAR_49 = FUNC_12(&VAR_47->subdev);
 if (VAR_49 < 0)
  goto err;

 return 0;

err:
 FUNC_8(&VAR_47->subdev.entity);
 FUNC_14(&VAR_47->ctrls);
 return VAR_49;
}
