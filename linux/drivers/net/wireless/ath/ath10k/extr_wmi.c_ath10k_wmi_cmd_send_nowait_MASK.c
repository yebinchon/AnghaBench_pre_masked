
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_cmd_hdr {int cmd_id; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k_skb_cb {int dummy; } ;
struct TYPE_2__ {int eid; } ;
struct ath10k {TYPE_1__ wmi; int htc; } ;


 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,struct sk_buff*) ;
 int FUNC_4 (struct ath10k_skb_cb*,int ,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int * FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct ath10k*,int ,scalar_t__,int ) ;

int FUNC_8(struct ath10k *VAR_2, struct sk_buff *VAR_3,
          u32 VAR_4)
{
 struct ath10k_skb_cb *VAR_5 = FUNC_0(VAR_3);
 struct wmi_cmd_hdr *VAR_6;
 int VAR_7;
 u32 VAR_8 = 0;

 if (FUNC_6(VAR_3, sizeof(struct wmi_cmd_hdr)) == ((void*)0))
  return -VAR_0;

 VAR_8 |= FUNC_1(VAR_4, VAR_1);

 VAR_6 = (struct wmi_cmd_hdr *)VAR_3->data;
 VAR_6->cmd_id = FUNC_2(VAR_8);

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 FUNC_7(VAR_2, VAR_4, VAR_3->data, VAR_3->len);
 VAR_7 = FUNC_3(&VAR_2->htc, VAR_2->wmi.eid, VAR_3);

 if (VAR_7)
  goto err_pull;

 return 0;

err_pull:
 FUNC_5(VAR_3, sizeof(struct wmi_cmd_hdr));
 return VAR_7;
}
