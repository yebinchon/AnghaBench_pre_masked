
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int s_resgid; int s_resuid; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_8(struct f2fs_sb_info *VAR_3,
     struct inode *VAR_4, bool VAR_5)
{
 if (!VAR_4)
  return 1;
 if (!FUNC_6(VAR_3, VAR_2))
  return 0;
 if (FUNC_1(VAR_4))
  return 1;
 if (FUNC_7(FUNC_0(VAR_3).s_resuid, FUNC_3()))
  return 1;
 if (!FUNC_4(FUNC_0(VAR_3).s_resgid, VAR_1) &&
     FUNC_5(FUNC_0(VAR_3).s_resgid))
  return 1;
 if (VAR_5 && FUNC_2(VAR_0))
  return 1;
 return 0;
}
