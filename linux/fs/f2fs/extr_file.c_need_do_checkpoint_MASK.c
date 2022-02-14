
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_nlink; int i_ino; int i_mode; } ;
struct f2fs_sb_info {int dummy; } ;
typedef enum cp_reason_type { ____Placeholder_cp_reason_type } cp_reason_type ;
struct TYPE_4__ {int i_pino; } ;
struct TYPE_3__ {int active_logs; scalar_t__ fsync_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 TYPE_1__ FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_10 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline enum cp_reason_type FUNC_11(struct inode *VAR_14)
{
 struct f2fs_sb_info *VAR_15 = FUNC_1(VAR_14);
 enum cp_reason_type VAR_16 = VAR_4;

 if (!FUNC_3(VAR_14->i_mode))
  VAR_16 = VAR_3;
 else if (VAR_14->i_nlink != 1)
  VAR_16 = VAR_1;
 else if (FUNC_9(VAR_15, VAR_12))
  VAR_16 = VAR_7;
 else if (FUNC_8(VAR_14))
  VAR_16 = VAR_9;
 else if (!FUNC_7(VAR_15))
  VAR_16 = VAR_5;
 else if (!FUNC_5(VAR_15, FUNC_0(VAR_14)->i_pino))
  VAR_16 = VAR_2;
 else if (FUNC_10(VAR_15, VAR_10))
  VAR_16 = VAR_0;
 else if (FUNC_2(VAR_15).active_logs == 2)
  VAR_16 = VAR_8;
 else if (FUNC_2(VAR_15).fsync_mode == VAR_11 &&
  FUNC_6(VAR_15, VAR_14->i_ino) &&
  FUNC_4(VAR_15, FUNC_0(VAR_14)->i_pino,
       VAR_13))
  VAR_16 = VAR_6;

 return VAR_16;
}
