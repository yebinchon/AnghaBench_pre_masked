
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* dev; } ;
struct hns_nic_ring_data {int queue_index; TYPE_1__ napi; struct hnae_ring* ring; } ;
struct hnae_ring {int next_to_use; int next_to_clean; } ;


 int FUNC_0 (struct hnae_ring*,int*,int*) ;
 struct netdev_queue* FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;

__attribute__((used)) static void FUNC_3(struct hns_nic_ring_data *VAR_0)
{
 struct hnae_ring *VAR_1 = VAR_0->ring;
 struct net_device *VAR_2 = VAR_0->napi.dev;
 struct netdev_queue *VAR_3;
 int VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_1->next_to_use;
 VAR_5 = 0;
 VAR_6 = 0;
 while (VAR_4 != VAR_1->next_to_clean)
  FUNC_0(VAR_1, &VAR_5, &VAR_6);

 VAR_3 = FUNC_1(VAR_2, VAR_0->queue_index);
 FUNC_2(VAR_3);
}
