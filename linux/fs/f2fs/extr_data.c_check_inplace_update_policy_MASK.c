
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {scalar_t__ op; int op_flags; int old_blkaddr; } ;
struct TYPE_2__ {unsigned int ipu_policy; scalar_t__ min_ipu_util; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_5 (struct inode*,int ) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline bool FUNC_9(struct inode *VAR_10,
    struct f2fs_io_info *VAR_11)
{
 struct f2fs_sb_info *VAR_12 = FUNC_0(VAR_10);
 unsigned int VAR_13 = FUNC_2(VAR_12)->ipu_policy;

 if (VAR_13 & (0x1 << VAR_1))
  return 1;
 if (VAR_13 & (0x1 << VAR_3) && FUNC_4(VAR_12))
  return 1;
 if (VAR_13 & (0x1 << VAR_5) &&
   FUNC_8(VAR_12) > FUNC_2(VAR_12)->min_ipu_util)
  return 1;
 if (VAR_13 & (0x1 << VAR_4) && FUNC_4(VAR_12) &&
   FUNC_8(VAR_12) > FUNC_2(VAR_12)->min_ipu_util)
  return 1;




 if (VAR_13 & (0x1 << VAR_0) &&
   VAR_11 && VAR_11->op == VAR_7 &&
   !(VAR_11->op_flags & VAR_8) &&
   !FUNC_1(VAR_10))
  return 1;


 if (VAR_13 & (0x1 << VAR_2) &&
   FUNC_5(VAR_10, VAR_6))
  return 1;

 if (FUNC_7(VAR_11 && FUNC_6(VAR_12, VAR_9) &&
   !FUNC_3(VAR_12, VAR_11->old_blkaddr)))
  return 1;

 return 0;
}
