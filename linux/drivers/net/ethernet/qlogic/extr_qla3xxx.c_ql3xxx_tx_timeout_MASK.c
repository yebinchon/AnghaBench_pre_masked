
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int tx_timeout_work; int workqueue; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct ql3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ql3_adapter *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "Resetting...\n");



 FUNC_2(VAR_0);




 FUNC_3(VAR_1->workqueue, &VAR_1->tx_timeout_work, 0);
}
