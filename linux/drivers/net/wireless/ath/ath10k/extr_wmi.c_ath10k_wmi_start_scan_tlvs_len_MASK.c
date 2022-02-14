
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_start_scan_arg {int n_channels; int n_ssids; int n_bssids; scalar_t__ ie_len; } ;
struct wmi_ssid_list {int dummy; } ;
struct wmi_ssid {int dummy; } ;
struct wmi_mac_addr {int dummy; } ;
struct wmi_ie_data {int dummy; } ;
struct wmi_chan_list {int dummy; } ;
struct wmi_bssid_list {int dummy; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static size_t
FUNC_1(const struct wmi_start_scan_arg *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->ie_len) {
  VAR_1 += sizeof(struct wmi_ie_data);
  VAR_1 += FUNC_0(VAR_0->ie_len, 4);
 }

 if (VAR_0->n_channels) {
  VAR_1 += sizeof(struct wmi_chan_list);
  VAR_1 += sizeof(__le32) * VAR_0->n_channels;
 }

 if (VAR_0->n_ssids) {
  VAR_1 += sizeof(struct wmi_ssid_list);
  VAR_1 += sizeof(struct wmi_ssid) * VAR_0->n_ssids;
 }

 if (VAR_0->n_bssids) {
  VAR_1 += sizeof(struct wmi_bssid_list);
  VAR_1 += sizeof(struct wmi_mac_addr) * VAR_0->n_bssids;
 }

 return VAR_1;
}
