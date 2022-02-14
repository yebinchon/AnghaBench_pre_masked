
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_app_bpf {int bpf_dev; } ;
struct nfp_app {struct nfp_app_bpf* priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct nfp_app *VAR_0, struct net_device *VAR_1)
{
 struct nfp_app_bpf *VAR_2 = VAR_0->priv;

 return FUNC_0(VAR_2->bpf_dev, VAR_1);
}
