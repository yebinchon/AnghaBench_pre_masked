
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wsm_template_frame {scalar_t__ skb; int frame_type; } ;
struct wsm_ssid {scalar_t__ length; int * ssid; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_scan_request {int n_ssids; size_t n_channels; TYPE_2__* ssids; int * channels; scalar_t__ ie_len; int ie; } ;
struct ieee80211_scan_request {struct cfg80211_scan_request req; } ;
struct ieee80211_hw {int wiphy; struct cw1200_common* priv; } ;
struct TYPE_6__ {size_t n_ssids; int work; struct wsm_ssid* ssids; int output_power; int * end; int * begin; int * curr; scalar_t__ status; struct cfg80211_scan_request* req; int lock; } ;
struct cw1200_common {scalar_t__ join_status; TYPE_3__ scan; int workqueue; int conf_mutex; int output_power; TYPE_1__* vif; } ;
struct TYPE_5__ {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_4__ {int addr; } ;


 int FUNC_0 (struct cfg80211_scan_request*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,int ,int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (struct cw1200_common*) ;
 int FUNC_12 (struct cw1200_common*,int) ;
 int FUNC_13 (struct cw1200_common*,struct wsm_template_frame*) ;

int FUNC_14(struct ieee80211_hw *VAR_6,
     struct ieee80211_vif *VAR_7,
     struct ieee80211_scan_request *VAR_8)
{
 struct cw1200_common *VAR_9 = VAR_6->priv;
 struct cfg80211_scan_request *VAR_10 = &VAR_8->req;
 struct wsm_template_frame VAR_11 = {
  .frame_type = VAR_4,
 };
 int VAR_12, VAR_13;

 if (!VAR_9->vif)
  return -VAR_1;


 if (VAR_9->join_status == VAR_0)
  return -VAR_3;

 if (VAR_10->n_ssids == 1 && !VAR_10->ssids[0].ssid_len)
  VAR_10->n_ssids = 0;

 FUNC_10(VAR_6->wiphy, "[SCAN] Scan request for %d SSIDs.\n",
    VAR_10->n_ssids);

 if (VAR_10->n_ssids > VAR_5)
  return -VAR_1;


 FUNC_2(&VAR_9->scan.lock);
 FUNC_5(&VAR_9->conf_mutex);

 VAR_11.skb = FUNC_3(VAR_6, VAR_9->vif->addr, ((void*)0), 0,
  VAR_10->ie_len);
 if (!VAR_11.skb) {
  FUNC_6(&VAR_9->conf_mutex);
  FUNC_9(&VAR_9->scan.lock);
  return -VAR_2;
 }

 if (VAR_10->ie_len)
  FUNC_8(VAR_11.skb, VAR_10->ie, VAR_10->ie_len);

 VAR_13 = FUNC_13(VAR_9, &VAR_11);
 if (!VAR_13) {

  VAR_13 = FUNC_12(VAR_9, 1);
 }
 if (VAR_13) {
  FUNC_1(VAR_11.skb);
  FUNC_6(&VAR_9->conf_mutex);
  FUNC_9(&VAR_9->scan.lock);
  return VAR_13;
 }

 FUNC_11(VAR_9);

 FUNC_0(VAR_9->scan.req);
 VAR_9->scan.req = VAR_10;
 VAR_9->scan.n_ssids = 0;
 VAR_9->scan.status = 0;
 VAR_9->scan.begin = &VAR_10->channels[0];
 VAR_9->scan.curr = VAR_9->scan.begin;
 VAR_9->scan.end = &VAR_10->channels[VAR_10->n_channels];
 VAR_9->scan.output_power = VAR_9->output_power;

 for (VAR_12 = 0; VAR_12 < VAR_10->n_ssids; ++VAR_12) {
  struct wsm_ssid *VAR_14 = &VAR_9->scan.ssids[VAR_9->scan.n_ssids];
  FUNC_4(&VAR_14->ssid[0], VAR_10->ssids[VAR_12].ssid, sizeof(VAR_14->ssid));
  VAR_14->length = VAR_10->ssids[VAR_12].ssid_len;
  ++VAR_9->scan.n_ssids;
 }

 if (VAR_11.skb)
  FUNC_1(VAR_11.skb);
 FUNC_6(&VAR_9->conf_mutex);
 FUNC_7(VAR_9->workqueue, &VAR_9->scan.work);
 return 0;
}
