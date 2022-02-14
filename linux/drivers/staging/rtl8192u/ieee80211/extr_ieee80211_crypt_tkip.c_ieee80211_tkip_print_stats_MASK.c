
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tkip_data {int key_idx; int key_set; int tx_iv32; int tx_iv16; int rx_iv32; int rx_iv16; int dot11RSNAStatsTKIPLocalMICFailures; int dot11RSNAStatsTKIPICVErrors; int dot11RSNAStatsTKIPReplays; } ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, void *VAR_1)
{
 struct ieee80211_tkip_data *VAR_2 = VAR_1;

 VAR_0 += FUNC_0(VAR_0, "key[%d] alg=TKIP key_set=%d "
       "tx_pn=%02x%02x%02x%02x%02x%02x "
       "rx_pn=%02x%02x%02x%02x%02x%02x "
       "replays=%d icv_errors=%d local_mic_failures=%d\n",
       VAR_2->key_idx, VAR_2->key_set,
       (VAR_2->tx_iv32 >> 24) & 0xff,
       (VAR_2->tx_iv32 >> 16) & 0xff,
       (VAR_2->tx_iv32 >> 8) & 0xff,
       VAR_2->tx_iv32 & 0xff,
       (VAR_2->tx_iv16 >> 8) & 0xff,
       VAR_2->tx_iv16 & 0xff,
       (VAR_2->rx_iv32 >> 24) & 0xff,
       (VAR_2->rx_iv32 >> 16) & 0xff,
       (VAR_2->rx_iv32 >> 8) & 0xff,
       VAR_2->rx_iv32 & 0xff,
       (VAR_2->rx_iv16 >> 8) & 0xff,
       VAR_2->rx_iv16 & 0xff,
       VAR_2->dot11RSNAStatsTKIPReplays,
       VAR_2->dot11RSNAStatsTKIPICVErrors,
       VAR_2->dot11RSNAStatsTKIPLocalMICFailures);
 return VAR_0;
}
