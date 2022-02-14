
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_mci {int gpm_len; int gpm_idx; int update_2g5g; int config; int last_recovery; int query_bt; int need_flush_btinfo; int unhalt_bt_gpm; void* bt_state; int ready; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int,int ) ;
 int FUNC_11 (struct ath_hw*,int,int) ;
 int FUNC_12 (struct ath_hw*,int) ;
 int FUNC_13 (struct ath_hw*,int) ;
 int FUNC_14 (struct ath_hw*,int) ;
 int FUNC_15 (struct ath_hw*) ;
 int FUNC_16 (struct ath_hw*) ;
 int FUNC_17 (struct ath_hw*) ;
 int FUNC_18 (int ,int ,char*) ;

u32 FUNC_19(struct ath_hw *VAR_16, u32 VAR_17)
{
 struct ath9k_hw_mci *VAR_18 = &VAR_16->btcoex_hw.mci;
 u32 VAR_19 = 0, VAR_20;
 u8 VAR_21;

 switch (VAR_17) {
 case 139:
  if (VAR_18->ready) {
   VAR_19 = FUNC_1(VAR_16, VAR_0);

   if ((VAR_19 == 0xdeadbeef) || (VAR_19 == 0xffffffff))
    VAR_19 = 0;
  }
  VAR_19 &= VAR_1;
  break;
 case 138:
  VAR_19 = FUNC_0(FUNC_1(VAR_16, VAR_3), VAR_4);

  if (VAR_19 < VAR_18->gpm_len)
   VAR_18->gpm_idx = VAR_19;
  else
   VAR_18->gpm_idx = 0;
  break;
 case 137:
  VAR_19 = FUNC_0(FUNC_1(VAR_16, VAR_7),
        VAR_5);

  VAR_19 <<= 4;
  break;
 case 133:
  VAR_19 = FUNC_0(FUNC_1(VAR_16, VAR_7),
      VAR_6) ?
   VAR_13 : VAR_12;
  break;
 case 128:
  VAR_18->bt_state = VAR_12;
  FUNC_12(VAR_16, 1);
  FUNC_14(VAR_16, 1);

  if (VAR_18->unhalt_bt_gpm)
   FUNC_11(VAR_16, 0, 1);

  FUNC_6(VAR_16, 0);
  break;
 case 132:
  FUNC_9(VAR_16);
  VAR_18->update_2g5g = 1;

  if (VAR_18->config & VAR_10) {

   if ((FUNC_1(VAR_16, VAR_2) &
        VAR_9) !=
       VAR_9) {
    FUNC_7(VAR_16);
   }
  }
  break;
 case 129:
  FUNC_13(VAR_16, 1);
  break;
 case 130:
  FUNC_12(VAR_16, 1);
  break;
 case 131:
  VAR_21 = VAR_14;
  FUNC_10(VAR_16, 1, VAR_21);
  break;
 case 134:
  VAR_20 = FUNC_16(VAR_16);
  if ((VAR_20 - VAR_18->last_recovery) <= VAR_15) {
   FUNC_18(FUNC_15(VAR_16), VAR_11,
    "(MCI) ignore Rx recovery\n");
   break;
  }
  FUNC_18(FUNC_15(VAR_16), VAR_11, "(MCI) RECOVER RX\n");
  VAR_18->last_recovery = VAR_20;
  FUNC_8(VAR_16);
  VAR_18->query_bt = 1;
  VAR_18->need_flush_btinfo = 1;
  FUNC_14(VAR_16, 1);
  FUNC_6(VAR_16, 0);
  break;
 case 135:
  VAR_19 = !(VAR_18->config & VAR_8);
  break;
 case 136:
  VAR_19 = (!VAR_18->unhalt_bt_gpm && VAR_18->need_flush_btinfo) ? 1 : 0;
  VAR_18->need_flush_btinfo = 0;
  break;
 case 143:
  if (FUNC_17(VAR_16))
   VAR_19 = FUNC_3(VAR_16);
  break;
 case 140:
  if (FUNC_17(VAR_16))
   FUNC_5(VAR_16);
  break;
 case 142:
  if (FUNC_17(VAR_16))
   VAR_19 = FUNC_2(VAR_16);
  break;
 case 141:
  if (FUNC_17(VAR_16))
   VAR_19 = FUNC_4(VAR_16);
  break;
 default:
  break;
 }

 return VAR_19;
}
