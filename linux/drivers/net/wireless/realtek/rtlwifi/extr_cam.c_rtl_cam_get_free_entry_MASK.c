
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int hwsec_cam_bitmap; size_t** hwsec_cam_sta_addr; } ;
struct rtl_priv {TYPE_1__ sec; } ;
struct ieee80211_hw {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (size_t*,size_t*) ;
 int FUNC_2 (size_t*,size_t*,int ) ;
 int FUNC_3 (char*,...) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

u8 FUNC_5(struct ieee80211_hw *VAR_2, u8 *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5 = (VAR_4->sec.hwsec_cam_bitmap) >> 4;
 u8 VAR_6 = 0;
 u8 VAR_7, *VAR_8;

 if (((void*)0) == VAR_3) {
  FUNC_3("sta_addr is NULL.\n");
  return VAR_1;
 }

 for (VAR_7 = 4; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = VAR_4->sec.hwsec_cam_sta_addr[VAR_7];
  if (FUNC_1(VAR_8, VAR_3))
   return VAR_7;
 }

 for (VAR_6 = 4; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_5 & FUNC_0(0)) == 0) {
   FUNC_3("-----hwsec_cam_bitmap: 0x%x entry_idx=%d\n",
          VAR_4->sec.hwsec_cam_bitmap, VAR_6);
   VAR_4->sec.hwsec_cam_bitmap |= FUNC_0(0) << VAR_6;
   FUNC_2(VAR_4->sec.hwsec_cam_sta_addr[VAR_6],
          VAR_3, VAR_0);
   return VAR_6;
  }
  VAR_5 = VAR_5 >> 1;
 }
 return VAR_1;
}
