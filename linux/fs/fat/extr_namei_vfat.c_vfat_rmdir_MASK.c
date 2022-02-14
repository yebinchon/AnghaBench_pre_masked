
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {int s_lock; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct fat_slot_info*) ;
 int FUNC_7 (struct inode*,int *,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dentry*,int ) ;
 int FUNC_12 (struct inode*,int *,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_3);
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct fat_slot_info VAR_6;
 int VAR_7;

 FUNC_9(&FUNC_0(VAR_5)->s_lock);

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_12(VAR_2, &VAR_3->d_name, &VAR_6);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_6(VAR_2, &VAR_6);
 if (VAR_7)
  goto out;
 FUNC_3(VAR_2);

 FUNC_1(VAR_4);
 FUNC_7(VAR_4, ((void*)0), VAR_0|VAR_1);
 FUNC_4(VAR_4);
 FUNC_11(VAR_3, FUNC_8(VAR_2));
out:
 FUNC_10(&FUNC_0(VAR_5)->s_lock);

 return VAR_7;
}
