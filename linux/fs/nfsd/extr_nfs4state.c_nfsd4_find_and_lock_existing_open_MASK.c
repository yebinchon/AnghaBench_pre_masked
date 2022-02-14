
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open {int dummy; } ;
struct nfs4_ol_stateid {int st_stid; } ;
struct nfs4_file {int fi_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 struct nfs4_ol_stateid* FUNC_1 (struct nfs4_file*,struct nfsd4_open*) ;
 scalar_t__ FUNC_2 (struct nfs4_ol_stateid*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct nfs4_ol_stateid *
FUNC_5(struct nfs4_file *VAR_1, struct nfsd4_open *VAR_2)
{
 struct nfs4_ol_stateid *VAR_3;
 for (;;) {
  FUNC_3(&VAR_1->fi_lock);
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_4(&VAR_1->fi_lock);
  if (!VAR_3 || FUNC_2(VAR_3) == VAR_0)
   break;
  FUNC_0(&VAR_3->st_stid);
 }
 return VAR_3;
}
