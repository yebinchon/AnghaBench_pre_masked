
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_inode_info {struct inode vfs_inode; int i_dir_level; int i_xattr_sem; int i_mmap_sem; int * i_gc_rwsem; int inmem_lock; int inmem_pages; int inmem_ilist; int gdirty_list; int dirty_list; int i_sem; int dirty_pages; } ;
struct TYPE_2__ {int dir_level; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 struct f2fs_inode_info* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct inode *FUNC_7(struct super_block *VAR_4)
{
 struct f2fs_inode_info *VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_3((void *) VAR_5);


 FUNC_2(&VAR_5->dirty_pages, 0);
 FUNC_4(&VAR_5->i_sem);
 FUNC_1(&VAR_5->dirty_list);
 FUNC_1(&VAR_5->gdirty_list);
 FUNC_1(&VAR_5->inmem_ilist);
 FUNC_1(&VAR_5->inmem_pages);
 FUNC_6(&VAR_5->inmem_lock);
 FUNC_4(&VAR_5->i_gc_rwsem[VAR_1]);
 FUNC_4(&VAR_5->i_gc_rwsem[VAR_2]);
 FUNC_4(&VAR_5->i_mmap_sem);
 FUNC_4(&VAR_5->i_xattr_sem);


 VAR_5->i_dir_level = FUNC_0(VAR_4)->dir_level;

 return &VAR_5->vfs_inode;
}
