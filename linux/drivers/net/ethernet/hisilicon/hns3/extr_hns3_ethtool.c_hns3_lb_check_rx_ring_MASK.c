
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct hns3_nic_priv {TYPE_1__* ring_data; struct hnae3_handle* ae_handle; } ;
struct hns3_enet_ring_group {scalar_t__ total_packets; } ;
struct hns3_enet_ring {TYPE_2__* tqp_vector; } ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct TYPE_4__ {struct hns3_enet_ring_group rx_group; } ;
struct TYPE_3__ {struct hns3_enet_ring* ring; } ;


 int FUNC_0 (struct hns3_enet_ring*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3(struct hns3_nic_priv *VAR_1, u32 VAR_2)
{
 struct hnae3_handle *VAR_3 = VAR_1->ae_handle;
 struct hnae3_knic_private_info *VAR_4;
 u32 VAR_5, VAR_6 = 0;

 VAR_4 = &VAR_3->kinfo;
 for (VAR_5 = VAR_4->num_tqps; VAR_5 < VAR_4->num_tqps * 2; VAR_5++) {
  struct hns3_enet_ring *VAR_7 = VAR_1->ring_data[VAR_5].ring;
  struct hns3_enet_ring_group *VAR_8;
  u64 VAR_9;

  VAR_8 = &VAR_7->tqp_vector->rx_group;
  VAR_9 = VAR_8->total_packets;

  FUNC_1();
  FUNC_0(VAR_7, VAR_2, VAR_0);
  FUNC_2();

  VAR_6 += (VAR_8->total_packets - VAR_9);
  VAR_8->total_packets = VAR_9;
 }
 return VAR_6;
}
