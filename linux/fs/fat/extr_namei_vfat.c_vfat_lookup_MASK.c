
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct dentry {scalar_t__ d_parent; int d_name; } ;
struct TYPE_2__ {int s_lock; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct dentry* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_8 (struct inode*,struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 struct inode* FUNC_10 (struct super_block*,int ,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct dentry*,int ) ;
 int FUNC_16 (struct inode*,int *,struct fat_slot_info*) ;

__attribute__((used)) static struct dentry *FUNC_17(struct inode *VAR_1, struct dentry *VAR_2,
      unsigned int VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct fat_slot_info VAR_5;
 struct inode *VAR_6;
 struct dentry *VAR_7;
 int VAR_8;

 FUNC_13(&FUNC_2(VAR_4)->s_lock);

 VAR_8 = FUNC_16(VAR_1, &VAR_2->d_name, &VAR_5);
 if (VAR_8) {
  if (VAR_8 == -VAR_0) {
   VAR_6 = ((void*)0);
   goto out;
  }
  goto error;
 }

 VAR_6 = FUNC_10(VAR_4, VAR_5.de, VAR_5.i_pos);
 FUNC_5(VAR_5.bh);
 if (FUNC_1(VAR_6)) {
  VAR_8 = FUNC_3(VAR_6);
  goto error;
 }

 VAR_7 = FUNC_6(VAR_6);




 if (VAR_7 && VAR_7->d_parent == VAR_2->d_parent) {







  if (!FUNC_4(VAR_6->i_mode))
   FUNC_7(VAR_7, VAR_2);
  FUNC_12(VAR_6);
  FUNC_14(&FUNC_2(VAR_4)->s_lock);
  return VAR_7;
 } else
  FUNC_9(VAR_7);

out:
 FUNC_14(&FUNC_2(VAR_4)->s_lock);
 if (!VAR_6)
  FUNC_15(VAR_2, FUNC_11(VAR_1));
 return FUNC_8(VAR_6, VAR_2);
error:
 FUNC_14(&FUNC_2(VAR_4)->s_lock);
 return FUNC_0(VAR_8);
}
