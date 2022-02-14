
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
 struct inode* FUNC_6 (struct super_block*,int ,int ) ;
 int FUNC_7 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_8 (struct inode*,unsigned char*,struct fat_slot_info*) ;
 int FUNC_9 (struct inode*,struct timespec64*,int) ;
 int FUNC_10 (struct inode*,unsigned char*,int ,int,int ,struct timespec64*,struct fat_slot_info*) ;
 int FUNC_11 (char*,int ,unsigned char*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7,
   bool VAR_8)
{
 struct super_block *VAR_9 = VAR_5->i_sb;
 struct inode *VAR_10 = ((void*)0);
 struct fat_slot_info VAR_11;
 struct timespec64 VAR_12;
 unsigned char VAR_13[VAR_1];
 int VAR_14, VAR_15;

 FUNC_12(&FUNC_1(VAR_9)->s_lock);

 VAR_14 = FUNC_11(VAR_6->d_name.name, VAR_6->d_name.len,
    VAR_13, &FUNC_1(VAR_9)->options);
 if (VAR_14)
  goto out;
 VAR_15 = (VAR_6->d_name.name[0] == '.') && (VAR_13[0] != '.');

 if (!FUNC_8(VAR_5, VAR_13, &VAR_11)) {
  FUNC_3(VAR_11.bh);
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_4(VAR_5);
 VAR_14 = FUNC_10(VAR_5, VAR_13, 0, VAR_15, 0, &VAR_12, &VAR_11);
 if (VAR_14)
  goto out;
 VAR_10 = FUNC_6(VAR_9, VAR_11.de, VAR_11.i_pos);
 FUNC_3(VAR_11.bh);
 if (FUNC_0(VAR_10)) {
  VAR_14 = FUNC_2(VAR_10);
  goto out;
 }
 FUNC_9(VAR_10, &VAR_12, VAR_2|VAR_3|VAR_4);


 FUNC_5(VAR_6, VAR_10);
out:
 FUNC_13(&FUNC_1(VAR_9)->s_lock);
 if (!VAR_14)
  VAR_14 = FUNC_7(VAR_9, VAR_5, VAR_10);
 return VAR_14;
}
