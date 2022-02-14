
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_mtime; int i_ctime; } ;
struct f2fs_dir_entry {int name_len; } ;
struct f2fs_dentry_ptr {int bitmap; struct f2fs_dir_entry* dentry; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct inode*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (struct page*,int ,int,int) ;
 void* FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct inode*,struct f2fs_dentry_ptr*,void*) ;
 int FUNC_11 (struct page*) ;

void FUNC_12(struct f2fs_dir_entry *VAR_1, struct page *VAR_2,
     struct inode *VAR_3, struct inode *VAR_4)
{
 struct f2fs_dentry_ptr VAR_5;
 void *VAR_6;
 int VAR_7 = FUNC_0(FUNC_8(VAR_1->name_len));
 unsigned int VAR_8;
 int VAR_9;

 FUNC_9(VAR_2);
 FUNC_6(VAR_2, VAR_0, 1, 1);

 VAR_6 = FUNC_7(VAR_3, VAR_2);
 FUNC_10(VAR_3, &VAR_5, VAR_6);

 VAR_8 = VAR_1 - VAR_5.dentry;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_1(VAR_8 + VAR_9, VAR_5.bitmap);

 FUNC_11(VAR_2);
 FUNC_5(VAR_2, 1);

 VAR_3->i_ctime = VAR_3->i_mtime = FUNC_2(VAR_3);
 FUNC_4(VAR_3, 0);

 if (VAR_4)
  FUNC_3(VAR_3, VAR_4);
}
