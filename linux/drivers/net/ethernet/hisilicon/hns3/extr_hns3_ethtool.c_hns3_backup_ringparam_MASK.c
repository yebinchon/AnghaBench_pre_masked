
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_nic_priv {TYPE_1__* ring_data; struct hnae3_handle* ae_handle; } ;
struct hns3_enet_ring {int * skb; } ;
struct TYPE_4__ {int num_tqps; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
struct TYPE_3__ {int ring; } ;


 int VAR_0 ;
 struct hns3_enet_ring* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct hns3_enet_ring*,int ,int) ;

__attribute__((used)) static struct hns3_enet_ring *FUNC_2(struct hns3_nic_priv *VAR_1)
{
 struct hnae3_handle *VAR_2 = VAR_1->ae_handle;
 struct hns3_enet_ring *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->kinfo.num_tqps * 2,
       sizeof(struct hns3_enet_ring), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_2->kinfo.num_tqps * 2; VAR_4++) {
  FUNC_1(&VAR_3[VAR_4], VAR_1->ring_data[VAR_4].ring,
         sizeof(struct hns3_enet_ring));
  VAR_3[VAR_4].skb = ((void*)0);
 }

 return VAR_3;
}
