
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode_info {int * i_gc_rwsem; int inmem_lock; } ;


 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct inode *VAR_2)
{
 struct f2fs_sb_info *VAR_3 = FUNC_1(VAR_2);
 struct f2fs_inode_info *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 FUNC_5(VAR_3, 1);

 FUNC_4(&VAR_4->i_gc_rwsem[VAR_1]);

 FUNC_6(VAR_3);
 FUNC_10(VAR_2, VAR_0);

 FUNC_8(&VAR_4->inmem_lock);
 VAR_5 = FUNC_2(VAR_2);
 FUNC_9(&VAR_4->inmem_lock);

 FUNC_3(VAR_2, VAR_0);

 FUNC_7(VAR_3);
 FUNC_11(&VAR_4->i_gc_rwsem[VAR_1]);

 return VAR_5;
}
