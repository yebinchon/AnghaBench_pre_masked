
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_priv {TYPE_2__* contexts; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {int filter_flags; } ;
struct TYPE_4__ {TYPE_1__ active; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;


 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_priv *VAR_9,
      struct ieee80211_hdr *VAR_10,
      u32 VAR_11,
      struct ieee80211_rx_status *VAR_12)
{
 u16 VAR_13 = FUNC_1(VAR_10->frame_control);





 if (VAR_9->contexts[VAR_1].active.filter_flags &
      VAR_2)
  return 0;

 if (!(VAR_13 & VAR_0))
  return 0;

 FUNC_0(VAR_9, "decrypt_res:0x%x\n", VAR_11);
 switch (VAR_11 & VAR_8) {
 case 129:


  if ((VAR_11 & VAR_7) ==
      VAR_5)
   break;

 case 128:
  if ((VAR_11 & VAR_7) ==
      VAR_4) {


   FUNC_0(VAR_9, "Packet destroyed\n");
   return -1;
  }

 case 130:
  if ((VAR_11 & VAR_7) ==
      VAR_6) {
   FUNC_0(VAR_9, "hw decrypt successfully!!!\n");
   VAR_12->flag |= VAR_3;
  }
  break;

 default:
  break;
 }
 return 0;
}
