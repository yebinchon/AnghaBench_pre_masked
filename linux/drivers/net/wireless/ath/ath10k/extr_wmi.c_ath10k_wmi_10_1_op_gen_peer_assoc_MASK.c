
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_assoc_complete_arg {scalar_t__ peer_reassoc; int addr; int vdev_id; } ;
struct wmi_10_1_peer_assoc_complete_cmd {int dummy; } ;
struct sk_buff {int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ,char*) ;
 struct sk_buff* FUNC_2 (struct ath10k*,size_t) ;
 int FUNC_3 (struct wmi_peer_assoc_complete_arg const*) ;
 int FUNC_4 (struct ath10k*,int ,struct wmi_peer_assoc_complete_arg const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_2,
      const struct wmi_peer_assoc_complete_arg *VAR_3)
{
 size_t VAR_4 = sizeof(struct wmi_10_1_peer_assoc_complete_cmd);
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  return FUNC_0(VAR_6);

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_4(VAR_2, VAR_5->data, VAR_3);

 FUNC_1(VAR_2, VAR_0,
     "wmi peer assoc vdev %d addr %pM (%s)\n",
     VAR_3->vdev_id, VAR_3->addr,
     VAR_3->peer_reassoc ? "reassociate" : "new");
 return VAR_5;
}
