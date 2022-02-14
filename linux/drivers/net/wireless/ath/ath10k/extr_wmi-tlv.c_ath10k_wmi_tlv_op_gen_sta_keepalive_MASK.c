
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_tlv_sta_keepalive_cmd {void* interval; void* method; void* enabled; void* vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct TYPE_2__ {int addr; } ;
struct wmi_sta_keepalive_arp_resp {TYPE_1__ dest_mac_addr; int dest_ip4_addr; int src_ip4_addr; } ;
struct wmi_sta_keepalive_arg {int interval; int method; int enabled; int vdev_id; int dest_mac_addr; int dest_ip4_addr; int src_ip4_addr; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int ,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_4,
        const struct wmi_sta_keepalive_arg *VAR_5)
{
 struct wmi_tlv_sta_keepalive_cmd *VAR_6;
 struct wmi_sta_keepalive_arp_resp *VAR_7;
 struct sk_buff *VAR_8;
 struct wmi_tlv *VAR_9;
 void *VAR_10;
 size_t VAR_11;

 VAR_11 = sizeof(*VAR_9) + sizeof(*VAR_6) +
       sizeof(*VAR_9) + sizeof(*VAR_7);
 VAR_8 = FUNC_4(VAR_4, VAR_11);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_10 = (void *)VAR_8->data;
 VAR_9 = VAR_10;
 VAR_9->tag = FUNC_1(VAR_2);
 VAR_9->len = FUNC_1(sizeof(*VAR_6));
 VAR_6 = (void *)VAR_9->value;
 VAR_6->vdev_id = FUNC_2(VAR_5->vdev_id);
 VAR_6->enabled = FUNC_2(VAR_5->enabled);
 VAR_6->method = FUNC_2(VAR_5->method);
 VAR_6->interval = FUNC_2(VAR_5->interval);

 VAR_10 += sizeof(*VAR_9);
 VAR_10 += sizeof(*VAR_6);

 VAR_9 = VAR_10;
 VAR_9->tag = FUNC_1(VAR_3);
 VAR_9->len = FUNC_1(sizeof(*VAR_7));
 VAR_7 = (void *)VAR_9->value;

 VAR_7->src_ip4_addr = VAR_5->src_ip4_addr;
 VAR_7->dest_ip4_addr = VAR_5->dest_ip4_addr;
 FUNC_5(VAR_7->dest_mac_addr.addr, VAR_5->dest_mac_addr);

 FUNC_3(VAR_4, VAR_0, "wmi tlv sta keepalive vdev %d enabled %d method %d interval %d\n",
     VAR_5->vdev_id, VAR_5->enabled, VAR_5->method, VAR_5->interval);
 return VAR_8;
}
