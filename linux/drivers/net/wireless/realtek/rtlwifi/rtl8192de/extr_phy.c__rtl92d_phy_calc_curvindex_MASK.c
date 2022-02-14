
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (int,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_5,
           u32 *VAR_6, u32 * VAR_7,
           bool VAR_8, u32 *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_5);
 u32 VAR_11 = 0xffffffff, VAR_12;
 u8 VAR_13, VAR_14;
 u8 VAR_15 = VAR_8 ? VAR_4 : VAR_3;

 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  if (VAR_8 && !FUNC_1(VAR_5, VAR_13 + 1))
   continue;
  VAR_9[VAR_13] = 0;
  for (VAR_14 = 0; VAR_14 < (VAR_0 * 2); VAR_14++) {
   VAR_12 = FUNC_2(VAR_6[VAR_13],
    VAR_7[VAR_14]);

   if (VAR_12 < VAR_11) {
    VAR_9[VAR_13] = VAR_14;
    VAR_11 = VAR_12;
   }
  }
  VAR_11 = 0xffffffff;
  FUNC_0(VAR_10, VAR_1, VAR_2, "curveindex[%d] = %x\n",
   VAR_13, VAR_9[VAR_13]);
 }
}
