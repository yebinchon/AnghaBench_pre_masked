
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int * inode_lock; } ;
struct f2fs_inode_info {int inmem_ilist; scalar_t__* i_gc_failures; int inmem_lock; int inmem_pages; } ;


 size_t VAR_0 ;
 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct inode*,int *,int,int,int) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;

void FUNC_11(struct inode *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_1(VAR_3);
 struct f2fs_inode_info *VAR_5 = FUNC_0(VAR_3);

 while (!FUNC_5(&VAR_5->inmem_pages)) {
  FUNC_6(&VAR_5->inmem_lock);
  FUNC_2(VAR_3, &VAR_5->inmem_pages,
      1, 0, 1);
  FUNC_7(&VAR_5->inmem_lock);
 }

 FUNC_3(VAR_3, VAR_1);
 VAR_5->i_gc_failures[VAR_2] = 0;
 FUNC_10(VAR_3);

 FUNC_8(&VAR_4->inode_lock[VAR_0]);
 if (!FUNC_5(&VAR_5->inmem_ilist))
  FUNC_4(&VAR_5->inmem_ilist);
 FUNC_9(&VAR_4->inode_lock[VAR_0]);
}
