
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int app; int xdp_hw; int xdp; } ;
struct netdev_bpf {int command; } ;
struct net_device {int dummy; } ;






 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct nfp_net*,struct netdev_bpf*) ;
 int FUNC_2 (struct nfp_net*,struct netdev_bpf*) ;
 int FUNC_3 (struct nfp_net*,struct netdev_bpf*) ;
 int FUNC_4 (int *,struct netdev_bpf*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct netdev_bpf *VAR_1)
{
 struct nfp_net *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1->command) {
 case 129:
  return FUNC_2(VAR_2, VAR_1);
 case 128:
  return FUNC_3(VAR_2, VAR_1);
 case 131:
  return FUNC_4(&VAR_2->xdp, VAR_1);
 case 130:
  return FUNC_4(&VAR_2->xdp_hw, VAR_1);
 default:
  return FUNC_1(VAR_2->app, VAR_2, VAR_1);
 }
}
