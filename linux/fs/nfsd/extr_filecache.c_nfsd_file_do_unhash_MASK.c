
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_file {size_t nf_hashval; int nf_lru; int nf_node; int nf_net; } ;
struct TYPE_2__ {int nfb_count; int nfb_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct nfsd_file*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nfsd_file*) ;

__attribute__((used)) static void
FUNC_9(struct nfsd_file *VAR_4)
{
 FUNC_4(&VAR_0[VAR_4->nf_hashval].nfb_lock);

 FUNC_8(VAR_4);

 if (FUNC_6(VAR_4))
  FUNC_7(FUNC_5(VAR_4->nf_net, VAR_3));
 --VAR_0[VAR_4->nf_hashval].nfb_count;
 FUNC_1(&VAR_4->nf_node);
 if (!FUNC_2(&VAR_4->nf_lru))
  FUNC_3(&VAR_1, &VAR_4->nf_lru);
 FUNC_0(&VAR_2);
}
