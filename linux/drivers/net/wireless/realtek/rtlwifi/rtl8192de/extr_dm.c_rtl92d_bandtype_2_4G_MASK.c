
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ cck_inch14; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,long,scalar_t__,scalar_t__) ;
 scalar_t__** VAR_6 ;
 scalar_t__** VAR_7 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_3 (struct ieee80211_hw*,unsigned long*) ;
 long FUNC_4 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_8, long *VAR_9,
     u8 *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_5(VAR_8);
 int VAR_12;
 unsigned long VAR_13 = 0;
 long VAR_14;
 const u8 *VAR_15;


 FUNC_2(VAR_8, &VAR_13);
 VAR_14 = FUNC_4(VAR_8, VAR_5,
     VAR_4) & VAR_3;
 FUNC_3(VAR_8, &VAR_13);
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_11->dm.cck_inch14)
   VAR_15 = &VAR_6[VAR_12][2];
  else
   VAR_15 = &VAR_7[VAR_12][2];

  if (VAR_14 == FUNC_1(*((__le32 *)VAR_15))) {
   *VAR_10 = (u8)VAR_12;
   FUNC_0(VAR_11, VAR_1, VAR_2,
     "Initial reg0x%x = 0x%lx, cck_index = 0x%x, ch14 %d\n",
     VAR_5, VAR_14,
     *VAR_10,
     VAR_11->dm.cck_inch14);
   break;
  }
 }
 *VAR_9 = VAR_14;
}
