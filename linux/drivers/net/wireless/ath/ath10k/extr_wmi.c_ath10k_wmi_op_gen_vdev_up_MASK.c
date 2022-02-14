
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct wmi_vdev_up_cmd {TYPE_1__ vdev_bssid; void* vdev_assoc_id; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ,int const*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (int ,int const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_2, u32 VAR_3, u32 VAR_4,
     const u8 *VAR_5)
{
 struct wmi_vdev_up_cmd *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_6));
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_6 = (struct wmi_vdev_up_cmd *)VAR_7->data;
 VAR_6->vdev_id = FUNC_1(VAR_3);
 VAR_6->vdev_assoc_id = FUNC_1(VAR_4);
 FUNC_4(VAR_6->vdev_bssid.addr, VAR_5);

 FUNC_2(VAR_2, VAR_0,
     "wmi mgmt vdev up id 0x%x assoc id %d bssid %pM\n",
     VAR_3, VAR_4, VAR_5);
 return VAR_7;
}
