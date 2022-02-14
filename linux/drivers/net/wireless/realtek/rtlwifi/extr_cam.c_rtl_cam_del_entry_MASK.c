
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_2__ {size_t** hwsec_cam_sta_addr; size_t hwsec_cam_bitmap; } ;
struct rtl_priv {TYPE_1__ sec; } ;
struct ieee80211_hw {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,size_t) ;
 size_t VAR_2 ;
 int FUNC_2 (size_t*) ;
 scalar_t__ FUNC_3 (size_t*,size_t*) ;
 scalar_t__ FUNC_4 (size_t*) ;
 int FUNC_5 (char*,...) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

void FUNC_7(struct ieee80211_hw *VAR_3, u8 *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6;
 u8 VAR_7, *VAR_8;

 if (((void*)0) == VAR_4) {
  FUNC_5("sta_addr is NULL.\n");
  return;
 }

 if (FUNC_4(VAR_4)) {
  FUNC_5("sta_addr is %pM\n", VAR_4);
  return;
 }

 for (VAR_7 = 4; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = VAR_5->sec.hwsec_cam_sta_addr[VAR_7];
  VAR_6 = (VAR_5->sec.hwsec_cam_bitmap) >> VAR_7;
  if (((VAR_6 & FUNC_0(0)) == FUNC_0(0)) &&
      (FUNC_3(VAR_8, VAR_4))) {

   FUNC_2(VAR_5->sec.hwsec_cam_sta_addr[VAR_7]);
   VAR_5->sec.hwsec_cam_bitmap &= ~(FUNC_0(0) << VAR_7);
   FUNC_1(VAR_5, VAR_0, VAR_1,
     "&&&&&&&&&del entry %d\n", VAR_7);
  }
 }
 return;
}
