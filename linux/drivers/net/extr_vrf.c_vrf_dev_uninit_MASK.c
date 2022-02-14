
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_vrf {int dummy; } ;
struct net_device {int * dstats; } ;


 int FUNC_0 (int *) ;
 struct net_vrf* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net_vrf*) ;
 int FUNC_3 (struct net_device*,struct net_vrf*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct net_vrf *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);

 FUNC_0(VAR_0->dstats);
 VAR_0->dstats = ((void*)0);
}
