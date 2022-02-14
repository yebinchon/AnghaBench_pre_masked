
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {int uc_macs; int * pmac_id; struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct be_adapter*,int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 FUNC_0(VAR_1, ((void*)0));
 for (VAR_2 = 0; VAR_2 < VAR_0->uc_macs; VAR_2++)
  FUNC_1(VAR_0, VAR_0->pmac_id[VAR_2 + 1]);

 VAR_0->uc_macs = 0;
}
