
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_btcoex_hw {int * wlan_weight; } ;
struct ath_hw {struct ath_btcoex_hw btcoex_hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_2)
{
 struct ath_btcoex_hw *VAR_3 = &VAR_2->btcoex_hw;
 int VAR_4;

 FUNC_2(VAR_2, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_2, FUNC_0(VAR_4),
     VAR_3->wlan_weight[VAR_4]);
}
