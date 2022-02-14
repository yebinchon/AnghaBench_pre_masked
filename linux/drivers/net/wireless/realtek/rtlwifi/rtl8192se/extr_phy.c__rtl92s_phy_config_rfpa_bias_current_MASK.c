
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_hal {scalar_t__ ic_class; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int ,int,scalar_t__) ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_hw *VAR_2,
       enum radio_path VAR_3)
{
 struct rtl_hal *VAR_4 = FUNC_2(FUNC_3(VAR_2));
 bool VAR_5 = 1;
 u32 VAR_6 = 0;


 if (VAR_4->ic_class != VAR_0) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_1, 0xf);
  FUNC_1(VAR_2, VAR_3, VAR_1, 0xf, VAR_6 + 1);
 }

 return VAR_5;
}
