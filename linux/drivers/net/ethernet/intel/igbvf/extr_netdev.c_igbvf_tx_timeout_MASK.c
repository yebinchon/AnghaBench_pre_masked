
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igbvf_adapter {int reset_task; int tx_timeout_count; } ;


 struct igbvf_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct igbvf_adapter *VAR_1 = FUNC_0(VAR_0);


 VAR_1->tx_timeout_count++;
 FUNC_1(&VAR_1->reset_task);
}
