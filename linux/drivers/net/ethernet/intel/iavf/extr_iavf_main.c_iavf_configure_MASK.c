
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iavf_ring {int dummy; } ;
struct iavf_adapter {int num_active_queues; struct iavf_ring* rx_rings; int aq_required; struct net_device* netdev; } ;


 int FUNC_0 (struct iavf_ring*) ;
 int VAR_0 ;
 int FUNC_1 (struct iavf_ring*,int ) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct iavf_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 int VAR_3;

 FUNC_4(VAR_2);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->aq_required |= VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_active_queues; VAR_3++) {
  struct iavf_ring *VAR_4 = &VAR_1->rx_rings[VAR_3];

  FUNC_1(VAR_4, FUNC_0(VAR_4));
 }
}
