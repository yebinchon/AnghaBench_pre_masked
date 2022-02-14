
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_file {int nf_file; } ;
struct nfs4_stid {int dummy; } ;
struct TYPE_2__ {int sc_file; } ;
struct nfs4_ol_stateid {TYPE_1__ st_stid; int st_stateowner; } ;
struct nfs4_lockowner {int dummy; } ;
typedef int fl_owner_t ;


 int FUNC_0 (int ,int ) ;
 struct nfsd_file* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct nfs4_lockowner* FUNC_3 (int ) ;
 int FUNC_4 (struct nfs4_stid*) ;
 int FUNC_5 (struct nfsd_file*) ;
 struct nfs4_ol_stateid* FUNC_6 (struct nfs4_stid*) ;

__attribute__((used)) static void FUNC_7(struct nfs4_stid *VAR_0)
{
 struct nfs4_ol_stateid *VAR_1 = FUNC_6(VAR_0);
 struct nfs4_lockowner *VAR_2 = FUNC_3(VAR_1->st_stateowner);
 struct nfsd_file *VAR_3;

 VAR_3 = FUNC_1(VAR_1->st_stid.sc_file);
 if (VAR_3) {
  FUNC_2(VAR_3->nf_file);
  FUNC_0(VAR_3->nf_file, (fl_owner_t)VAR_2);
  FUNC_5(VAR_3);
 }
 FUNC_4(VAR_0);
}
