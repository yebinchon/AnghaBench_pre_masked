
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {int fs_dmask; int fs_fmask; int rodir; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct inode {int i_mode; int i_sb; } ;


 struct msdos_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_0(VAR_1->i_sb);
 umode_t VAR_3;

 if (FUNC_1(VAR_1->i_mode)) {
  if (!VAR_2->options.rodir)
   return 0;
  VAR_3 = ~VAR_2->options.fs_dmask;
 } else
  VAR_3 = ~VAR_2->options.fs_fmask;

 if (!(VAR_3 & VAR_0))
  return 0;
 return 1;
}
