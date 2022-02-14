
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rsi_hw {scalar_t__ device_model; struct ieee80211_hw* hw; } ;
struct rsi_common {scalar_t__ channel_width; scalar_t__ endpoint; scalar_t__ band; int rf_reset; struct rsi_hw* priv; } ;
struct TYPE_3__ {scalar_t__ width; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct ieee80211_hw {TYPE_2__ conf; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct rsi_common*) ;
 int FUNC_1 (struct rsi_common*) ;
 int FUNC_2 (struct rsi_common*) ;
 int FUNC_3 (struct rsi_common*) ;

int FUNC_4(struct rsi_common *VAR_10,
     struct ieee80211_channel *VAR_11)
{
 struct rsi_hw *VAR_12 = VAR_10->priv;
 struct ieee80211_hw *VAR_13 = VAR_12->hw;
 u8 VAR_14 = VAR_10->channel_width;
 u8 VAR_15 = VAR_10->endpoint;
 int VAR_16 = 0;

 if (VAR_10->band != VAR_11->band) {
  VAR_10->rf_reset = 1;
  VAR_10->band = VAR_11->band;
 }

 if ((VAR_13->conf.chandef.width == VAR_8) ||
     (VAR_13->conf.chandef.width == VAR_7))
  VAR_10->channel_width = VAR_0;
 else
  VAR_10->channel_width = VAR_1;

 if (VAR_10->band == VAR_6) {
  if (VAR_10->channel_width)
   VAR_10->endpoint = VAR_3;
  else
   VAR_10->endpoint = VAR_2;
 } else {
  if (VAR_10->channel_width)
   VAR_10->endpoint = VAR_5;
  else
   VAR_10->endpoint = VAR_4;
 }

 if (VAR_10->endpoint != VAR_15) {
  VAR_16 = FUNC_3(VAR_10);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_10->channel_width != VAR_14) {
  if (VAR_12->device_model == VAR_9)
   VAR_16 = FUNC_0(VAR_10);
  else
   VAR_16 = FUNC_1(VAR_10);
  if (VAR_16)
   return VAR_16;

  VAR_16 = FUNC_2(VAR_10);
  if (VAR_16)
   return VAR_16;
 }

 return VAR_16;
}
