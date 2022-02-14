
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct wilc_vif {int ndev; scalar_t__ connecting; struct host_if_drv* hif_drv; } ;
struct wid {scalar_t__* val; int size; void* type; int id; } ;
struct TYPE_4__ {void (* scan_result ) (int,struct wilc_rcvd_net_info*,void*) ;void* arg; scalar_t__ ch_cnt; } ;
struct host_if_drv {scalar_t__ hif_state; int scan_timer; struct wilc_vif* scan_timer_vif; TYPE_2__ usr_scan_req; } ;
struct cfg80211_scan_request {int n_ssids; int ie_len; scalar_t__ duration; scalar_t__ ie; TYPE_1__* ssids; } ;
typedef scalar_t__ s8 ;
typedef int s32 ;
struct TYPE_3__ {scalar_t__ ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wilc_vif*,int ,struct wid*,size_t) ;

int FUNC_7(struct wilc_vif *VAR_18, u8 VAR_19, u8 VAR_20,
       u8 *VAR_21, u8 VAR_22,
       void (*VAR_23)(enum scan_event,
         struct wilc_rcvd_net_info *, void *),
       void *VAR_24, struct cfg80211_scan_request *VAR_25)
{
 int VAR_26 = 0;
 struct wid VAR_27[5];
 u32 VAR_28 = 0;
 u32 VAR_29, VAR_30;
 u8 *VAR_31;
 u8 VAR_32 = 0;
 u8 *VAR_33 = ((void*)0);
 struct host_if_drv *VAR_34 = VAR_18->hif_drv;

 if (VAR_34->hif_state >= VAR_3 &&
     VAR_34->hif_state < VAR_2) {
  FUNC_5(VAR_18->ndev, "Already scan\n");
  VAR_26 = -VAR_0;
  goto error;
 }

 if (VAR_18->connecting) {
  FUNC_5(VAR_18->ndev, "Don't do obss scan\n");
  VAR_26 = -VAR_0;
  goto error;
 }

 VAR_34->usr_scan_req.ch_cnt = 0;

 if (VAR_25->n_ssids) {
  for (VAR_29 = 0; VAR_29 < VAR_25->n_ssids; VAR_29++)
   VAR_32 += ((VAR_25->ssids[VAR_29].ssid_len) + 1);
  VAR_33 = FUNC_1(VAR_32 + 1, VAR_1);
  if (VAR_33) {
   VAR_27[VAR_28].id = VAR_11;
   VAR_27[VAR_28].type = VAR_13;
   VAR_27[VAR_28].val = VAR_33;
   VAR_31 = VAR_27[VAR_28].val;

   *VAR_31++ = VAR_25->n_ssids;

   for (VAR_29 = 0; VAR_29 < VAR_25->n_ssids; VAR_29++) {
    *VAR_31++ = VAR_25->ssids[VAR_29].ssid_len;
    FUNC_2(VAR_31, VAR_25->ssids[VAR_29].ssid,
           VAR_25->ssids[VAR_29].ssid_len);
    VAR_31 += VAR_25->ssids[VAR_29].ssid_len;
   }
   VAR_27[VAR_28].size = (s32)(VAR_32 + 1);
   VAR_28++;
  }
 }

 VAR_27[VAR_28].id = VAR_6;
 VAR_27[VAR_28].type = VAR_4;
 VAR_27[VAR_28].val = (s8 *)VAR_25->ie;
 VAR_27[VAR_28].size = VAR_25->ie_len;
 VAR_28++;

 VAR_27[VAR_28].id = VAR_9;
 VAR_27[VAR_28].type = VAR_5;
 VAR_27[VAR_28].size = sizeof(char);
 VAR_27[VAR_28].val = (s8 *)&VAR_20;
 VAR_28++;

 if (VAR_20 == VAR_14 && VAR_25->duration) {
  VAR_27[VAR_28].id = VAR_7;
  VAR_27[VAR_28].type = VAR_10;
  VAR_27[VAR_28].size = sizeof(u16);
  VAR_27[VAR_28].val = (s8 *)&VAR_25->duration;
  VAR_28++;

  VAR_30 = (VAR_25->duration * VAR_22) + 500;
 } else {
  VAR_30 = VAR_15;
 }

 VAR_27[VAR_28].id = VAR_8;
 VAR_27[VAR_28].type = VAR_4;

 if (VAR_21 && VAR_22 > 0) {
  for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++) {
   if (VAR_21[VAR_29] > 0)
    VAR_21[VAR_29] -= 1;
  }
 }

 VAR_27[VAR_28].val = VAR_21;
 VAR_27[VAR_28].size = VAR_22;
 VAR_28++;

 VAR_27[VAR_28].id = VAR_12;
 VAR_27[VAR_28].type = VAR_5;
 VAR_27[VAR_28].size = sizeof(char);
 VAR_27[VAR_28].val = (s8 *)&VAR_19;
 VAR_28++;

 VAR_34->usr_scan_req.scan_result = VAR_23;
 VAR_34->usr_scan_req.arg = VAR_24;

 VAR_26 = FUNC_6(VAR_18, VAR_16, VAR_27, VAR_28);
 if (VAR_26) {
  FUNC_5(VAR_18->ndev, "Failed to send scan parameters\n");
  goto error;
 }

 VAR_34->scan_timer_vif = VAR_18;
 FUNC_3(&VAR_34->scan_timer,
    VAR_17 + FUNC_4(VAR_30));

error:

 FUNC_0(VAR_33);

 return VAR_26;
}
