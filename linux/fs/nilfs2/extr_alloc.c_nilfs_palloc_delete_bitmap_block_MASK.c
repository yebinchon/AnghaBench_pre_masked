
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_cache {int lock; int prev_bitmap; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nilfs_palloc_cache* mi_palloc_cache; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int FUNC_2 (struct inode*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
         unsigned long VAR_1)
{
 struct nilfs_palloc_cache *VAR_2 = FUNC_0(VAR_0)->mi_palloc_cache;

 return FUNC_2(VAR_0,
      FUNC_1(VAR_0,
            VAR_1),
      &VAR_2->prev_bitmap, &VAR_2->lock);
}
