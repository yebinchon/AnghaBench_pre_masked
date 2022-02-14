
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int fs_dmask; int fs_fmask; } ;
struct exfat_sb_info {TYPE_1__ options; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline mode_t FUNC_0(struct exfat_sb_info *VAR_6, u32 VAR_7,
         mode_t VAR_8)
{
 if ((VAR_7 & VAR_0) && !(VAR_7 & VAR_1))
  VAR_8 &= ~0222;

 if (VAR_7 & VAR_1)
  return (VAR_8 & ~VAR_6->options.fs_dmask) | VAR_3;
 else if (VAR_7 & VAR_2)
  return (VAR_8 & ~VAR_6->options.fs_dmask) | VAR_4;
 else
  return (VAR_8 & ~VAR_6->options.fs_fmask) | VAR_5;
}
