
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct inode {struct inode* i_ino; int i_sb; int i_mode; TYPE_1__ d_name; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct dentry {struct dentry* i_ino; int i_sb; int i_mode; TYPE_1__ d_name; } ;
struct buffer_head {struct buffer_head* i_ino; int i_sb; int i_mode; TYPE_1__ d_name; } ;
typedef struct inode* __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,char*,struct inode*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*,struct inode*) ;
 struct inode* FUNC_10 (int ,struct inode*,int ) ;
 struct inode* FUNC_11 (struct inode*,struct inode*,struct ext4_dir_entry_2**) ;
 int FUNC_12 (int ,struct inode*) ;
 int FUNC_13 (int ,char*,struct inode*,struct inode*) ;
 int FUNC_14 (struct inode*,struct inode*) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static struct dentry *FUNC_18(struct inode *VAR_6, struct dentry *VAR_7, unsigned int VAR_8)
{
 struct inode *VAR_9;
 struct ext4_dir_entry_2 *VAR_10;
 struct buffer_head *VAR_11;

 if (VAR_7->d_name.len > VAR_5)
  return FUNC_1(-VAR_1);

 VAR_11 = FUNC_11(VAR_6, VAR_7, &VAR_10);
 if (FUNC_5(VAR_11))
  return FUNC_0(VAR_11);
 VAR_9 = ((void*)0);
 if (VAR_11) {
  __u32 VAR_12 = FUNC_16(VAR_10->inode);
  FUNC_8(VAR_11);
  if (!FUNC_12(VAR_6->i_sb, VAR_12)) {
   FUNC_2(VAR_6, "bad inode number: %u", VAR_12);
   return FUNC_1(-VAR_0);
  }
  if (FUNC_17(VAR_12 == VAR_6->i_ino)) {
   FUNC_2(VAR_6, "'%pd' linked to parent dir",
      VAR_7);
   return FUNC_1(-VAR_0);
  }
  VAR_9 = FUNC_10(VAR_6->i_sb, VAR_12, VAR_4);
  if (VAR_9 == FUNC_1(-VAR_3)) {
   FUNC_2(VAR_6,
      "deleted inode referenced: %u",
      VAR_12);
   return FUNC_1(-VAR_0);
  }
  if (!FUNC_5(VAR_9) && FUNC_4(VAR_6) &&
      (FUNC_6(VAR_9->i_mode) || FUNC_7(VAR_9->i_mode)) &&
      !FUNC_14(VAR_6, VAR_9)) {
   FUNC_13(VAR_9->i_sb,
         "Inconsistent encryption contexts: %lu/%lu",
         VAR_6->i_ino, VAR_9->i_ino);
   FUNC_15(VAR_9);
   return FUNC_1(-VAR_2);
  }
 }
 return FUNC_9(VAR_9, VAR_7);
}
