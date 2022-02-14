
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_file {size_t nf_hashval; int nf_lru; int nf_ref; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int nfb_lock; } ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (struct nfsd_file*) ;
 int FUNC_4 (struct nfsd_file*) ;

__attribute__((used)) static bool
FUNC_5(struct nfsd_file *VAR_1, struct list_head *VAR_2)
{
 FUNC_2(&VAR_0[VAR_1->nf_hashval].nfb_lock);

 FUNC_4(VAR_1);
 if (!FUNC_3(VAR_1))
  return 0;

 if (FUNC_0(&VAR_1->nf_ref, -1, 1))
  return 1;

 FUNC_1(&VAR_1->nf_lru, VAR_2);
 return 1;
}
