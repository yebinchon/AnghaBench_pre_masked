
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct backlight_device {int dummy; } ;
struct adp5520_bl {int cached_daylight_max; struct adp5520_backlight_platform_data* pdata; struct device* master; } ;
struct adp5520_backlight_platform_data {int fade_out; int fade_in; scalar_t__ en_ambl_sens; int fade_led_law; int abml_filt; int l3_hyst; int l3_trip; int l2_hyst; int l2_trip; int l3_dark_dim; int l3_dark_max; int l2_office_dim; int l2_office_max; int l1_daylight_max; int l1_daylight_dim; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,int ,int) ;
 int FUNC_4 (struct device*,int ,int ) ;
 struct adp5520_bl* FUNC_5 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_6(struct backlight_device *VAR_17)
{
 struct adp5520_bl *VAR_18 = FUNC_5(VAR_17);
 struct device *VAR_19 = VAR_18->master;
 struct adp5520_backlight_platform_data *VAR_20 = VAR_18->pdata;
 int VAR_21 = 0;

 VAR_21 |= FUNC_4(VAR_19, VAR_7,
    VAR_20->l1_daylight_max);
 VAR_21 |= FUNC_4(VAR_19, VAR_6,
    VAR_20->l1_daylight_dim);

 if (VAR_20->en_ambl_sens) {
  VAR_18->cached_daylight_max = VAR_20->l1_daylight_max;
  VAR_21 |= FUNC_4(VAR_19, VAR_16,
    VAR_20->l2_office_max);
  VAR_21 |= FUNC_4(VAR_19, VAR_15,
    VAR_20->l2_office_dim);
  VAR_21 |= FUNC_4(VAR_19, VAR_5,
    VAR_20->l3_dark_max);
  VAR_21 |= FUNC_4(VAR_19, VAR_4,
    VAR_20->l3_dark_dim);
  VAR_21 |= FUNC_4(VAR_19, VAR_10,
    VAR_20->l2_trip);
  VAR_21 |= FUNC_4(VAR_19, VAR_9,
    VAR_20->l2_hyst);
  VAR_21 |= FUNC_4(VAR_19, VAR_13,
     VAR_20->l3_trip);
  VAR_21 |= FUNC_4(VAR_19, VAR_12,
    VAR_20->l3_hyst);
  VAR_21 |= FUNC_4(VAR_19, VAR_0,
    FUNC_0(VAR_20->abml_filt,
    VAR_11));
 }

 VAR_21 |= FUNC_4(VAR_19, VAR_1,
   FUNC_1(VAR_20->fade_led_law,
     VAR_20->en_ambl_sens));

 VAR_21 |= FUNC_4(VAR_19, VAR_3, FUNC_2(VAR_20->fade_in,
   VAR_20->fade_out));

 VAR_21 |= FUNC_3(VAR_19, VAR_14,
   VAR_2 | VAR_8);

 return VAR_21;
}
