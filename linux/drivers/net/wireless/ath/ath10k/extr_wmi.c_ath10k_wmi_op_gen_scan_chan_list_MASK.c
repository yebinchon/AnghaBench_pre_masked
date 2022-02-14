
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_scan_chan_list_cmd {struct wmi_channel* chan_info; int num_scan_chans; } ;
struct wmi_scan_chan_list_arg {int n_channels; struct wmi_channel_arg* channels; } ;
struct wmi_channel_arg {int dummy; } ;
struct wmi_channel {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (struct wmi_channel*,struct wmi_channel_arg*) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_1,
     const struct wmi_scan_chan_list_arg *VAR_2)
{
 struct wmi_scan_chan_list_cmd *VAR_3;
 struct sk_buff *VAR_4;
 struct wmi_channel_arg *VAR_5;
 struct wmi_channel *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = sizeof(*VAR_3) + VAR_2->n_channels * sizeof(struct wmi_channel);

 VAR_4 = FUNC_2(VAR_1, VAR_7);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_3 = (struct wmi_scan_chan_list_cmd *)VAR_4->data;
 VAR_3->num_scan_chans = FUNC_1(VAR_2->n_channels);

 for (VAR_8 = 0; VAR_8 < VAR_2->n_channels; VAR_8++) {
  VAR_5 = &VAR_2->channels[VAR_8];
  VAR_6 = &VAR_3->chan_info[VAR_8];

  FUNC_3(VAR_6, VAR_5);
 }

 return VAR_4;
}
