
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct survey_info {unsigned int time; unsigned int time_tx; unsigned int time_busy; int noise; } ;
struct sk_buff {scalar_t__ data; } ;
struct p54_statistics {int * sample_noise; int sample_tx; int sample_cca; int noise; int rx_bad_fcs; int rts_success; int rts_fail; int tsf32; } ;
struct p54_hdr {int req_id; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ timestamp; unsigned int cached_cca; unsigned int cached_rssi; unsigned int cached_tx; unsigned int cca; unsigned int tx; unsigned int rssi; unsigned int active; } ;
struct TYPE_3__ {unsigned int dot11RTSFailureCount; unsigned int dot11RTSSuccessCount; unsigned int dot11FCSErrorCount; } ;
struct p54_common {scalar_t__ mode; scalar_t__ tsf_low32; int update_stats; int stat_comp; TYPE_2__ survey_raw; int noise; struct survey_info* survey; struct ieee80211_channel* curchan; scalar_t__ phy_idle; scalar_t__ phy_ps; TYPE_1__ stats; int tsf_high32; } ;
struct ieee80211_channel {size_t hw_value; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (unsigned int,int) ;
 unsigned int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct p54_common*,int ) ;
 int FUNC_7 (struct p54_common*,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct p54_common *VAR_2, struct sk_buff *VAR_3)
{
 struct p54_hdr *VAR_4 = (struct p54_hdr *) VAR_3->data;
 struct p54_statistics *VAR_5 = (struct p54_statistics *) VAR_4->data;
 struct sk_buff *VAR_6;
 struct ieee80211_channel *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18;

 if (FUNC_8(VAR_2->mode == VAR_0))
  return ;

 VAR_18 = FUNC_5(VAR_5->tsf32);
 if (VAR_18 < VAR_2->tsf_low32)
  VAR_2->tsf_high32++;
 VAR_2->tsf_low32 = VAR_18;

 VAR_2->stats.dot11RTSFailureCount = FUNC_5(VAR_5->rts_fail);
 VAR_2->stats.dot11RTSSuccessCount = FUNC_5(VAR_5->rts_success);
 VAR_2->stats.dot11FCSErrorCount = FUNC_5(VAR_5->rx_bad_fcs);

 VAR_2->noise = FUNC_7(VAR_2, FUNC_5(VAR_5->noise));






 VAR_12 = VAR_18 - VAR_2->survey_raw.timestamp;






 VAR_11 = FUNC_5(VAR_5->sample_cca);
 VAR_10 = FUNC_5(VAR_5->sample_tx);
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->sample_noise); VAR_8++)
  VAR_9 += FUNC_5(VAR_5->sample_noise[VAR_8]);

 VAR_14 = VAR_11 - VAR_2->survey_raw.cached_cca;
 VAR_16 = VAR_9 - VAR_2->survey_raw.cached_rssi;
 VAR_15 = VAR_10 - VAR_2->survey_raw.cached_tx;
 VAR_13 = VAR_14 + VAR_16 + VAR_15;





 if (VAR_13 && (VAR_2->update_stats || VAR_12 >= VAR_1) &&
     VAR_12 >= VAR_13) {
  VAR_2->survey_raw.timestamp = VAR_18;
  VAR_2->update_stats = 0;
  VAR_17 = VAR_12 / VAR_13;

  if (VAR_14) {
   VAR_2->survey_raw.cca += VAR_14 * VAR_17;
   VAR_2->survey_raw.cached_cca = VAR_11;
  }
  if (VAR_15) {
   VAR_2->survey_raw.tx += VAR_15 * VAR_17;
   VAR_2->survey_raw.cached_tx = VAR_10;
  }
  if (VAR_16) {
   VAR_2->survey_raw.rssi += VAR_16 * VAR_17;
   VAR_2->survey_raw.cached_rssi = VAR_9;
  }


  if (!(VAR_2->phy_ps || VAR_2->phy_idle))
   VAR_2->survey_raw.active += VAR_13 * VAR_17;
  else
   VAR_2->survey_raw.active += (VAR_14 + VAR_15) * VAR_17;
 }

 VAR_7 = VAR_2->curchan;
 if (VAR_7) {
  struct survey_info *VAR_19 = &VAR_2->survey[VAR_7->hw_value];
  VAR_19->noise = FUNC_1(VAR_2->noise, -128, 127);
  VAR_19->time = VAR_2->survey_raw.active;
  VAR_19->time_tx = VAR_2->survey_raw.tx;
  VAR_19->time_busy = VAR_2->survey_raw.tx +
   VAR_2->survey_raw.cca;
  FUNC_4(VAR_19->time, 1024);
  FUNC_4(VAR_19->time_tx, 1024);
  FUNC_4(VAR_19->time_busy, 1024);
 }

 VAR_6 = FUNC_6(VAR_2, VAR_4->req_id);
 FUNC_3(VAR_6);
 FUNC_2(&VAR_2->stat_comp);
}
