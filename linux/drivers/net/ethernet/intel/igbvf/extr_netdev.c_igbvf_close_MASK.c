
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igbvf_adapter {int rx_ring; int tx_ring; int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct igbvf_adapter*) ;
 int FUNC_2 (struct igbvf_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct igbvf_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct igbvf_adapter *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(FUNC_6(VAR_0, &VAR_2->state));
 FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 FUNC_4(VAR_2->tx_ring);
 FUNC_3(VAR_2->rx_ring);

 return 0;
}
