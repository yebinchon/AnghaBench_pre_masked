
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int dummy; } ;
struct nfs4_file {int fi_lock; int * fi_fds; int * fi_access; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfsd_file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfsd_file*,int ) ;

__attribute__((used)) static void FUNC_6(struct nfs4_file *VAR_1, int VAR_2)
{
 FUNC_2(&VAR_1->fi_lock);

 if (FUNC_0(&VAR_1->fi_access[VAR_2], &VAR_1->fi_lock)) {
  struct nfsd_file *VAR_3 = ((void*)0);
  struct nfsd_file *VAR_4 = ((void*)0);

  FUNC_5(VAR_3, VAR_1->fi_fds[VAR_2]);
  if (FUNC_1(&VAR_1->fi_access[1 - VAR_2]) == 0)
   FUNC_5(VAR_4, VAR_1->fi_fds[VAR_0]);
  FUNC_4(&VAR_1->fi_lock);
  if (VAR_3)
   FUNC_3(VAR_3);
  if (VAR_4)
   FUNC_3(VAR_4);
 }
}
