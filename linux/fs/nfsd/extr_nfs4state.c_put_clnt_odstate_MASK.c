
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int fi_lock; } ;
struct nfs4_clnt_odstate {int co_client; int co_perfile; int co_odcount; struct nfs4_file* co_file; } ;


 int FUNC_0 (int ,struct nfs4_clnt_odstate*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct nfs4_file*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfs4_clnt_odstate *VAR_1)
{
 struct nfs4_file *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->co_file;
 if (FUNC_3(&VAR_1->co_odcount, &VAR_2->fi_lock)) {
  FUNC_1(&VAR_1->co_perfile);
  FUNC_4(&VAR_2->fi_lock);

  FUNC_2(VAR_1->co_client, VAR_2);
  FUNC_0(VAR_0, VAR_1);
 }
}
