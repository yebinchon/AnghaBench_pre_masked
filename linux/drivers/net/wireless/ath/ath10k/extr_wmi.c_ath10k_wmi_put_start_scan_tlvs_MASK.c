
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wmi_start_scan_tlvs {void* tlvs; } ;
struct wmi_start_scan_arg {int n_channels; int n_ssids; int n_bssids; int ie_len; int ie; TYPE_5__* bssids; TYPE_3__* ssids; int * channels; } ;
struct wmi_ssid_list {TYPE_2__* ssids; void* num_ssids; void* tag; } ;
struct wmi_ssid {int dummy; } ;
struct wmi_mac_addr {int dummy; } ;
struct wmi_ie_data {int * ie_data; void* ie_len; void* tag; } ;
struct wmi_chan_list {TYPE_1__* channel_list; void* num_chan; void* tag; } ;
struct wmi_bssid_list {TYPE_4__* bssid_list; void* num_bssid; void* tag; } ;
typedef int __le32 ;
struct TYPE_10__ {int bssid; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_8__ {int len; int ssid; } ;
struct TYPE_7__ {int ssid; void* ssid_len; } ;
struct TYPE_6__ {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(struct wmi_start_scan_tlvs *VAR_4,
          const struct wmi_start_scan_arg *VAR_5)
{
 struct wmi_ie_data *VAR_6;
 struct wmi_chan_list *VAR_7;
 struct wmi_ssid_list *VAR_8;
 struct wmi_bssid_list *VAR_9;
 void *VAR_10 = VAR_4->tlvs;
 int VAR_11;

 if (VAR_5->n_channels) {
  VAR_7 = VAR_10;
  VAR_7->tag = FUNC_1(VAR_1);
  VAR_7->num_chan = FUNC_1(VAR_5->n_channels);

  for (VAR_11 = 0; VAR_11 < VAR_5->n_channels; VAR_11++)
   VAR_7->channel_list[VAR_11].freq =
    FUNC_0(VAR_5->channels[VAR_11]);

  VAR_10 += sizeof(*VAR_7);
  VAR_10 += sizeof(__le32) * VAR_5->n_channels;
 }

 if (VAR_5->n_ssids) {
  VAR_8 = VAR_10;
  VAR_8->tag = FUNC_1(VAR_3);
  VAR_8->num_ssids = FUNC_1(VAR_5->n_ssids);

  for (VAR_11 = 0; VAR_11 < VAR_5->n_ssids; VAR_11++) {
   VAR_8->ssids[VAR_11].ssid_len =
    FUNC_1(VAR_5->ssids[VAR_11].len);
   FUNC_3(&VAR_8->ssids[VAR_11].ssid,
          VAR_5->ssids[VAR_11].ssid,
          VAR_5->ssids[VAR_11].len);
  }

  VAR_10 += sizeof(*VAR_8);
  VAR_10 += sizeof(struct wmi_ssid) * VAR_5->n_ssids;
 }

 if (VAR_5->n_bssids) {
  VAR_9 = VAR_10;
  VAR_9->tag = FUNC_1(VAR_0);
  VAR_9->num_bssid = FUNC_1(VAR_5->n_bssids);

  for (VAR_11 = 0; VAR_11 < VAR_5->n_bssids; VAR_11++)
   FUNC_2(VAR_9->bssid_list[VAR_11].addr,
     VAR_5->bssids[VAR_11].bssid);

  VAR_10 += sizeof(*VAR_9);
  VAR_10 += sizeof(struct wmi_mac_addr) * VAR_5->n_bssids;
 }

 if (VAR_5->ie_len) {
  VAR_6 = VAR_10;
  VAR_6->tag = FUNC_1(VAR_2);
  VAR_6->ie_len = FUNC_1(VAR_5->ie_len);
  FUNC_3(VAR_6->ie_data, VAR_5->ie, VAR_5->ie_len);

  VAR_10 += sizeof(*VAR_6);
  VAR_10 += FUNC_4(VAR_5->ie_len, 4);
 }
}
