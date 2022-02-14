
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int xdp_hw; int app; } ;
struct netdev_bpf {int extack; int prog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nfp_net*,int ,int ) ;
 int FUNC_1 (int *,struct netdev_bpf*) ;
 int FUNC_2 (int *,struct netdev_bpf*) ;

__attribute__((used)) static int FUNC_3(struct nfp_net *VAR_1, struct netdev_bpf *VAR_2)
{
 int VAR_3;

 if (!FUNC_1(&VAR_1->xdp_hw, VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1->app, VAR_1, VAR_2->prog, VAR_2->extack);
 if (VAR_3)
  return VAR_3;

 FUNC_2(&VAR_1->xdp_hw, VAR_2);
 return 0;
}
