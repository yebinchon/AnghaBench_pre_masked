
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_phy {TYPE_1__* iqk_matrix; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct iqk_matrix_regs {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int** value; int iqk_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int ) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);
 u8 VAR_7;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "settings regs %d default regs %d\n",
   (int)(sizeof(VAR_6->iqk_matrix) /
         sizeof(struct iqk_matrix_regs)),
   VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->iqk_matrix[VAR_7].value[0][0] = 0x100;
  VAR_6->iqk_matrix[VAR_7].value[0][2] = 0x100;
  VAR_6->iqk_matrix[VAR_7].value[0][4] = 0x100;
  VAR_6->iqk_matrix[VAR_7].value[0][6] = 0x100;
  VAR_6->iqk_matrix[VAR_7].value[0][1] = 0x0;
  VAR_6->iqk_matrix[VAR_7].value[0][3] = 0x0;
  VAR_6->iqk_matrix[VAR_7].value[0][5] = 0x0;
  VAR_6->iqk_matrix[VAR_7].value[0][7] = 0x0;
  VAR_6->iqk_matrix[VAR_7].iqk_done = 0;
 }
}
