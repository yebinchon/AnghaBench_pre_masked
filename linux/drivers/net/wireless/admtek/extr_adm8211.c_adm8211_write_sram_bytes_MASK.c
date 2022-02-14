
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211_hw*,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
         unsigned int VAR_3, u8 *VAR_4,
         unsigned int VAR_5)
{
 struct adm8211_priv *VAR_6 = VAR_2->priv;
 u32 VAR_7 = FUNC_0(VAR_1);
 unsigned int VAR_8;

 if (VAR_6->pdev->revision < VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += 2) {
   u16 VAR_9 = VAR_4[VAR_8] | (VAR_4[VAR_8 + 1] << 8);
   FUNC_2(VAR_2, VAR_3 + VAR_8 / 2, VAR_9);
  }
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += 4) {
   u32 VAR_10 = (VAR_4[VAR_8 + 0] << 0 ) | (VAR_4[VAR_8 + 1] << 8 ) |
      (VAR_4[VAR_8 + 2] << 16) | (VAR_4[VAR_8 + 3] << 24);
   FUNC_2(VAR_2, VAR_3 + VAR_8 / 4, VAR_10);
  }
 }

 FUNC_1(VAR_1, VAR_7);
}
