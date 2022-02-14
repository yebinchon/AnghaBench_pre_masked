
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (char*,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int ) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_hw *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_5(VAR_4);
 bool VAR_8 = 1;
 long VAR_9 = 0;
 u32 VAR_10 = FUNC_0(VAR_5) |
     FUNC_1(VAR_6) | FUNC_2(VAR_3);

 FUNC_7(VAR_7, VAR_1, VAR_10);
 do {
  VAR_10 = FUNC_6(VAR_7, VAR_1);
  if (VAR_2 == FUNC_3(VAR_10))
   break;
  if (VAR_9 > VAR_0) {
   FUNC_4("Failed to polling write LLT done at address %d!\n",
          VAR_5);
   VAR_8 = 0;
   break;
  }
 } while (++VAR_9);
 return VAR_8;
}
