
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
 struct inode* FUNC_6 (struct super_block*,int ,int ) ;
 int FUNC_7 (struct inode*,struct timespec64*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,int *,int ,int ,struct timespec64*,struct fat_slot_info*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5,
         bool VAR_6)
{
 struct super_block *VAR_7 = VAR_3->i_sb;
 struct inode *VAR_8;
 struct fat_slot_info VAR_9;
 struct timespec64 VAR_10;
 int VAR_11;

 FUNC_9(&FUNC_1(VAR_7)->s_lock);

 VAR_10 = FUNC_4(VAR_3);
 VAR_11 = FUNC_11(VAR_3, &VAR_4->d_name, 0, 0, &VAR_10, &VAR_9);
 if (VAR_11)
  goto out;
 FUNC_8(VAR_3);

 VAR_8 = FUNC_6(VAR_7, VAR_9.de, VAR_9.i_pos);
 FUNC_3(VAR_9.bh);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_2(VAR_8);
  goto out;
 }
 FUNC_8(VAR_8);
 FUNC_7(VAR_8, &VAR_10, VAR_0|VAR_1|VAR_2);


 FUNC_5(VAR_4, VAR_8);
out:
 FUNC_10(&FUNC_1(VAR_7)->s_lock);
 return VAR_11;
}
