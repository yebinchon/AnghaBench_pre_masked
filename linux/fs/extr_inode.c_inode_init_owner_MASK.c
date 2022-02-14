
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; int i_gid; int i_uid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(struct inode *VAR_3, const struct inode *VAR_4,
   umode_t VAR_5)
{
 VAR_3->i_uid = FUNC_3();
 if (VAR_4 && VAR_4->i_mode & VAR_1) {
  VAR_3->i_gid = VAR_4->i_gid;


  if (FUNC_0(VAR_5))
   VAR_5 |= VAR_1;
  else if ((VAR_5 & (VAR_1 | VAR_2)) == (VAR_1 | VAR_2) &&
    !FUNC_4(VAR_3->i_gid) &&
    !FUNC_1(VAR_4, VAR_0))
   VAR_5 &= ~VAR_1;
 } else
  VAR_3->i_gid = FUNC_2();
 VAR_3->i_mode = VAR_5;
}
