
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {unsigned int drc_hashsize; struct nfsd_drc_bucket* drc_hashtbl; } ;
struct nfsd_drc_bucket {int cache_lock; int lru_head; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nfsd_drc_bucket*,struct nfsd_net*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static long
FUNC_4(struct nfsd_net *VAR_0)
{
 unsigned int VAR_1;
 long VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->drc_hashsize; VAR_1++) {
  struct nfsd_drc_bucket *VAR_3 = &VAR_0->drc_hashtbl[VAR_1];

  if (FUNC_0(&VAR_3->lru_head))
   continue;
  FUNC_2(&VAR_3->cache_lock);
  VAR_2 += FUNC_1(VAR_3, VAR_0);
  FUNC_3(&VAR_3->cache_lock);
 }
 return VAR_2;
}
