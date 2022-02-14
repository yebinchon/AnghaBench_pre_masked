
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_copy {TYPE_1__* cp_clp; int copies; int nf_src; int nf_dst; } ;
struct TYPE_2__ {int async_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfsd4_copy*) ;
 int FUNC_2 (struct nfsd4_copy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nfsd4_copy *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_3(VAR_0->nf_dst);
 FUNC_3(VAR_0->nf_src);
 FUNC_4(&VAR_0->cp_clp->async_lock);
 FUNC_0(&VAR_0->copies);
 FUNC_5(&VAR_0->cp_clp->async_lock);
 FUNC_2(VAR_0);
}
