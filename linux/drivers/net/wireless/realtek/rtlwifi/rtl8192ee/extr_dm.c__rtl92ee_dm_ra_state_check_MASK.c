
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rate_adaptive {scalar_t__ high_rssi_thresh_for_ra; scalar_t__ low_rssi_thresh_for_ra40m; } ;
struct rtl_priv {struct rate_adaptive ra; } ;
struct ieee80211_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_hw *VAR_2,
           s32 VAR_3, u8 *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_2);
 struct rate_adaptive *VAR_6 = &VAR_5->ra;
 const u8 VAR_7 = 5;
 u32 VAR_8 = VAR_6->high_rssi_thresh_for_ra;
 u32 VAR_9 = VAR_6->low_rssi_thresh_for_ra40m;
 u8 VAR_10;







 switch (*VAR_4) {
 case 130:
 case 131:
  break;
 case 128:
  VAR_8 += VAR_7;
  break;
 case 129:
  VAR_8 += VAR_7;
  VAR_9 += VAR_7;
  break;
 default:
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "wrong rssi level setting %d !\n", *VAR_4);
  break;
 }


 if (VAR_3 > VAR_8)
  VAR_10 = 131;
 else if (VAR_3 > VAR_9)
  VAR_10 = 128;
 else
  VAR_10 = 129;

 if (*VAR_4 != VAR_10) {
  *VAR_4 = VAR_10;
  return 1;
 }

 return 0;
}
