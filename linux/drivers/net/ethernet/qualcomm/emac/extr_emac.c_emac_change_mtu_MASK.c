
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct emac_adapter {int netdev; } ;


 int FUNC_0 (struct emac_adapter*) ;
 int VAR_0 ;
 struct emac_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct emac_adapter*,int ,int ,char*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct emac_adapter *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_3, VAR_0, VAR_3->netdev,
     "changing MTU from %d to %d\n", VAR_1->mtu,
     VAR_2);
 VAR_1->mtu = VAR_2;

 if (FUNC_3(VAR_1))
  return FUNC_0(VAR_3);

 return 0;
}
