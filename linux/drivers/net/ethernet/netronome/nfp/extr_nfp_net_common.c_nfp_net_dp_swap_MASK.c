
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_dp {TYPE_1__* netdev; int mtu; } ;
struct nfp_net {struct nfp_net_dp dp; } ;
struct TYPE_2__ {int mtu; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nfp_net*) ;

__attribute__((used)) static void FUNC_2(struct nfp_net *VAR_0, struct nfp_net_dp *VAR_1)
{
 struct nfp_net_dp VAR_2 = *VAR_1;

 *VAR_1 = VAR_0->dp;
 VAR_0->dp = VAR_2;

 VAR_0->dp.netdev->mtu = VAR_2.mtu;

 if (!FUNC_0(VAR_0->dp.netdev))
  FUNC_1(VAR_0);
}
