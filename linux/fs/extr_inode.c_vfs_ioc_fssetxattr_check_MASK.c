
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct fsxattr {int fsx_xflags; scalar_t__ fsx_projid; scalar_t__ fsx_extsize; scalar_t__ fsx_cowextsize; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int VAR_10 ;

int FUNC_4(struct inode *VAR_11, const struct fsxattr *VAR_12,
        struct fsxattr *VAR_13)
{




 if ((VAR_12->fsx_xflags ^ VAR_13->fsx_xflags) &
   (VAR_8 | VAR_3) &&
     !FUNC_2(VAR_0))
  return -VAR_2;






 if (FUNC_3() != &VAR_10) {
  if (VAR_12->fsx_projid != VAR_13->fsx_projid)
   return -VAR_1;
  if ((VAR_12->fsx_xflags ^ VAR_13->fsx_xflags) &
    VAR_9)
   return -VAR_1;
 }


 if ((VAR_13->fsx_xflags & VAR_6) && !FUNC_1(VAR_11->i_mode))
  return -VAR_1;

 if ((VAR_13->fsx_xflags & VAR_7) &&
   !FUNC_0(VAR_11->i_mode))
  return -VAR_1;

 if ((VAR_13->fsx_xflags & VAR_4) &&
     !FUNC_1(VAR_11->i_mode) && !FUNC_0(VAR_11->i_mode))
  return -VAR_1;





 if ((VAR_13->fsx_xflags & VAR_5) &&
     !(FUNC_1(VAR_11->i_mode) || FUNC_0(VAR_11->i_mode)))
  return -VAR_1;


 if (VAR_13->fsx_extsize == 0)
  VAR_13->fsx_xflags &= ~(VAR_6 | VAR_7);
 if (VAR_13->fsx_cowextsize == 0)
  VAR_13->fsx_xflags &= ~VAR_4;

 return 0;
}
