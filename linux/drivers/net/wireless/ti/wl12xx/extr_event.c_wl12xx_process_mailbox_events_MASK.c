
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_event_mailbox {int scheduled_scan_status; int sta_aging_status; int sta_tx_retry_exceeded; int channel_switch_status; int rx_ba_allowed; int role_id; int rssi_snr_trigger_metric; int soft_gemini_sense_info; int events_mask; int events_vector; } ;
struct wl1271 {scalar_t__ scan_wlvif; struct wl12xx_event_mailbox* mbox; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct wl1271*,scalar_t__) ;
 int FUNC_5 (struct wl1271*,int ,int ) ;
 int FUNC_6 (struct wl1271*,int) ;
 int FUNC_7 (struct wl1271*,int,int ) ;
 int FUNC_8 (struct wl1271*) ;
 int FUNC_9 (struct wl1271*,int ) ;
 int FUNC_10 (struct wl1271*,int ) ;
 int FUNC_11 (struct wl1271*) ;
 int FUNC_12 (struct wl1271*,int ) ;
 int FUNC_13 (struct wl1271*,int) ;
 int FUNC_14 (struct wl1271*,int ) ;
 int FUNC_15 (struct wl1271*) ;

int FUNC_16(struct wl1271 *VAR_13)
{
 struct wl12xx_event_mailbox *VAR_14 = VAR_13->mbox;
 u32 VAR_15;


 VAR_15 = FUNC_2(VAR_14->events_vector);
 VAR_15 &= ~(FUNC_2(VAR_14->events_mask));

 FUNC_3(VAR_3, "MBOX vector: 0x%x", VAR_15);

 if (VAR_15 & VAR_11) {
  FUNC_3(VAR_3, "status: 0x%x",
        VAR_14->scheduled_scan_status);

  if (VAR_13->scan_wlvif)
   FUNC_4(VAR_13, VAR_13->scan_wlvif);
 }

 if (VAR_15 & VAR_8) {
  FUNC_3(VAR_3,
        "PERIODIC_SCAN_REPORT_EVENT (status 0x%0x)",
        VAR_14->scheduled_scan_status);

  FUNC_15(VAR_13);
 }

 if (VAR_15 & VAR_7)
  FUNC_13(VAR_13,
        VAR_14->scheduled_scan_status);
 if (VAR_15 & VAR_12)
  FUNC_14(VAR_13,
            VAR_14->soft_gemini_sense_info);

 if (VAR_15 & VAR_1)
  FUNC_6(VAR_13, 0xff);

 if (VAR_15 & VAR_10)
  FUNC_12(VAR_13, VAR_14->rssi_snr_trigger_metric);

 if (VAR_15 & VAR_0)
  FUNC_5(VAR_13,
           FUNC_0(VAR_14->role_id),
           VAR_14->rx_ba_allowed);

 if (VAR_15 & VAR_2)
  FUNC_7(VAR_13, 0xff,
         VAR_14->channel_switch_status);

 if (VAR_15 & VAR_4)
  FUNC_8(VAR_13);





 if (VAR_15 & VAR_6)
  FUNC_10(VAR_13,
    FUNC_1(VAR_14->sta_tx_retry_exceeded));

 if (VAR_15 & VAR_5)
  FUNC_9(VAR_13,
       FUNC_1(VAR_14->sta_aging_status));

 if (VAR_15 & VAR_9)
  FUNC_11(VAR_13);

 return 0;
}
