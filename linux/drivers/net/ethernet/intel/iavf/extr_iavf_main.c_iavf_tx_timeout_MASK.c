
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iavf_adapter {int tx_timeout_count; } ;


 int FUNC_0 (struct iavf_adapter*) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct iavf_adapter *VAR_1 = FUNC_1(VAR_0);

 VAR_1->tx_timeout_count++;
 FUNC_0(VAR_1);
}
