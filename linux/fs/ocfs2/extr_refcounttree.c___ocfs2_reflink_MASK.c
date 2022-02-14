
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct dentry {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_flags; int ip_dyn_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct buffer_head*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*,struct buffer_head*) ;
 int FUNC_9 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*,int) ;
 int FUNC_10 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*,int) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*,struct buffer_head*,struct inode*,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_14(struct dentry *VAR_5,
      struct buffer_head *VAR_6,
      struct inode *VAR_7,
      bool VAR_8)
{
 int VAR_9;
 struct inode *VAR_10 = FUNC_2(VAR_5);
 struct buffer_head *VAR_11 = ((void*)0);

 if (FUNC_0(VAR_10)->ip_flags & VAR_3) {
  VAR_9 = -VAR_0;
  FUNC_7(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_4(VAR_10->i_mapping);
 if (VAR_9) {
  FUNC_7(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_8(VAR_10, VAR_6);
 if (VAR_9) {
  FUNC_7(VAR_9);
  goto out;
 }

 FUNC_5(VAR_7, VAR_1);
 VAR_9 = FUNC_11(VAR_7, &VAR_11, 1,
          VAR_4);
 if (VAR_9) {
  FUNC_7(VAR_9);
  goto out_unlock;
 }

 VAR_9 = FUNC_10(VAR_10, VAR_6,
     VAR_7, VAR_11, VAR_8);
 if (VAR_9) {
  FUNC_7(VAR_9);
  goto inode_unlock;
 }

 if (FUNC_0(VAR_10)->ip_dyn_features & VAR_2) {
  VAR_9 = FUNC_13(VAR_10, VAR_6,
        VAR_7, VAR_11,
        VAR_8);
  if (VAR_9) {
   FUNC_7(VAR_9);
   goto inode_unlock;
  }
 }

 VAR_9 = FUNC_9(VAR_10, VAR_6,
         VAR_7, VAR_11, VAR_8);
 if (VAR_9)
  FUNC_7(VAR_9);

inode_unlock:
 FUNC_12(VAR_7, 1);
 FUNC_1(VAR_11);
out_unlock:
 FUNC_6(VAR_7);
out:
 if (!VAR_9) {
  VAR_9 = FUNC_3(VAR_10->i_mapping);
  if (VAR_9)
   FUNC_7(VAR_9);
 }
 return VAR_9;
}
