
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm {int monitor_on; TYPE_1__* fw; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;


 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct iwl_mvm *VAR_11,
     struct ieee80211_hdr *VAR_12,
     struct ieee80211_rx_status *VAR_13,
     u32 VAR_14,
     u8 *VAR_15)
{
 if (!FUNC_2(VAR_12->frame_control) ||
     (VAR_14 & VAR_8) ==
        VAR_9)
  return 0;


 if ((VAR_14 & VAR_8) ==
     VAR_7)
  return 0;

 switch (VAR_14 & VAR_8) {
 case 131:

  if (!(VAR_14 & VAR_6))
   return -1;

  VAR_13->flag |= VAR_4;
  *VAR_15 = VAR_0;
  return 0;

 case 129:

  if (!FUNC_1(&VAR_11->fw->ucode_capa,
    VAR_3) &&
      !(VAR_14 & VAR_10))
   return 0;
  *VAR_15 = VAR_1;


 case 128:
  if (!(VAR_14 & VAR_5))
   return -1;

  VAR_13->flag |= VAR_4;
  if ((VAR_14 & VAR_8) ==
    128)
   *VAR_15 = VAR_2;
  return 0;

 case 130:
  if (!(VAR_14 & VAR_6))
   return -1;
  VAR_13->flag |= VAR_4;
  return 0;

 default:

  if (!VAR_11->monitor_on)
   FUNC_0(VAR_11, "Unhandled alg: 0x%x\n", VAR_14);
 }

 return 0;
}
