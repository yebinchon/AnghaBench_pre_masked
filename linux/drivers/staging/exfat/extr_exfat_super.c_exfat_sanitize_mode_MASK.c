
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_mode; } ;
struct TYPE_2__ {int fs_fmask; int fs_dmask; } ;
struct exfat_sb_info {TYPE_1__ options; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(const struct exfat_sb_info *VAR_2,
          struct inode *VAR_3, umode_t *VAR_4)
{
 mode_t VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_3->i_mode;

 if (FUNC_1(VAR_5) || FUNC_0(VAR_5))
  VAR_6 = VAR_2->options.fs_fmask;
 else
  VAR_6 = VAR_2->options.fs_dmask;

 VAR_7 = *VAR_4 & ~(VAR_1 | VAR_6);


 if ((VAR_7 & 0555) != (VAR_5 & 0555))
  return -VAR_0;

 if (FUNC_2(VAR_3)) {




  if ((VAR_7 & 0222) && ((VAR_7 & 0222) != (0222 & ~VAR_6)))
   return -VAR_0;
 } else {




  if ((VAR_7 & 0222) != (0222 & ~VAR_6))
   return -VAR_0;
 }

 *VAR_4 &= VAR_1 | VAR_7;

 return 0;
}
