
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct wmi_ap_ps_peer_cmd {TYPE_1__ peer_macaddr; void* param_value; void* param_id; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_ap_ps_peer_param { ____Placeholder_wmi_ap_ps_peer_param } wmi_ap_ps_peer_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int,int const*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (int ,int const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3, u32 VAR_4, const u8 *VAR_5,
       enum wmi_ap_ps_peer_param VAR_6, u32 VAR_7)
{
 struct wmi_ap_ps_peer_cmd *VAR_8;
 struct sk_buff *VAR_9;

 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_3(VAR_3, sizeof(*VAR_8));
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_8 = (struct wmi_ap_ps_peer_cmd *)VAR_9->data;
 VAR_8->vdev_id = FUNC_1(VAR_4);
 VAR_8->param_id = FUNC_1(VAR_6);
 VAR_8->param_value = FUNC_1(VAR_7);
 FUNC_4(VAR_8->peer_macaddr.addr, VAR_5);

 FUNC_2(VAR_3, VAR_0,
     "wmi ap ps param vdev_id 0x%X param %d value %d mac_addr %pM\n",
     VAR_4, VAR_6, VAR_7, VAR_5);
 return VAR_9;
}
