
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct il_priv {int hw; } ;
struct TYPE_4__ {scalar_t__ payload; } ;
struct il_device_cmd {TYPE_1__ cmd; } ;
struct il3945_tx_cmd {int data_retry_limit; int rate; int* supp_rates; int tx_flags; void* rts_retry_limit; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_6__ {int hw_value; } ;
struct TYPE_5__ {int plcp; } ;


 int FUNC_0 (char*,int,int,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 TYPE_3__* FUNC_1 (int ,struct ieee80211_tx_info*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int,int const) ;

void
FUNC_5(struct il_priv *VAR_6, struct il_device_cmd *VAR_7,
       struct ieee80211_tx_info *VAR_8,
       struct ieee80211_hdr *VAR_9, int VAR_10)
{
 u16 VAR_11 = FUNC_1(VAR_6->hw, VAR_8)->hw_value;
 u16 VAR_12 = FUNC_4(VAR_11 & 0xffff, VAR_4 - 1);
 u16 VAR_13;
 int VAR_14;
 const u8 VAR_15 = 7;
 u8 VAR_16;
 __le32 VAR_17;
 __le16 VAR_18 = VAR_9->frame_control;
 struct il3945_tx_cmd *VAR_19 = (struct il3945_tx_cmd *)VAR_7->cmd.payload;

 VAR_14 = VAR_5[VAR_12].plcp;
 VAR_17 = VAR_19->tx_flags;



 VAR_13 = VAR_3;


 if (FUNC_2(VAR_18))
  VAR_16 = 3;
 else
  VAR_16 = VAR_0;
 VAR_19->data_retry_limit = VAR_16;

 VAR_19->rts_retry_limit = FUNC_4(VAR_16, VAR_15);

 VAR_19->rate = VAR_14;
 VAR_19->tx_flags = VAR_17;


 VAR_19->supp_rates[0] =
     ((VAR_13 & VAR_2) >> VAR_1) & 0xFF;


 VAR_19->supp_rates[1] = (VAR_13 & 0xF);

 FUNC_0("Tx sta id: %d, rate: %d (plcp), flags: 0x%4X "
        "cck/ofdm mask: 0x%x/0x%x\n", VAR_10, VAR_19->rate,
        FUNC_3(VAR_19->tx_flags), VAR_19->supp_rates[1],
        VAR_19->supp_rates[0]);
}
