
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct wmi_peer_set_param_cmd {TYPE_1__ peer_macaddr; void* param_value; void* param_id; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_peer_param { ____Placeholder_wmi_peer_param } wmi_peer_param ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int const*,int,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (int ,int const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_2, u32 VAR_3,
     const u8 *VAR_4,
     enum wmi_peer_param VAR_5,
     u32 VAR_6)
{
 struct wmi_peer_set_param_cmd *VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_3(VAR_2, sizeof(*VAR_7));
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_7 = (struct wmi_peer_set_param_cmd *)VAR_8->data;
 VAR_7->vdev_id = FUNC_1(VAR_3);
 VAR_7->param_id = FUNC_1(VAR_5);
 VAR_7->param_value = FUNC_1(VAR_6);
 FUNC_4(VAR_7->peer_macaddr.addr, VAR_4);

 FUNC_2(VAR_2, VAR_0,
     "wmi vdev %d peer 0x%pM set param %d value %d\n",
     VAR_3, VAR_4, VAR_5, VAR_6);
 return VAR_8;
}
