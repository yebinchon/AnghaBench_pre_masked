
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; } ;
struct f2fs_sb_info {struct super_block* sb; } ;
struct f2fs_attr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bd_part; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_7 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_13(struct f2fs_attr *VAR_1,
  struct f2fs_sb_info *VAR_2, char *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->sb;
 int VAR_5 = 0;

 if (!VAR_4->s_bdev->bd_part)
  return FUNC_12(VAR_3, VAR_0, "0\n");

 if (FUNC_2(VAR_2))
  VAR_5 += FUNC_12(VAR_3, VAR_0 - VAR_5, "%s",
      "encryption");
 if (FUNC_0(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "blkzoned");
 if (FUNC_3(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "extra_attr");
 if (FUNC_8(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "projquota");
 if (FUNC_5(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "inode_checksum");
 if (FUNC_4(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "flexible_inline_xattr");
 if (FUNC_9(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "quota_ino");
 if (FUNC_6(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "inode_crtime");
 if (FUNC_7(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "lost_found");
 if (FUNC_11(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "verity");
 if (FUNC_10(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "sb_checksum");
 if (FUNC_1(VAR_2))
  VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "%s%s",
    VAR_5 ? ", " : "", "casefold");
 VAR_5 += FUNC_12(VAR_3 + VAR_5, VAR_0 - VAR_5, "\n");
 return VAR_5;
}
