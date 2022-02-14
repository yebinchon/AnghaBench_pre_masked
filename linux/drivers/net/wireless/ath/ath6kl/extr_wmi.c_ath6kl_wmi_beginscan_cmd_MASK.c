
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
struct wmi_begin_scan_cmd {int scan_type; int num_ch; int * ch_list; TYPE_3__* supp_rates; void* no_cck; void* force_scan_intvl; void* home_dwell_time; void* is_legacy; void* force_fg_scan; } ;
struct wmi {struct ath6kl* parent_dev; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_2__* bitrates; } ;
struct ath6kl {TYPE_1__* wiphy; int fw_capabilities; } ;
typedef int s8 ;
typedef enum wmi_scan_type { ____Placeholder_wmi_scan_type } wmi_scan_type ;
struct TYPE_6__ {int* rates; int nrates; } ;
struct TYPE_5__ {int bitrate; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct wmi*,int,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (struct wmi*,int,int,int,int,int,int,int,int *) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct wmi *VAR_10, u8 VAR_11,
        enum wmi_scan_type VAR_12,
        u32 VAR_13, u32 VAR_14,
        u32 VAR_15, u32 VAR_16,
        s8 VAR_17, u16 *VAR_18, u32 VAR_19, u32 *VAR_20)
{
 struct ieee80211_supported_band *VAR_21;
 struct sk_buff *VAR_22;
 struct wmi_begin_scan_cmd *VAR_23;
 s8 VAR_24, *VAR_25;
 int VAR_26, VAR_27, VAR_28;
 struct ath6kl *VAR_29 = VAR_10->parent_dev;
 int VAR_30;
 u32 VAR_31;

 if (!FUNC_7(VAR_0,
        VAR_29->fw_capabilities)) {
  return FUNC_4(VAR_10, VAR_11,
      VAR_12, VAR_13,
      VAR_14, VAR_15,
      VAR_16,
      VAR_17, VAR_18);
 }

 VAR_24 = sizeof(struct wmi_begin_scan_cmd);

 if ((VAR_12 != VAR_7) && (VAR_12 != VAR_9))
  return -VAR_2;

 if (VAR_17 > VAR_8)
  return -VAR_2;

 if (VAR_17)
  VAR_24 += sizeof(u16) * (VAR_17 - 1);

 VAR_22 = FUNC_3(VAR_24);
 if (!VAR_22)
  return -VAR_3;

 VAR_23 = (struct wmi_begin_scan_cmd *) VAR_22->data;
 VAR_23->scan_type = VAR_12;
 VAR_23->force_fg_scan = FUNC_6(VAR_13);
 VAR_23->is_legacy = FUNC_6(VAR_14);
 VAR_23->home_dwell_time = FUNC_6(VAR_15);
 VAR_23->force_scan_intvl = FUNC_6(VAR_16);
 VAR_23->no_cck = FUNC_6(VAR_19);
 VAR_23->num_ch = VAR_17;

 for (VAR_27 = 0; VAR_27 < VAR_5; VAR_27++) {
  VAR_21 = VAR_29->wiphy->bands[VAR_27];

  if (!VAR_21)
   continue;

  if (FUNC_1(VAR_27 >= VAR_1))
   break;

  VAR_31 = VAR_20[VAR_27];
  VAR_25 = VAR_23->supp_rates[VAR_27].rates;
  VAR_30 = 0;

  for (VAR_26 = 0; VAR_26 < VAR_21->n_bitrates; VAR_26++) {
   if ((FUNC_0(VAR_26) & VAR_31) == 0)
    continue;
   VAR_25[VAR_30++] =
       (u8) (VAR_21->bitrates[VAR_26].bitrate / 5);
  }
  VAR_23->supp_rates[VAR_27].nrates = VAR_30;
 }

 for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++)
  VAR_23->ch_list[VAR_26] = FUNC_5(VAR_18[VAR_26]);

 VAR_28 = FUNC_2(VAR_10, VAR_11, VAR_22, VAR_6,
      VAR_4);

 return VAR_28;
}
