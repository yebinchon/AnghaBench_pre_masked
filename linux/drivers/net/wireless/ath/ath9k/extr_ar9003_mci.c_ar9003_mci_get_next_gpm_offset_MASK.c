
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {int gpm_len; int gpm_idx; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ath_hw*,int) ;

u32 FUNC_4(struct ath_hw *VAR_7, u32 *VAR_8)
{
 struct ath9k_hw_mci *VAR_9 = &VAR_7->btcoex_hw.mci;
 u32 VAR_10, VAR_11 = 0, VAR_12;
 FUNC_2(VAR_7, VAR_3,
   VAR_2);

 VAR_12 = FUNC_0(FUNC_1(VAR_7, VAR_0), VAR_1);
 VAR_10 = VAR_12;

 if (!VAR_10)
  VAR_10 = VAR_9->gpm_len - 1;
 else if (VAR_10 >= VAR_9->gpm_len) {
  if (VAR_10 != 0xFFFF)
   VAR_10 = 0;
 } else {
  VAR_10--;
 }

 if ((VAR_10 == 0xFFFF) || (VAR_12 == VAR_9->gpm_idx)) {
  VAR_10 = VAR_4;
  VAR_11 = VAR_6;
  goto out;
 }
 for (;;) {
  u32 VAR_13;



  if (VAR_10 != VAR_9->gpm_idx)
   VAR_11 = VAR_5;
  else
   VAR_11 = VAR_6;

  VAR_13 = VAR_9->gpm_idx;

  if (VAR_13 >= VAR_9->gpm_len)
   VAR_13 = 0;

  VAR_9->gpm_idx++;

  if (VAR_9->gpm_idx >= VAR_9->gpm_len)
   VAR_9->gpm_idx = 0;

  if (FUNC_3(VAR_7, VAR_13)) {
   VAR_10 = VAR_13;
   break;
  }

  if (VAR_11 == VAR_6) {
   VAR_10 = VAR_4;
   break;
  }
 }

 if (VAR_10 != VAR_4)
  VAR_10 <<= 4;
out:
 if (VAR_8)
  *VAR_8 = VAR_11;

 return VAR_10;
}
