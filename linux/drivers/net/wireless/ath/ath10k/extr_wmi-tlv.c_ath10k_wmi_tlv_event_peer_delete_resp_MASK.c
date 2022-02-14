
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv {scalar_t__ value; } ;
struct wmi_peer_delete_resp_ev_arg {int peer_addr; int vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int peer_delete_done; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_1,
       struct sk_buff *VAR_2)
{
 struct wmi_peer_delete_resp_ev_arg *VAR_3;
 struct wmi_tlv *VAR_4;

 VAR_4 = (struct wmi_tlv *)VAR_2->data;
 VAR_3 = (struct wmi_peer_delete_resp_ev_arg *)VAR_4->value;

 FUNC_0(VAR_1, VAR_0, "vdev id %d", VAR_3->vdev_id);
 FUNC_0(VAR_1, VAR_0, "peer mac addr %pM", &VAR_3->peer_addr);
 FUNC_0(VAR_1, VAR_0, "wmi tlv peer delete response\n");

 FUNC_1(&VAR_1->peer_delete_done);

 return 0;
}
