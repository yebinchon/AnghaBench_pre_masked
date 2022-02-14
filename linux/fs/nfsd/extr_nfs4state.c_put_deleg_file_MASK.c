
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int dummy; } ;
struct nfs4_file {scalar_t__ fi_delegees; int fi_lock; int fi_deleg_file; } ;


 int FUNC_0 (struct nfsd_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfsd_file*,int ) ;

__attribute__((used)) static void FUNC_4(struct nfs4_file *VAR_0)
{
 struct nfsd_file *VAR_1 = ((void*)0);

 FUNC_1(&VAR_0->fi_lock);
 if (--VAR_0->fi_delegees == 0)
  FUNC_3(VAR_1, VAR_0->fi_deleg_file);
 FUNC_2(&VAR_0->fi_lock);

 if (VAR_1)
  FUNC_0(VAR_1);
}
