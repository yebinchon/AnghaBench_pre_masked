
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct wmi_delba_send_cmd {void* reasoncode; void* initiator; void* tid; TYPE_1__ peer_macaddr; void* vdev_id; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int const*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (int ,int const*) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3, u32 VAR_4, const u8 *VAR_5,
        u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct wmi_delba_send_cmd *VAR_9;
 struct sk_buff *VAR_10;

 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_3(VAR_3, sizeof(*VAR_9));
 if (!VAR_10)
  return FUNC_0(-VAR_2);

 VAR_9 = (struct wmi_delba_send_cmd *)VAR_10->data;
 VAR_9->vdev_id = FUNC_1(VAR_4);
 FUNC_4(VAR_9->peer_macaddr.addr, VAR_5);
 VAR_9->tid = FUNC_1(VAR_6);
 VAR_9->initiator = FUNC_1(VAR_7);
 VAR_9->reasoncode = FUNC_1(VAR_8);

 FUNC_2(VAR_3, VAR_0,
     "wmi delba send vdev_id 0x%X mac_addr %pM tid %u initiator %u reason %u\n",
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return VAR_10;
}
