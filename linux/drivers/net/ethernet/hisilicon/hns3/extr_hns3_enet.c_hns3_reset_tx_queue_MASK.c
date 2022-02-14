
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {TYPE_2__* ring_data; } ;
struct TYPE_3__ {size_t num_tqps; struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct TYPE_4__ {int queue_index; } ;


 struct netdev_queue* FUNC_0 (struct net_device*,int ) ;
 struct hns3_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netdev_queue*) ;

__attribute__((used)) static void FUNC_3(struct hnae3_handle *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->kinfo.netdev;
 struct hns3_nic_priv *VAR_2 = FUNC_1(VAR_1);
 struct netdev_queue *VAR_3;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->kinfo.num_tqps; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1,
      VAR_2->ring_data[VAR_4].queue_index);
  FUNC_2(VAR_3);
 }
}
