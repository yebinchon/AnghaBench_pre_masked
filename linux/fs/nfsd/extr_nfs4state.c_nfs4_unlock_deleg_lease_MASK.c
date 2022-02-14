
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_file {int nf_file; } ;
struct nfs4_file {int fi_delegees; struct nfsd_file* fi_deleg_file; } ;
struct TYPE_2__ {struct nfs4_file* sc_file; } ;
struct nfs4_delegation {TYPE_1__ dl_stid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nfs4_file*) ;
 int FUNC_2 (int ,int ,int *,void**) ;

__attribute__((used)) static void FUNC_3(struct nfs4_delegation *VAR_1)
{
 struct nfs4_file *VAR_2 = VAR_1->dl_stid.sc_file;
 struct nfsd_file *VAR_3 = VAR_2->fi_deleg_file;

 FUNC_0(!VAR_2->fi_delegees);

 FUNC_2(VAR_3->nf_file, VAR_0, ((void*)0), (void **)&VAR_1);
 FUNC_1(VAR_2);
}
