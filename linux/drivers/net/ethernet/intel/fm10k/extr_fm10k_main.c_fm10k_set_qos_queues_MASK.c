
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fm10k_ring_feature {int indices; int mask; int limit; } ;
struct TYPE_3__ {int max_queues; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct fm10k_intfc {int num_rx_queues; int num_tx_queues; struct fm10k_ring_feature* ring_feature; TYPE_2__ hw; struct net_device* netdev; } ;


 int FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_5(struct fm10k_intfc *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct fm10k_ring_feature *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;


 VAR_8 = FUNC_3(VAR_4);

 if (VAR_8 <= 1)
  return 0;


 VAR_5 = &VAR_3->ring_feature[VAR_0];
 VAR_5->indices = VAR_8;
 VAR_5->mask = FUNC_0(FUNC_1(VAR_8 - 1)) - 1;


 VAR_6 = VAR_3->hw.mac.max_queues / VAR_8;
 VAR_6 = FUNC_0(FUNC_1(VAR_6) - 1);


 VAR_5 = &VAR_3->ring_feature[VAR_1];
 VAR_6 = FUNC_2(VAR_2, VAR_6, VAR_5->limit);
 VAR_5->indices = VAR_6;
 VAR_5->mask = FUNC_0(FUNC_1(VAR_6 - 1)) - 1;


 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_4(VAR_4, VAR_7, VAR_6, VAR_6 * VAR_7);

 VAR_3->num_rx_queues = VAR_6 * VAR_8;
 VAR_3->num_tx_queues = VAR_6 * VAR_8;

 return 1;
}
