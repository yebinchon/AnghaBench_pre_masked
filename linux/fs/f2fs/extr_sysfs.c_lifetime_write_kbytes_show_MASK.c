
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; } ;
struct f2fs_sb_info {scalar_t__ kbytes_written; struct super_block* sb; } ;
struct f2fs_attr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bd_part; } ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct f2fs_attr *VAR_1,
  struct f2fs_sb_info *VAR_2, char *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->sb;

 if (!VAR_4->s_bdev->bd_part)
  return FUNC_1(VAR_3, VAR_0, "0\n");

 return FUNC_1(VAR_3, VAR_0, "%llu\n",
  (unsigned long long)(VAR_2->kbytes_written +
   FUNC_0(VAR_2)));
}
