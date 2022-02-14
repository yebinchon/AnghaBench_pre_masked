
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int restart_work; } ;
struct net_device {int dummy; } ;


 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct xgbe_prv_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "tx timeout, device restarting\n");
 FUNC_2(&VAR_1->restart_work);
}
