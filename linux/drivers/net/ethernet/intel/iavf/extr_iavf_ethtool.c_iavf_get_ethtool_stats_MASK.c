
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct iavf_ring {int dummy; } ;
struct iavf_adapter {unsigned int num_active_queues; struct iavf_ring* rx_rings; struct iavf_ring* tx_rings; } ;
struct ethtool_stats {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int **,struct iavf_adapter*,int ) ;
 int FUNC_1 (int **,struct iavf_ring*) ;
 int VAR_1 ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
       struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct iavf_adapter *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6;

 FUNC_0(&VAR_4, VAR_5, VAR_1);

 FUNC_3();
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct iavf_ring *VAR_7;


  VAR_7 = (VAR_6 < VAR_5->num_active_queues ?
   &VAR_5->tx_rings[VAR_6] : ((void*)0));
  FUNC_1(&VAR_4, VAR_7);


  VAR_7 = (VAR_6 < VAR_5->num_active_queues ?
   &VAR_5->rx_rings[VAR_6] : ((void*)0));
  FUNC_1(&VAR_4, VAR_7);
 }
 FUNC_4();
}
