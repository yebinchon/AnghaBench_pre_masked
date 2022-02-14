
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_rx_mpdu_desc {int status; } ;
struct iwl_mvm {int monitor_on; TYPE_3__* trans; TYPE_1__* fw; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct TYPE_6__ {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {int gen2; } ;
struct TYPE_4__ {int ucode_capa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_20, struct ieee80211_hdr *VAR_21,
        struct ieee80211_rx_status *VAR_22, u16 VAR_23,
        struct iwl_rx_mpdu_desc *VAR_24,
        u32 VAR_25, int VAR_26, u8 *VAR_27)
{
 u16 VAR_28 = FUNC_5(VAR_24->status);
 if (VAR_23 & VAR_6 &&
     (VAR_28 & VAR_10) ==
     VAR_12 && !VAR_20->monitor_on)
  return -1;

 if (!FUNC_3(VAR_21->frame_control) ||
     (VAR_28 & VAR_10) ==
     VAR_11)
  return 0;



 switch (VAR_28 & VAR_10) {
 case 132:
 case 130:
  FUNC_0(VAR_2 != VAR_3);

  if (!(VAR_28 & VAR_9))
   return -1;

  VAR_22->flag |= VAR_14;
  if (VAR_25 & VAR_0)
   VAR_22->flag |= VAR_16;
  *VAR_27 = VAR_1;
  return 0;
 case 129:

  if (!FUNC_2(&VAR_20->fw->ucode_capa,
    VAR_13) &&
      !(VAR_28 & VAR_7))
   return 0;

  if (VAR_20->trans->trans_cfg->gen2 &&
      !(VAR_28 & VAR_19))
   VAR_22->flag |= VAR_17;

  *VAR_27 = VAR_4;

 case 128:
  if (!(VAR_28 & VAR_8))
   return -1;

  VAR_22->flag |= VAR_14;
  if ((VAR_28 & VAR_10) ==
    128)
   *VAR_27 = VAR_5;

  if (VAR_25 & VAR_0) {
   VAR_22->flag |= VAR_15;
   if (VAR_20->trans->trans_cfg->gen2)
    VAR_22->flag |= VAR_18;
  }

  return 0;
 case 131:
  if (!(VAR_28 & VAR_9))
   return -1;
  VAR_22->flag |= VAR_14;
  return 0;
 default:
  if (!FUNC_4(VAR_21->addr1) &&
      !VAR_20->monitor_on && FUNC_6())
   FUNC_1(VAR_20, "Unhandled alg: 0x%x\n", VAR_28);
 }

 return 0;
}
