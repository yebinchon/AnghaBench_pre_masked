
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_scan_results {size_t buflen; int count; int version; struct brcmf_bss_info_le* bss_info_le; } ;
struct brcmf_pub {struct brcmf_cfg80211_info* config; } ;
struct brcmf_if {int bsscfgidx; struct brcmf_pub* drvr; } ;
struct brcmf_event_msg {scalar_t__ status; int datalen; } ;
struct brcmf_bss_info_le {int version; int length; int capability; } ;
struct brcmf_escan_result_le {struct brcmf_bss_info_le bss_info_le; int bss_count; int buflen; } ;
struct TYPE_3__ {int escan_state; int * escan_buf; } ;
struct brcmf_cfg80211_info {scalar_t__ scan_request; scalar_t__ int_escan_map; TYPE_1__ escan_info; int scan_status; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int interface_modes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct brcmf_pub*,char*,...) ;
 scalar_t__ FUNC_2 (struct brcmf_cfg80211_info*,struct brcmf_bss_info_le*,struct brcmf_bss_info_le*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct brcmf_cfg80211_info*) ;
 int FUNC_5 (struct brcmf_cfg80211_info*,struct brcmf_if*,int,int) ;
 scalar_t__ FUNC_6 (struct brcmf_cfg80211_info*,struct brcmf_bss_info_le*) ;
 TYPE_2__* FUNC_7 (struct brcmf_cfg80211_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,struct brcmf_bss_info_le*,int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static s32
FUNC_12(struct brcmf_if *VAR_11,
        const struct brcmf_event_msg *VAR_12, void *VAR_13)
{
 struct brcmf_pub *VAR_14 = VAR_11->drvr;
 struct brcmf_cfg80211_info *VAR_15 = VAR_14->config;
 s32 VAR_16;
 struct brcmf_escan_result_le *VAR_17;
 u32 VAR_18;
 struct brcmf_bss_info_le *VAR_19;
 struct brcmf_bss_info_le *VAR_20 = ((void*)0);
 u32 VAR_21;
 struct brcmf_scan_results *VAR_22;
 u32 VAR_23;
 bool VAR_24;

 VAR_16 = VAR_12->status;

 if (VAR_16 == VAR_1)
  goto exit;

 if (!FUNC_11(VAR_4, &VAR_15->scan_status)) {
  FUNC_1(VAR_14, "scan not ready, bsscfgidx=%d\n",
    VAR_11->bsscfgidx);
  return -VAR_5;
 }

 if (VAR_16 == VAR_2) {
  FUNC_3(VAR_7, "ESCAN Partial result\n");
  if (VAR_12->datalen < sizeof(*VAR_17)) {
   FUNC_1(VAR_14, "invalid event data length\n");
   goto exit;
  }
  VAR_17 = (struct brcmf_escan_result_le *) VAR_13;
  if (!VAR_17) {
   FUNC_1(VAR_14, "Invalid escan result (NULL pointer)\n");
   goto exit;
  }
  VAR_18 = FUNC_9(VAR_17->buflen);
  if (VAR_18 > VAR_0 ||
      VAR_18 > VAR_12->datalen ||
      VAR_18 < sizeof(*VAR_17)) {
   FUNC_1(VAR_14, "Invalid escan buffer length: %d\n",
     VAR_18);
   goto exit;
  }
  if (FUNC_8(VAR_17->bss_count) != 1) {
   FUNC_1(VAR_14, "Invalid bss_count %d: ignoring\n",
     VAR_17->bss_count);
   goto exit;
  }
  VAR_19 = &VAR_17->bss_info_le;

  if (FUNC_6(VAR_15, VAR_19))
   goto exit;

  if (!VAR_15->int_escan_map && !VAR_15->scan_request) {
   FUNC_3(VAR_7, "result without cfg80211 request\n");
   goto exit;
  }

  VAR_21 = FUNC_9(VAR_19->length);
  if (VAR_21 != VAR_18 - VAR_9) {
   FUNC_1(VAR_14, "Ignoring invalid bss_info length: %d\n",
     VAR_21);
   goto exit;
  }

  if (!(FUNC_7(VAR_15)->interface_modes &
     FUNC_0(VAR_6))) {
   if (FUNC_8(VAR_19->capability) &
      VAR_8) {
    FUNC_1(VAR_14, "Ignoring IBSS result\n");
    goto exit;
   }
  }

  VAR_22 = (struct brcmf_scan_results *)
    VAR_15->escan_info.escan_buf;
  if (VAR_21 > VAR_0 - VAR_22->buflen) {
   FUNC_1(VAR_14, "Buffer is too small: ignoring\n");
   goto exit;
  }

  for (VAR_23 = 0; VAR_23 < VAR_22->count; VAR_23++) {
   VAR_20 = VAR_20 ? (struct brcmf_bss_info_le *)
    ((unsigned char *)VAR_20 +
    FUNC_9(VAR_20->length)) : VAR_22->bss_info_le;
   if (FUNC_2(VAR_15, VAR_20,
         VAR_19))
    goto exit;
  }
  FUNC_10(&VAR_15->escan_info.escan_buf[VAR_22->buflen], VAR_19,
         VAR_21);
  VAR_22->version = FUNC_9(VAR_19->version);
  VAR_22->buflen += VAR_21;
  VAR_22->count++;
 } else {
  VAR_15->escan_info.escan_state = VAR_10;
  if (FUNC_6(VAR_15, ((void*)0)))
   goto exit;
  if (VAR_15->int_escan_map || VAR_15->scan_request) {
   FUNC_4(VAR_15);
   VAR_24 = VAR_16 != VAR_3;
   FUNC_5(VAR_15, VAR_11, VAR_24, 0);
  } else
   FUNC_3(VAR_7, "Ignored scan complete result 0x%x\n",
      VAR_16);
 }
exit:
 return 0;
}
