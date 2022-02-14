
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct timespec64 {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fat_slot_info {int bh; int i_pos; int de; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {int s_lock; int options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 struct timespec64 FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*,struct timespec64*) ;
 struct inode* FUNC_7 (struct super_block*,int ,int ) ;
 int FUNC_8 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*,unsigned char*,struct fat_slot_info*) ;
 int FUNC_11 (struct inode*,struct timespec64*,int) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,unsigned char*,int,int,int,struct timespec64*,struct fat_slot_info*) ;
 int FUNC_14 (char*,int ,unsigned char*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct inode*,int) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7)
{
 struct super_block *VAR_8 = VAR_5->i_sb;
 struct fat_slot_info VAR_9;
 struct inode *VAR_10;
 unsigned char VAR_11[VAR_1];
 struct timespec64 VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_15(&FUNC_1(VAR_8)->s_lock);

 VAR_13 = FUNC_14(VAR_6->d_name.name, VAR_6->d_name.len,
    VAR_11, &FUNC_1(VAR_8)->options);
 if (VAR_13)
  goto out;
 VAR_14 = (VAR_6->d_name.name[0] == '.') && (VAR_11[0] != '.');

 if (!FUNC_10(VAR_5, VAR_11, &VAR_9)) {
  FUNC_3(VAR_9.bh);
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_4(VAR_5);
 VAR_15 = FUNC_6(VAR_5, &VAR_12);
 if (VAR_15 < 0) {
  VAR_13 = VAR_15;
  goto out;
 }
 VAR_13 = FUNC_13(VAR_5, VAR_11, 1, VAR_14, VAR_15, &VAR_12, &VAR_9);
 if (VAR_13)
  goto out_free;
 FUNC_12(VAR_5);

 VAR_10 = FUNC_7(VAR_8, VAR_9.de, VAR_9.i_pos);
 FUNC_3(VAR_9.bh);
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_2(VAR_10);

  goto out;
 }
 FUNC_17(VAR_10, 2);
 FUNC_11(VAR_10, &VAR_12, VAR_2|VAR_3|VAR_4);


 FUNC_5(VAR_6, VAR_10);

 FUNC_16(&FUNC_1(VAR_8)->s_lock);
 FUNC_8(VAR_8, VAR_5, VAR_10);
 return 0;

out_free:
 FUNC_9(VAR_5, VAR_15);
out:
 FUNC_16(&FUNC_1(VAR_8)->s_lock);
 return VAR_13;
}
