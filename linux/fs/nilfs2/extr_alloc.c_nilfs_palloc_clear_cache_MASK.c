
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bh; } ;
struct TYPE_7__ {int * bh; } ;
struct TYPE_6__ {int * bh; } ;
struct nilfs_palloc_cache {int lock; TYPE_1__ prev_entry; TYPE_3__ prev_bitmap; TYPE_2__ prev_desc; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {struct nilfs_palloc_cache* mi_palloc_cache; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_0)
{
 struct nilfs_palloc_cache *VAR_1 = FUNC_0(VAR_0)->mi_palloc_cache;

 FUNC_2(&VAR_1->lock);
 FUNC_1(VAR_1->prev_desc.bh);
 FUNC_1(VAR_1->prev_bitmap.bh);
 FUNC_1(VAR_1->prev_entry.bh);
 VAR_1->prev_desc.bh = ((void*)0);
 VAR_1->prev_bitmap.bh = ((void*)0);
 VAR_1->prev_entry.bh = ((void*)0);
 FUNC_3(&VAR_1->lock);
}
