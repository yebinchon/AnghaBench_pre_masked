
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_layer {scalar_t__ idx; int mnt; } ;
struct ovl_fs {scalar_t__ indexdir; int upper_mnt; } ;
struct inode {int dummy; } ;
typedef struct inode dentry ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int) ;
 struct inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*,scalar_t__) ;
 struct inode* FUNC_10 (struct ovl_fs*,struct inode*) ;
 struct inode* FUNC_11 (struct ovl_fs*,int *,struct inode*,int) ;
 struct inode* FUNC_12 (struct super_block*,struct inode*,int) ;
 struct inode* FUNC_13 (struct super_block*,struct inode*,struct ovl_layer*) ;

__attribute__((used)) static struct dentry *FUNC_14(struct super_block *VAR_1,
         struct dentry *VAR_2,
         struct ovl_layer *VAR_3)
{
 struct ovl_fs *VAR_4 = VAR_1->s_fs_info;
 struct ovl_layer VAR_5 = { .mnt = VAR_4->upper_mnt };
 struct dentry *VAR_6 = ((void*)0);
 struct dentry *VAR_7 = ((void*)0);
 struct inode *VAR_8;





 VAR_8 = FUNC_12(VAR_1, VAR_2, !VAR_3->idx);
 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);
 if (VAR_8) {
  VAR_7 = FUNC_5(VAR_8);
  FUNC_8(VAR_8);
 }





 if (!VAR_7 && VAR_3->idx && VAR_4->indexdir && !FUNC_4(!FUNC_6(VAR_2))) {
  VAR_6 = FUNC_11(VAR_4, ((void*)0), VAR_2, 0);
  if (FUNC_2(VAR_6))
   return VAR_6;
 }


 if (VAR_6) {
  struct dentry *VAR_9 = FUNC_10(VAR_4, VAR_6);

  FUNC_7(VAR_6);
  if (FUNC_3(VAR_9))
   return VAR_9;
  VAR_7 = FUNC_13(VAR_1, VAR_9, &VAR_5);
  FUNC_7(VAR_9);
 }

 if (FUNC_3(VAR_7))
  return VAR_7;

 if (FUNC_4(FUNC_9(VAR_7, VAR_3->idx) != VAR_2)) {
  FUNC_7(VAR_7);
  VAR_7 = FUNC_1(-VAR_0);
 }

 return VAR_7;
}
