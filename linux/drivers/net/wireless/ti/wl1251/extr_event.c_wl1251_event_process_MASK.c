
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl1251 {scalar_t__ station_mode; TYPE_1__* vif; scalar_t__ rssi_thold; scalar_t__ psm_requested; } ;
struct event_mailbox {int events_vector; int events_mask; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct event_mailbox*) ;
 int FUNC_4 (struct wl1251*,struct event_mailbox*) ;
 int FUNC_5 (struct wl1251*,struct event_mailbox*) ;
 int FUNC_6 (struct wl1251*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct wl1251 *VAR_14, struct event_mailbox *VAR_15)
{
 int VAR_16;
 u32 VAR_17;

 FUNC_3(VAR_15);

 VAR_17 = VAR_15->events_vector & ~(VAR_15->events_mask);
 FUNC_2(VAR_1, "vector: 0x%x", VAR_17);

 if (VAR_17 & VAR_10) {
  VAR_16 = FUNC_5(VAR_14, VAR_15);
  if (VAR_16 < 0)
   return VAR_16;
 }

 if (VAR_17 & VAR_0) {
  FUNC_2(VAR_1, "BSS_LOSE_EVENT");

  if (VAR_14->psm_requested &&
      VAR_14->station_mode != VAR_11) {
   VAR_16 = FUNC_6(VAR_14, VAR_11);
   if (VAR_16 < 0)
    return VAR_16;
  }
 }

 if (VAR_17 & VAR_6) {
  FUNC_2(VAR_1, "PS_REPORT_EVENT");
  VAR_16 = FUNC_4(VAR_14, VAR_15);
  if (VAR_16 < 0)
   return VAR_16;
 }

 if (VAR_17 & VAR_13) {
  FUNC_2(VAR_1, "SYNCHRONIZATION_TIMEOUT_EVENT");


  if (VAR_14->vif && VAR_14->vif->type == VAR_5)
   FUNC_0(VAR_14->vif);
 }

 if (VAR_17 & VAR_7) {
  if (VAR_14->psm_requested) {
   VAR_16 = FUNC_6(VAR_14, VAR_12);
   if (VAR_16 < 0)
    return VAR_16;
  }
 }

 if (VAR_14->vif && VAR_14->rssi_thold) {
  if (VAR_17 & VAR_8) {
   FUNC_2(VAR_1,
         "ROAMING_TRIGGER_LOW_RSSI_EVENT");
   FUNC_1(VAR_14->vif,
    VAR_4,
    0, VAR_2);
  }

  if (VAR_17 & VAR_9) {
   FUNC_2(VAR_1,
         "ROAMING_TRIGGER_REGAINED_RSSI_EVENT");
   FUNC_1(VAR_14->vif,
    VAR_3,
    0, VAR_2);
  }
 }

 return 0;
}
