
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct backlight_device {int dummy; } ;
struct adp8860_bl {int cached_daylight_max; scalar_t__ gdwn_dis; scalar_t__ en_ambl_sens; struct adp8860_backlight_platform_data* pdata; struct i2c_client* client; } ;
struct adp8860_backlight_platform_data {int bl_led_assign; int l1_daylight_max; int l1_daylight_dim; int l2_office_max; int l2_office_dim; int l3_dark_max; int l3_dark_dim; int l2_trip; int l2_hyst; int l3_trip; int l3_hyst; int bl_fade_out; int bl_fade_in; int bl_fade_law; int abml_filt; } ;


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
 int FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (int ,int ) ;
 int VAR_16 ;
 int FUNC_2 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 struct adp8860_bl* FUNC_5 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_6(struct backlight_device *VAR_21)
{
 struct adp8860_bl *VAR_22 = FUNC_5(VAR_21);
 struct i2c_client *VAR_23 = VAR_22->client;
 struct adp8860_backlight_platform_data *VAR_24 = VAR_22->pdata;
 int VAR_25 = 0;

 VAR_25 |= FUNC_4(VAR_23, VAR_7, ~VAR_24->bl_led_assign);
 VAR_25 |= FUNC_4(VAR_23, VAR_4, VAR_24->l1_daylight_max);
 VAR_25 |= FUNC_4(VAR_23, VAR_0, VAR_24->l1_daylight_dim);

 if (VAR_22->en_ambl_sens) {
  VAR_22->cached_daylight_max = VAR_24->l1_daylight_max;
  VAR_25 |= FUNC_4(VAR_23, VAR_5,
      VAR_24->l2_office_max);
  VAR_25 |= FUNC_4(VAR_23, VAR_1,
      VAR_24->l2_office_dim);
  VAR_25 |= FUNC_4(VAR_23, VAR_6,
      VAR_24->l3_dark_max);
  VAR_25 |= FUNC_4(VAR_23, VAR_2,
      VAR_24->l3_dark_dim);

  VAR_25 |= FUNC_4(VAR_23, VAR_11, VAR_24->l2_trip);
  VAR_25 |= FUNC_4(VAR_23, VAR_10, VAR_24->l2_hyst);
  VAR_25 |= FUNC_4(VAR_23, VAR_13, VAR_24->l3_trip);
  VAR_25 |= FUNC_4(VAR_23, VAR_12, VAR_24->l3_hyst);
  VAR_25 |= FUNC_4(VAR_23, VAR_8, VAR_18 | VAR_19 |
      FUNC_0(VAR_24->abml_filt));
 }

 VAR_25 |= FUNC_4(VAR_23, VAR_9,
   FUNC_1(VAR_24->bl_fade_law, 0));

 VAR_25 |= FUNC_4(VAR_23, VAR_3, FUNC_2(VAR_24->bl_fade_in,
   VAR_24->bl_fade_out));

 VAR_25 |= FUNC_3(VAR_23, VAR_14, VAR_15 | VAR_16 | VAR_20 |
   (VAR_22->gdwn_dis ? VAR_17 : 0));

 return VAR_25;
}
