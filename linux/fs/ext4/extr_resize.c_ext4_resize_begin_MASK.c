
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {int s_mount_state; int s_ext4_flags; TYPE_1__* s_sbh; TYPE_2__* s_es; } ;
struct TYPE_4__ {int s_first_data_block; } ;
struct TYPE_3__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct super_block *VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0;

 if (!FUNC_2(VAR_0))
  return -VAR_2;






 if (FUNC_0(VAR_6, VAR_6->s_sbh->b_blocknr) !=
     FUNC_4(FUNC_1(VAR_5)->s_es->s_first_data_block)) {
  FUNC_3(VAR_5, "won't resize using backup superblock at %llu",
   (unsigned long long)FUNC_1(VAR_5)->s_sbh->b_blocknr);
  return -VAR_2;
 }





 if (FUNC_1(VAR_5)->s_mount_state & VAR_3) {
  FUNC_3(VAR_5, "There are errors in the filesystem, "
        "so online resizing is not allowed");
  return -VAR_2;
 }

 if (FUNC_5(VAR_4,
      &FUNC_1(VAR_5)->s_ext4_flags))
  VAR_7 = -VAR_1;

 return VAR_7;
}
