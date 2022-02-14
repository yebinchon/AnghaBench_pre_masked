
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct si4713_platform_data {int is_platform_device; } ;
struct TYPE_12__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct si4713_device {TYPE_1__ sd; struct platform_device* pd; void* mute; void* tune_ant_cap; void* tune_pwr_level; int tune_preemphasis; void* pilot_tone_freq; void* pilot_tone_deviation; void* pilot_tone_enabled; void* compression_release_time; void* compression_attack_time; void* compression_threshold; void* compression_gain; void* compression_enabled; void* limiter_deviation; void* limiter_release_time; void* limiter_enabled; void* rds_radio_text; void* rds_ps_name; void* rds_deviation; int rds_alt_freqs; void* rds_alt_freqs_enable; void* rds_dyn_pty; void* rds_ms; void* rds_ta; void* rds_tp; void* rds_stereo; void* rds_art_head; void* rds_compressed; void* rds_pty; void* rds_pi; struct v4l2_ctrl_handler ctrl_handler; int work; int * vio; int * vdd; int * gpio_reset; } ;
struct radio_si4713_platform_data {struct i2c_client* subdev; } ;
struct platform_device {int dummy; } ;
struct TYPE_13__ {struct device_node* of_node; struct si4713_platform_data* platform_data; } ;
struct i2c_client {int name; scalar_t__ irq; TYPE_6__ dev; } ;
struct device_node {int dummy; } ;
typedef int si4713_pdev_pdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ FUNC_0 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (int *) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (TYPE_6__*,char*,...) ;
 int * FUNC_4 (TYPE_6__*,char*,int ) ;
 struct si4713_device* FUNC_5 (TYPE_6__*,int,int ) ;
 void* FUNC_6 (TYPE_6__*,char*) ;
 int FUNC_7 (TYPE_6__*,scalar_t__,int ,int ,int ,struct si4713_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct platform_device*,struct radio_si4713_platform_data*,int) ;
 struct platform_device* FUNC_11 (char*,int) ;
 int FUNC_12 (struct platform_device*) ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_13 (struct si4713_device*) ;
 int VAR_66 ;
 int FUNC_14 (int,void**) ;
 int FUNC_15 (struct v4l2_ctrl_handler*) ;
 int FUNC_16 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_17 (struct v4l2_ctrl_handler*,int *,int *) ;
 void* FUNC_18 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_19 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 int FUNC_20 (int,int ,TYPE_1__*,char*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,char*) ;
 int FUNC_23 (TYPE_1__*,struct i2c_client*,int *) ;
 int FUNC_24 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_67)
{
 struct si4713_device *VAR_68;
 struct v4l2_ctrl_handler *VAR_69;
 struct si4713_platform_data *VAR_70 = VAR_67->dev.platform_data;
 struct device_node *VAR_71 = VAR_67->dev.of_node;
 struct radio_si4713_platform_data VAR_72;
 struct platform_device *VAR_73;
 int VAR_74;

 VAR_68 = FUNC_5(&VAR_67->dev, sizeof(*VAR_68), VAR_15);
 if (!VAR_68) {
  FUNC_3(&VAR_67->dev, "Failed to alloc video device.\n");
  VAR_74 = -VAR_13;
  goto exit;
 }

 VAR_68->gpio_reset = FUNC_4(&VAR_67->dev, "reset",
         VAR_16);
 if (FUNC_0(VAR_68->gpio_reset)) {
  VAR_74 = FUNC_1(VAR_68->gpio_reset);
  FUNC_3(&VAR_67->dev, "Failed to request gpio: %d\n", VAR_74);
  goto exit;
 }

 VAR_68->vdd = FUNC_6(&VAR_67->dev, "vdd");
 if (FUNC_0(VAR_68->vdd)) {
  VAR_74 = FUNC_1(VAR_68->vdd);
  if (VAR_74 == -VAR_14)
   goto exit;

  FUNC_2(&VAR_67->dev, "no vdd regulator found: %d\n", VAR_74);
  VAR_68->vdd = ((void*)0);
 }

 VAR_68->vio = FUNC_6(&VAR_67->dev, "vio");
 if (FUNC_0(VAR_68->vio)) {
  VAR_74 = FUNC_1(VAR_68->vio);
  if (VAR_74 == -VAR_14)
   goto exit;

  FUNC_2(&VAR_67->dev, "no vio regulator found: %d\n", VAR_74);
  VAR_68->vio = ((void*)0);
 }

 FUNC_23(&VAR_68->sd, VAR_67, &VAR_66);

 FUNC_8(&VAR_68->work);

 VAR_69 = &VAR_68->ctrl_handler;
 FUNC_16(VAR_69, 20);
 VAR_68->mute = FUNC_18(VAR_69, &VAR_64,
   VAR_40, 0, 1, 1, VAR_6);

 VAR_68->rds_pi = FUNC_18(VAR_69, &VAR_64,
   VAR_51, 0, 0xffff, 1, VAR_11);
 VAR_68->rds_pty = FUNC_18(VAR_69, &VAR_64,
   VAR_53, 0, 31, 1, VAR_12);
 VAR_68->rds_compressed = FUNC_18(VAR_69, &VAR_64,
   VAR_46, 0, 1, 1, 0);
 VAR_68->rds_art_head = FUNC_18(VAR_69, &VAR_64,
   VAR_45, 0, 1, 1, 0);
 VAR_68->rds_stereo = FUNC_18(VAR_69, &VAR_64,
   VAR_49, 0, 1, 1, 1);
 VAR_68->rds_tp = FUNC_18(VAR_69, &VAR_64,
   VAR_56, 0, 1, 1, 0);
 VAR_68->rds_ta = FUNC_18(VAR_69, &VAR_64,
   VAR_55, 0, 1, 1, 0);
 VAR_68->rds_ms = FUNC_18(VAR_69, &VAR_64,
   VAR_50, 0, 1, 1, 1);
 VAR_68->rds_dyn_pty = FUNC_18(VAR_69, &VAR_64,
   VAR_48, 0, 1, 1, 0);
 VAR_68->rds_alt_freqs_enable = FUNC_18(VAR_69, &VAR_64,
   VAR_44, 0, 1, 1, 0);
 VAR_68->rds_alt_freqs = FUNC_17(VAR_69, &VAR_63, ((void*)0));
 VAR_68->rds_deviation = FUNC_18(VAR_69, &VAR_64,
   VAR_47, 0, VAR_26,
   10, VAR_10);





 VAR_68->rds_ps_name = FUNC_18(VAR_69, &VAR_64,
   VAR_52, 0, VAR_27, 8, 0);





 VAR_68->rds_radio_text = FUNC_18(VAR_69, &VAR_64,
   VAR_54, 0, VAR_28, 32, 0);

 VAR_68->limiter_enabled = FUNC_18(VAR_69, &VAR_64,
   VAR_38, 0, 1, 1, 1);
 VAR_68->limiter_release_time = FUNC_18(VAR_69, &VAR_64,
   VAR_39, 250,
   VAR_23, 10, VAR_5);
 VAR_68->limiter_deviation = FUNC_18(VAR_69, &VAR_64,
   VAR_37, 0,
   VAR_22, 10, VAR_4);

 VAR_68->compression_enabled = FUNC_18(VAR_69, &VAR_64,
   VAR_33, 0, 1, 1, 1);
 VAR_68->compression_gain = FUNC_18(VAR_69, &VAR_64,
   VAR_34, 0, VAR_19, 1,
   VAR_1);
 VAR_68->compression_threshold = FUNC_18(VAR_69, &VAR_64,
   VAR_36,
   VAR_29, VAR_21, 1,
   VAR_3);
 VAR_68->compression_attack_time = FUNC_18(VAR_69, &VAR_64,
   VAR_32, 0,
   VAR_18, 500, VAR_0);
 VAR_68->compression_release_time = FUNC_18(VAR_69, &VAR_64,
   VAR_35, 100000,
   VAR_20, 100000, VAR_2);

 VAR_68->pilot_tone_enabled = FUNC_18(VAR_69, &VAR_64,
   VAR_42, 0, 1, 1, 1);
 VAR_68->pilot_tone_deviation = FUNC_18(VAR_69, &VAR_64,
   VAR_41, 0, VAR_24,
   10, VAR_7);
 VAR_68->pilot_tone_freq = FUNC_18(VAR_69, &VAR_64,
   VAR_43, 0, VAR_25,
   1, VAR_8);

 VAR_68->tune_preemphasis = FUNC_19(VAR_69, &VAR_64,
   VAR_59,
   VAR_61, 0, VAR_60);
 VAR_68->tune_pwr_level = FUNC_18(VAR_69, &VAR_64,
   VAR_58, 0, VAR_31,
   1, VAR_9);
 VAR_68->tune_ant_cap = FUNC_18(VAR_69, &VAR_64,
   VAR_57, 0, VAR_30,
   1, 0);

 if (VAR_69->error) {
  VAR_74 = VAR_69->error;
  goto free_ctrls;
 }
 FUNC_14(29, &VAR_68->mute);
 VAR_68->sd.ctrl_handler = VAR_69;

 if (VAR_67->irq) {
  VAR_74 = FUNC_7(&VAR_67->dev, VAR_67->irq,
   VAR_65, VAR_17,
   VAR_67->name, VAR_68);
  if (VAR_74 < 0) {
   FUNC_22(&VAR_68->sd, "Could not request IRQ\n");
   goto free_ctrls;
  }
  FUNC_20(1, VAR_62, &VAR_68->sd, "IRQ requested.\n");
 } else {
  FUNC_24(&VAR_68->sd, "IRQ not configured. Using timeouts.\n");
 }

 VAR_74 = FUNC_13(VAR_68);
 if (VAR_74 < 0) {
  FUNC_22(&VAR_68->sd, "Failed to probe device information.\n");
  goto free_ctrls;
 }

 if (!VAR_71 && (!VAR_70 || !VAR_70->is_platform_device))
  return 0;

 VAR_73 = FUNC_11("radio-si4713", -1);
 if (!VAR_73) {
  VAR_74 = -VAR_13;
  goto put_main_pdev;
 }

 VAR_72.subdev = VAR_67;
 VAR_74 = FUNC_10(VAR_73, &VAR_72,
     sizeof(VAR_72));
 if (VAR_74)
  goto put_main_pdev;

 VAR_74 = FUNC_9(VAR_73);
 if (VAR_74)
  goto put_main_pdev;

 VAR_68->pd = VAR_73;

 return 0;

put_main_pdev:
 FUNC_12(VAR_73);
 FUNC_21(&VAR_68->sd);
free_ctrls:
 FUNC_15(VAR_69);
exit:
 return VAR_74;
}
