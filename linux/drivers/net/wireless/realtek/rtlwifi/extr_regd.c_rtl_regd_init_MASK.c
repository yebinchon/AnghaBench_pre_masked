
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_4__ {scalar_t__ country_code; scalar_t__* alpha2; } ;
struct TYPE_3__ {scalar_t__ channel_plan; } ;
struct rtl_priv {TYPE_2__ regd; TYPE_1__ efuse; } ;
struct ieee80211_hw {struct wiphy* wiphy; } ;
struct country_code_to_enum_rd {scalar_t__* iso_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 struct country_code_to_enum_rd* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,struct wiphy*,void (*) (struct wiphy*,struct regulatory_request*)) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

int FUNC_5(struct ieee80211_hw *VAR_6,
    void (*VAR_7)(struct wiphy *VAR_8,
           struct regulatory_request *VAR_9))
{
 struct rtl_priv *VAR_10 = FUNC_4(VAR_6);
 struct wiphy *VAR_11 = VAR_6->wiphy;
 struct country_code_to_enum_rd *VAR_12 = ((void*)0);

 if (VAR_11 == ((void*)0) || &VAR_10->regd == ((void*)0))
  return -VAR_5;


 VAR_10->regd.country_code =
  FUNC_3(VAR_10->efuse.channel_plan);

 FUNC_0(VAR_10, VAR_0, VAR_3,
   "rtl: EEPROM regdomain: 0x%0x country code: %d\n",
   VAR_10->efuse.channel_plan, VAR_10->regd.country_code);

 if (VAR_10->regd.country_code >= VAR_1) {
  FUNC_0(VAR_10, VAR_0, VAR_3,
    "rtl: EEPROM indicates invalid country code, world wide 13 should be used\n");

  VAR_10->regd.country_code = VAR_2;
 }

 VAR_12 = FUNC_1(VAR_10->regd.country_code);

 if (VAR_12) {
  VAR_10->regd.alpha2[0] = VAR_12->iso_name[0];
  VAR_10->regd.alpha2[1] = VAR_12->iso_name[1];
 } else {
  VAR_10->regd.alpha2[0] = '0';
  VAR_10->regd.alpha2[1] = '0';
 }

 FUNC_0(VAR_10, VAR_0, VAR_4,
   "rtl: Country alpha2 being used: %c%c\n",
    VAR_10->regd.alpha2[0], VAR_10->regd.alpha2[1]);

 FUNC_2(&VAR_10->regd, VAR_11, VAR_7);

 return 0;
}
