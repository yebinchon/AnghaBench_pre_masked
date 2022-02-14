
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_lock; } ;
struct gfs2_inode {TYPE_1__ i_inode; int * i_hash_cache; } ;
typedef int __be64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gfs2_inode *VAR_0)
{
 __be64 *VAR_1;

 FUNC_1(&VAR_0->i_inode.i_lock);
 VAR_1 = VAR_0->i_hash_cache;
 VAR_0->i_hash_cache = ((void*)0);
 FUNC_2(&VAR_0->i_inode.i_lock);

 FUNC_0(VAR_1);
}
