
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {scalar_t__ bt_state; int need_flush_btinfo; int query_bt; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_7,
      bool VAR_8, u8 VAR_9)
{
 struct ath9k_hw_mci *VAR_10 = &VAR_7->btcoex_hw.mci;
 u32 VAR_11[4] = {0, 0, 0, 0};
 bool VAR_12;

 if (VAR_10->bt_state == VAR_0)
  return;

 VAR_12 = !!(VAR_9 & (VAR_4 |
     VAR_5));
 FUNC_0(VAR_11, VAR_2,
    VAR_6);

 *(((u8 *)VAR_11) + VAR_3) = VAR_9;





 if (!FUNC_1(VAR_7, VAR_1, 0, VAR_11, 16,
    VAR_8, 1)) {
  if (VAR_12)
   VAR_10->need_flush_btinfo = 1;
 }

 if (VAR_12)
  VAR_10->query_bt = 0;
}
