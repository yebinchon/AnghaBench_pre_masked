
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {struct nfp_bpf_vnic* app_priv; } ;
struct nfp_bpf_vnic {int tc_prog; } ;
struct nfp_app {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_bpf_vnic*) ;

__attribute__((used)) static void FUNC_2(struct nfp_app *VAR_0, struct nfp_net *VAR_1)
{
 struct nfp_bpf_vnic *VAR_2 = VAR_1->app_priv;

 FUNC_0(VAR_2->tc_prog);
 FUNC_1(VAR_2);
}
