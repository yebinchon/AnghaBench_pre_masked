
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct wmi_pdev_bss_chan_info_event {int cycle_rx_bss; int cycle_rx; int cycle_tx; int cycle_total; int cycle_busy; int noise_floor; int freq; } ;
struct survey_info {int filled; void* time_tx; void* time_rx; void* time_busy; void* time; int noise; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_2__ {int channel_counters_freq_hz; } ;
struct ath10k {int bss_survey_done; int data_lock; struct survey_info* survey; TYPE_1__ hw_params; } ;


 int FUNC_0 (struct survey_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct ath10k*,char*,int ,int) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ath10k*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ath10k *VAR_7,
            struct sk_buff *VAR_8)
{
 struct wmi_pdev_bss_chan_info_event *VAR_9;
 struct survey_info *VAR_10;
 u64 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18 = VAR_7->hw_params.channel_counters_freq_hz;
 int VAR_19;

 VAR_9 = (struct wmi_pdev_bss_chan_info_event *)VAR_8->data;
 if (FUNC_1(VAR_8->len < sizeof(*VAR_9)))
  return -VAR_1;

 VAR_16 = FUNC_2(VAR_9->freq);
 VAR_17 = FUNC_2(VAR_9->noise_floor);
 VAR_11 = FUNC_3(VAR_9->cycle_busy);
 VAR_12 = FUNC_3(VAR_9->cycle_total);
 VAR_13 = FUNC_3(VAR_9->cycle_tx);
 VAR_14 = FUNC_3(VAR_9->cycle_rx);
 VAR_15 = FUNC_3(VAR_9->cycle_rx_bss);

 FUNC_4(VAR_7, VAR_0,
     "wmi event pdev bss chan info:\n freq: %d noise: %d cycle: busy %llu total %llu tx %llu rx %llu rx_bss %llu\n",
     VAR_16, VAR_17, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

 FUNC_9(&VAR_7->data_lock);
 VAR_19 = FUNC_8(VAR_7, VAR_16);
 if (VAR_19 >= FUNC_0(VAR_7->survey)) {
  FUNC_5(VAR_7, "bss chan info: invalid frequency %d (idx %d out of bounds)\n",
       VAR_16, VAR_19);
  goto exit;
 }

 VAR_10 = &VAR_7->survey[VAR_19];

 VAR_10->noise = VAR_17;
 VAR_10->time = FUNC_7(VAR_12, VAR_18);
 VAR_10->time_busy = FUNC_7(VAR_11, VAR_18);
 VAR_10->time_rx = FUNC_7(VAR_15, VAR_18);
 VAR_10->time_tx = FUNC_7(VAR_13, VAR_18);
 VAR_10->filled |= (VAR_2 |
        VAR_3 |
        VAR_4 |
        VAR_5 |
        VAR_6);
exit:
 FUNC_10(&VAR_7->data_lock);
 FUNC_6(&VAR_7->bss_survey_done);
 return 0;
}
