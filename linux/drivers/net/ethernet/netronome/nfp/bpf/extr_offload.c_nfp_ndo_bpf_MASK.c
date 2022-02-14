
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int dummy; } ;
struct nfp_app {int priv; } ;
struct netdev_bpf {int command; int offmap; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct nfp_app *VAR_1, struct nfp_net *VAR_2, struct netdev_bpf *VAR_3)
{
 switch (VAR_3->command) {
 case 129:
  return FUNC_0(VAR_1->priv, VAR_3->offmap);
 case 128:
  return FUNC_1(VAR_1->priv, VAR_3->offmap);
 default:
  return -VAR_0;
 }
}
