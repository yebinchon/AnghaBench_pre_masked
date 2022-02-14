
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct inode {scalar_t__ i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct inode*,int) ;
 int FUNC_1 (struct inode*,struct timespec64*,int) ;
 int FUNC_2 (struct inode*,int) ;

int FUNC_3(struct inode *VAR_8, struct timespec64 *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_1;
 bool VAR_12 = 0;

 if (VAR_8->i_ino == VAR_2)
  return 0;

 FUNC_1(VAR_8, VAR_9, VAR_10);
 if (VAR_10 & VAR_7)
  VAR_12 = FUNC_2(VAR_8, 0);
 if ((VAR_10 & (VAR_4 | VAR_5 | VAR_6)) &&
     !(VAR_8->i_sb->s_flags & VAR_3))
  VAR_12 = 1;

 if (VAR_12)
  VAR_11 |= VAR_0;
 FUNC_0(VAR_8, VAR_11);
 return 0;
}
