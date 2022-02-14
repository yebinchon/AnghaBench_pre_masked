
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {int app; } ;
struct net_device {int mtu; } ;


 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct net_device*,int) ;
 int FUNC_2 (int ,struct net_device*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct nfp_repr *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->app, VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2->app, VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_0->mtu = VAR_1;

 return 0;
}
