
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lp8788_bl_config {int bl_mode; int dim_mode; int full_scale; int rise_time; int fall_time; int pwm_pol; } ;
struct lp8788_bl {int mode; TYPE_1__* lp; struct lp8788_backlight_platform_data* pdata; } ;
struct lp8788_backlight_platform_data {int bl_mode; int dim_mode; int full_scale; int rise_time; int fall_time; int pwm_pol; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 struct lp8788_bl_config VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lp8788_bl *VAR_10)
{
 struct lp8788_backlight_platform_data *VAR_11 = VAR_10->pdata;
 struct lp8788_bl_config *VAR_12 = &VAR_9;
 int VAR_13;
 u8 VAR_14;





 if (VAR_11) {
  VAR_12->bl_mode = VAR_11->bl_mode;
  VAR_12->dim_mode = VAR_11->dim_mode;
  VAR_12->full_scale = VAR_11->full_scale;
  VAR_12->rise_time = VAR_11->rise_time;
  VAR_12->fall_time = VAR_11->fall_time;
  VAR_12->pwm_pol = VAR_11->pwm_pol;
 }


 VAR_14 = (VAR_12->rise_time << VAR_8) | VAR_12->fall_time;
 VAR_13 = FUNC_1(VAR_10->lp, VAR_7, VAR_14);
 if (VAR_13)
  return VAR_13;


 VAR_14 = (VAR_12->full_scale << VAR_4) |
  (VAR_12->dim_mode << VAR_2);


 switch (VAR_12->bl_mode) {
 case 128:
  VAR_14 |= VAR_3;
  break;
 case 130:
 case 129:
  VAR_14 |= VAR_3 | VAR_5 |
   (VAR_12->pwm_pol << VAR_6);
  break;
 default:
  FUNC_0(VAR_10->lp->dev, "invalid mode: %d\n", VAR_12->bl_mode);
  return -VAR_0;
 }

 VAR_10->mode = VAR_12->bl_mode;

 return FUNC_1(VAR_10->lp, VAR_1, VAR_14);
}
