
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_ff_layout_mirror {int mirror_ds; int rw_cred; int ro_cred; struct nfs4_ff_layout_mirror* fh_versions; } ;
struct cred {int dummy; } ;


 int FUNC_0 (struct nfs4_ff_layout_mirror*) ;
 int FUNC_1 (struct nfs4_ff_layout_mirror*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cred const*) ;
 struct cred* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nfs4_ff_layout_mirror *VAR_0)
{
 const struct cred *VAR_1;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0->fh_versions);
 VAR_1 = FUNC_4(VAR_0->ro_cred);
 FUNC_3(VAR_1);
 VAR_1 = FUNC_4(VAR_0->rw_cred);
 FUNC_3(VAR_1);
 FUNC_2(VAR_0->mirror_ds);
 FUNC_1(VAR_0);
}
