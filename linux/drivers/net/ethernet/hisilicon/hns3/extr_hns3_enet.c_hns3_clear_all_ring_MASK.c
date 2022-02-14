
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {TYPE_1__* ring_data; } ;
struct hns3_enet_ring {int dummy; } ;
struct TYPE_4__ {size_t num_tqps; struct net_device* netdev; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
struct TYPE_3__ {struct hns3_enet_ring* ring; } ;


 int FUNC_0 (struct hns3_enet_ring*) ;
 int FUNC_1 (struct hns3_enet_ring*) ;
 int FUNC_2 (struct hns3_enet_ring*) ;
 struct hns3_nic_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct hnae3_handle *VAR_0, bool VAR_1)
{
 struct net_device *VAR_2 = VAR_0->kinfo.netdev;
 struct hns3_nic_priv *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->kinfo.num_tqps; VAR_4++) {
  struct hns3_enet_ring *VAR_5;

  VAR_5 = VAR_3->ring_data[VAR_4].ring;
  FUNC_1(VAR_5);

  VAR_5 = VAR_3->ring_data[VAR_4 + VAR_0->kinfo.num_tqps].ring;



  if (VAR_1)
   FUNC_2(VAR_5);
  else
   FUNC_0(VAR_5);
 }
}
