
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ gpm_idx; int query_bt; int need_flush_btinfo; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,scalar_t__,scalar_t__) ;

void FUNC_4(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_2(VAR_3);
 struct ath9k_hw_mci *VAR_5 = &VAR_3->btcoex_hw.mci;
 u32 VAR_6;




 VAR_6 = FUNC_0(FUNC_1(VAR_3, VAR_0), VAR_1);
 if (VAR_5->gpm_idx == VAR_6)
  return;
 FUNC_3(VAR_4, VAR_2, "GPM cached write pointer mismatch %d %d\n",
  VAR_5->gpm_idx, VAR_6);
 VAR_5->query_bt = 1;
 VAR_5->need_flush_btinfo = 1;
 VAR_5->gpm_idx = 0;
}
