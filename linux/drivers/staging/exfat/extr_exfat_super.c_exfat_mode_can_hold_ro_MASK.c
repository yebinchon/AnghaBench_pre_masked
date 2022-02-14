
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_sb; } ;
struct TYPE_2__ {int fs_fmask; } ;
struct exfat_sb_info {TYPE_1__ options; } ;


 struct exfat_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0)
{
 struct exfat_sb_info *VAR_1 = FUNC_0(VAR_0->i_sb);

 if (FUNC_1(VAR_0->i_mode))
  return 0;

 if ((~VAR_1->options.fs_fmask) & 0222)
  return 1;
 return 0;
}
