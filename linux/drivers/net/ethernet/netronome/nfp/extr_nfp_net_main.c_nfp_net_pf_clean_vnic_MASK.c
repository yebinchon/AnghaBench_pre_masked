
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int app; } ;
struct nfp_net {scalar_t__ port; int debugfs_dir; } ;


 int FUNC_0 (int ,struct nfp_net*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct nfp_net*) ;

__attribute__((used)) static void FUNC_6(struct nfp_pf *VAR_0, struct nfp_net *VAR_1)
{
 if (FUNC_5(VAR_1))
  FUNC_0(VAR_0->app, VAR_1);
 if (VAR_1->port)
  FUNC_1(VAR_1->port);
 FUNC_4(&VAR_1->debugfs_dir);
 FUNC_3(VAR_1);
 if (VAR_1->port)
  FUNC_2(VAR_1->port);
}
