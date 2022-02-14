
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct timespec64 {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {int s_lock; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 struct timespec64 FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*,struct timespec64*) ;
 struct inode* FUNC_7 (struct super_block*,int ,int ) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct inode*,struct timespec64*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*,int *,int,int,struct timespec64*,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 struct inode *VAR_7;
 struct fat_slot_info VAR_8;
 struct timespec64 VAR_9;
 int VAR_10, VAR_11;

 FUNC_12(&FUNC_1(VAR_6)->s_lock);

 VAR_9 = FUNC_4(VAR_3);
 VAR_11 = FUNC_6(VAR_3, &VAR_9);
 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  goto out;
 }
 VAR_10 = FUNC_15(VAR_3, &VAR_4->d_name, 1, VAR_11, &VAR_9, &VAR_8);
 if (VAR_10)
  goto out_free;
 FUNC_11(VAR_3);
 FUNC_10(VAR_3);

 VAR_7 = FUNC_7(VAR_6, VAR_8.de, VAR_8.i_pos);
 FUNC_3(VAR_8.bh);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);

  goto out;
 }
 FUNC_11(VAR_7);
 FUNC_14(VAR_7, 2);
 FUNC_9(VAR_7, &VAR_9, VAR_0|VAR_1|VAR_2);


 FUNC_5(VAR_4, VAR_7);

 FUNC_13(&FUNC_1(VAR_6)->s_lock);
 return 0;

out_free:
 FUNC_8(VAR_3, VAR_11);
out:
 FUNC_13(&FUNC_1(VAR_6)->s_lock);
 return VAR_10;
}
