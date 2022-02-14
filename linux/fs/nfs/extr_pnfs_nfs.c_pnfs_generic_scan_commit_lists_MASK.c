
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_commit_info {TYPE_1__* ds; int inode; } ;
struct TYPE_4__ {int commit_mutex; } ;
struct TYPE_3__ {int nbuckets; int * buckets; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nfs_commit_info*,int) ;

int FUNC_3(struct nfs_commit_info *VAR_0,
       int VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4;

 FUNC_1(&FUNC_0(VAR_0->inode)->commit_mutex);
 for (VAR_2 = 0; VAR_2 < VAR_0->ds->nbuckets && VAR_1 != 0; VAR_2++) {
  VAR_4 = FUNC_2(&VAR_0->ds->buckets[VAR_2],
             VAR_0, VAR_1);
  VAR_1 -= VAR_4;
  VAR_3 += VAR_4;
 }
 return VAR_3;
}
