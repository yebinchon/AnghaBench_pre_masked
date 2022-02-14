
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int fi_clnt_odstate; int fi_lock; } ;
struct nfs4_clnt_odstate {int co_perfile; struct nfs4_file* co_file; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfs4_clnt_odstate *VAR_0)
{
 struct nfs4_file *VAR_1 = VAR_0->co_file;

 FUNC_1(&VAR_1->fi_lock);
 FUNC_0(&VAR_0->co_perfile, &VAR_1->fi_clnt_odstate);
}
