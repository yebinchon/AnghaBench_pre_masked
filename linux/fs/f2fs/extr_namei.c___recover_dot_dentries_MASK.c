
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct f2fs_sb_info {int sb; } ;
struct f2fs_dir_entry {int dummy; } ;
typedef int nid_t ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct qstr FUNC_3 (char*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 int FUNC_7 (struct inode*,struct qstr*,int *,int ,int ) ;
 struct f2fs_dir_entry* FUNC_8 (struct inode*,struct qstr*,struct page**) ;
 int FUNC_9 (struct f2fs_sb_info*,char*,int ,int ) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct page*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct f2fs_sb_info*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_2, nid_t VAR_3)
{
 struct f2fs_sb_info *VAR_4 = FUNC_0(VAR_2);
 struct qstr VAR_5 = FUNC_3(".", 1);
 struct qstr VAR_6 = FUNC_3("..", 2);
 struct f2fs_dir_entry *VAR_7;
 struct page *VAR_8;
 int VAR_9 = 0;

 if (FUNC_12(VAR_4->sb)) {
  FUNC_9(VAR_4, "skip recovering inline_dots inode (ino:%lu, pino:%u) in readonly mountpoint",
     VAR_2->i_ino, VAR_3);
  return 0;
 }

 VAR_9 = FUNC_5(VAR_2);
 if (VAR_9)
  return VAR_9;

 FUNC_6(VAR_4, 1);

 FUNC_10(VAR_4);

 VAR_7 = FUNC_8(VAR_2, &VAR_5, &VAR_8);
 if (VAR_7) {
  FUNC_11(VAR_8, 0);
 } else if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  goto out;
 } else {
  VAR_9 = FUNC_7(VAR_2, &VAR_5, ((void*)0), VAR_2->i_ino, VAR_1);
  if (VAR_9)
   goto out;
 }

 VAR_7 = FUNC_8(VAR_2, &VAR_6, &VAR_8);
 if (VAR_7)
  FUNC_11(VAR_8, 0);
 else if (FUNC_1(VAR_8))
  VAR_9 = FUNC_2(VAR_8);
 else
  VAR_9 = FUNC_7(VAR_2, &VAR_6, ((void*)0), VAR_3, VAR_1);
out:
 if (!VAR_9)
  FUNC_4(VAR_2, VAR_0);

 FUNC_13(VAR_4);
 return VAR_9;
}
