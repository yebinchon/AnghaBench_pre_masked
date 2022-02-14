
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_scan_chan_list_cmd {int num_scan_chans; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_scan_chan_list_arg {int n_channels; struct wmi_channel_arg* channels; } ;
struct wmi_channel_arg {int dummy; } ;
struct wmi_channel {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (struct wmi_channel*,struct wmi_channel_arg*) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_5,
         const struct wmi_scan_chan_list_arg *VAR_6)
{
 struct wmi_tlv_scan_chan_list_cmd *VAR_7;
 struct wmi_channel *VAR_8;
 struct wmi_channel_arg *VAR_9;
 struct wmi_tlv *VAR_10;
 struct sk_buff *VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;
 void *VAR_15, *VAR_16;

 VAR_12 = VAR_6->n_channels * (sizeof(*VAR_10) + sizeof(*VAR_8));
 VAR_13 = (sizeof(*VAR_10) + sizeof(*VAR_7)) +
       (sizeof(*VAR_10) + VAR_12);

 VAR_11 = FUNC_4(VAR_5, VAR_13);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_15 = (void *)VAR_11->data;
 VAR_10 = VAR_15;
 VAR_10->tag = FUNC_1(VAR_4);
 VAR_10->len = FUNC_1(sizeof(*VAR_7));
 VAR_7 = (void *)VAR_10->value;
 VAR_7->num_scan_chans = FUNC_2(VAR_6->n_channels);

 VAR_15 += sizeof(*VAR_10);
 VAR_15 += sizeof(*VAR_7);

 VAR_10 = VAR_15;
 VAR_10->tag = FUNC_1(VAR_2);
 VAR_10->len = FUNC_1(VAR_12);
 VAR_16 = (void *)VAR_10->value;

 for (VAR_14 = 0; VAR_14 < VAR_6->n_channels; VAR_14++) {
  VAR_9 = &VAR_6->channels[VAR_14];

  VAR_10 = VAR_16;
  VAR_10->tag = FUNC_1(VAR_3);
  VAR_10->len = FUNC_1(sizeof(*VAR_8));
  VAR_8 = (void *)VAR_10->value;

  FUNC_5(VAR_8, VAR_9);

  VAR_16 += sizeof(*VAR_10);
  VAR_16 += sizeof(*VAR_8);
 }

 VAR_15 += sizeof(*VAR_10);
 VAR_15 += VAR_12;

 FUNC_3(VAR_5, VAR_0, "wmi tlv scan chan list\n");
 return VAR_11;
}
