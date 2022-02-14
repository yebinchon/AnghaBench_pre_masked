
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {int dummy; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {int s_lock; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_7 (struct inode*,struct fat_slot_info*) ;
 int FUNC_8 (struct inode*,int *,int ) ;
 int FUNC_9 (struct inode*,int ,int ,struct fat_slot_info*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->i_sb;
 struct inode *VAR_4 = FUNC_2(VAR_2);
 struct fat_slot_info VAR_5;
 int VAR_6;

 FUNC_10(&FUNC_0(VAR_3)->s_lock);
 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_9(VAR_1, VAR_2->d_name.name, VAR_2->d_name.len, &VAR_5);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_7(VAR_1, &VAR_5);
 if (VAR_6)
  goto out;
 FUNC_3(VAR_1);

 FUNC_1(VAR_4);
 FUNC_8(VAR_4, ((void*)0), VAR_0);
 FUNC_4(VAR_4);
out:
 FUNC_11(&FUNC_0(VAR_3)->s_lock);
 if (!VAR_6)
  VAR_6 = FUNC_6(VAR_3, VAR_1, VAR_4);

 return VAR_6;
}
