
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_cache {int lock; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nilfs_palloc_cache* mi_palloc_cache; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct inode *VAR_0,
         struct nilfs_palloc_cache *VAR_1)
{
 FUNC_0(VAR_0)->mi_palloc_cache = VAR_1;
 FUNC_1(&VAR_1->lock);
}
