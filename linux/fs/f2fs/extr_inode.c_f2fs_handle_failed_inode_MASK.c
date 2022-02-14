
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {scalar_t__ blk_addr; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int ,struct node_info*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct f2fs_sb_info*,char*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct f2fs_sb_info*,int ) ;
 int FUNC_13 (struct inode*) ;

void FUNC_14(struct inode *VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_3);
 struct node_info VAR_5;
 int VAR_6;





 FUNC_1(VAR_3);





 FUNC_8(VAR_3);
 FUNC_6(VAR_3);


 FUNC_13(VAR_3);






 VAR_6 = FUNC_5(VAR_4, VAR_3->i_ino, &VAR_5);
 if (VAR_6) {
  FUNC_12(VAR_4, VAR_2);
  FUNC_9(VAR_4, "May loss orphan inode, run fsck to fix.");
  goto out;
 }

 if (VAR_5.blk_addr != VAR_1) {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6) {
   FUNC_12(VAR_4, VAR_2);
   FUNC_9(VAR_4, "Too many orphan inodes, run fsck to fix.");
  } else {
   FUNC_3(VAR_3);
  }
  FUNC_4(VAR_4, VAR_3->i_ino);
 } else {
  FUNC_11(VAR_3, VAR_0);
 }

out:
 FUNC_7(VAR_4);


 FUNC_10(VAR_3);
}
