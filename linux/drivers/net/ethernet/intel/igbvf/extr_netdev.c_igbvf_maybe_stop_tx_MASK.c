
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igbvf_adapter {int restart_queue; int tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct igbvf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct igbvf_adapter *VAR_3 = FUNC_1(VAR_1);


 if (FUNC_0(VAR_3->tx_ring) >= VAR_2)
  return 0;

 FUNC_2(VAR_1);





 FUNC_4();


 if (FUNC_0(VAR_3->tx_ring) < VAR_2)
  return -VAR_0;

 FUNC_3(VAR_1);

 ++VAR_3->restart_queue;
 return 0;
}
