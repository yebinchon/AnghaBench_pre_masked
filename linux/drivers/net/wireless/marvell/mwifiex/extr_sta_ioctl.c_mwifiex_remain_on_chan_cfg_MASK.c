
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {int adapter; } ;
struct ieee80211_channel {int band; int center_freq; } ;
struct host_cmd_ds_remain_on_chan {int band_cfg; int status; int duration; int channel; int action; } ;
typedef int roc_cfg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct host_cmd_ds_remain_on_chan*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 (struct mwifiex_private*,int ,scalar_t__,int ,struct host_cmd_ds_remain_on_chan*,int) ;

int
FUNC_7(struct mwifiex_private *VAR_4, u16 VAR_5,
      struct ieee80211_channel *VAR_6,
      unsigned int VAR_7)
{
 struct host_cmd_ds_remain_on_chan VAR_8;
 u8 VAR_9;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.action = FUNC_0(VAR_5);
 if (VAR_5 == VAR_1) {
  VAR_8.band_cfg = VAR_6->band;
  VAR_9 = FUNC_4(VAR_3);
  VAR_8.band_cfg |= (VAR_9 << 2);

  VAR_8.channel =
   FUNC_2(VAR_6->center_freq);
  VAR_8.duration = FUNC_1(VAR_7);
 }
 if (FUNC_6(VAR_4, VAR_2,
        VAR_5, 0, &VAR_8, 1)) {
  FUNC_5(VAR_4->adapter, VAR_0,
       "failed to remain on channel\n");
  return -1;
 }

 return VAR_8.status;
}
