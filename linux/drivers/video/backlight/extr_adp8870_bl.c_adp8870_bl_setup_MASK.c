
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct backlight_device {int dummy; } ;
struct adp8870_bl {int cached_daylight_max; scalar_t__ revid; struct adp8870_backlight_platform_data* pdata; struct i2c_client* client; } ;
struct adp8870_backlight_platform_data {int bl_led_assign; int pwm_assign; int l1_daylight_max; int l1_daylight_dim; int l2_bright_max; int l2_bright_dim; int l3_office_max; int l3_office_dim; int l4_indoor_max; int l4_indor_dim; int l5_dark_max; int l5_dark_dim; int l2_trip; int l2_hyst; int l3_trip; int l3_hyst; int l4_trip; int l4_hyst; int l5_trip; int l5_hyst; int bl_fade_out; int bl_fade_in; int bl_fade_law; int abml_filt; scalar_t__ en_ambl_sens; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ) ;
 int VAR_25 ;
 int FUNC_1 (int ,int ) ;
 int VAR_26 ;
 int FUNC_2 (int ,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 struct adp8870_bl* FUNC_5 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_6(struct backlight_device *VAR_33)
{
 struct adp8870_bl *VAR_34 = FUNC_5(VAR_33);
 struct i2c_client *VAR_35 = VAR_34->client;
 struct adp8870_backlight_platform_data *VAR_36 = VAR_34->pdata;
 int VAR_37 = 0;

 VAR_37 = FUNC_4(VAR_35, VAR_12, ~VAR_36->bl_led_assign);
 if (VAR_37)
  return VAR_37;

 VAR_37 = FUNC_4(VAR_35, VAR_24, VAR_36->pwm_assign);
 if (VAR_37)
  return VAR_37;

 VAR_37 = FUNC_4(VAR_35, VAR_7, VAR_36->l1_daylight_max);
 if (VAR_37)
  return VAR_37;

 VAR_37 = FUNC_4(VAR_35, VAR_1, VAR_36->l1_daylight_dim);
 if (VAR_37)
  return VAR_37;

 if (VAR_36->en_ambl_sens) {
  VAR_34->cached_daylight_max = VAR_36->l1_daylight_max;
  VAR_37 = FUNC_4(VAR_35, VAR_8,
      VAR_36->l2_bright_max);
  if (VAR_37)
   return VAR_37;
  VAR_37 = FUNC_4(VAR_35, VAR_2,
      VAR_36->l2_bright_dim);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_9,
      VAR_36->l3_office_max);
  if (VAR_37)
   return VAR_37;
  VAR_37 = FUNC_4(VAR_35, VAR_3,
      VAR_36->l3_office_dim);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_10,
      VAR_36->l4_indoor_max);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_4,
      VAR_36->l4_indor_dim);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_11,
      VAR_36->l5_dark_max);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_5,
      VAR_36->l5_dark_dim);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_16, VAR_36->l2_trip);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_15, VAR_36->l2_hyst);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_18, VAR_36->l3_trip);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_17, VAR_36->l3_hyst);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_20, VAR_36->l4_trip);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_19, VAR_36->l4_hyst);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_22, VAR_36->l5_trip);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_21, VAR_36->l5_hyst);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_0, VAR_31 | VAR_30 |
      VAR_29 | VAR_28);
  if (VAR_37)
   return VAR_37;

  VAR_37 = FUNC_4(VAR_35, VAR_14,
   FUNC_0(VAR_36->abml_filt));
  if (VAR_37)
   return VAR_37;
 }

 VAR_37 = FUNC_4(VAR_35, VAR_13,
   FUNC_1(VAR_36->bl_fade_law, 0));
 if (VAR_37)
  return VAR_37;

 VAR_37 = FUNC_4(VAR_35, VAR_6, FUNC_2(VAR_36->bl_fade_in,
   VAR_36->bl_fade_out));
 if (VAR_37)
  return VAR_37;




 VAR_37 = FUNC_3(VAR_35, VAR_23, VAR_25 | VAR_26 | VAR_32 |
   (VAR_34->revid == 0 ? VAR_27 : 0));

 return VAR_37;
}
