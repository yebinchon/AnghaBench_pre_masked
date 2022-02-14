
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int num_vnics; int app; } ;
struct nfp_net {int vnic_list; int port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*) ;
 scalar_t__ FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nfp_pf *VAR_0, struct nfp_net *VAR_1)
{
 if (FUNC_3(VAR_1))
  FUNC_1(VAR_0->app, VAR_1);
 FUNC_4(VAR_1->port);
 FUNC_0(&VAR_1->vnic_list);
 VAR_0->num_vnics--;
 FUNC_2(VAR_1);
}
