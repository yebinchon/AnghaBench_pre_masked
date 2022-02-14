
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {int mtu; } ;
struct nfp_net {int app; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*,int) ;
 struct nfp_net_dp* FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*,struct nfp_net_dp*,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct nfp_net *VAR_3 = FUNC_0(VAR_1);
 struct nfp_net_dp *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->app, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->mtu = VAR_2;

 return FUNC_3(VAR_3, VAR_4, ((void*)0));
}
