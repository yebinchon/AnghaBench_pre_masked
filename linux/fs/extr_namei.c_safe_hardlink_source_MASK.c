
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*,int) ;

__attribute__((used)) static bool FUNC_2(struct inode *VAR_5)
{
 umode_t VAR_6 = VAR_5->i_mode;


 if (!FUNC_0(VAR_6))
  return 0;


 if (VAR_6 & VAR_3)
  return 0;


 if ((VAR_6 & (VAR_2 | VAR_4)) == (VAR_2 | VAR_4))
  return 0;


 if (FUNC_1(VAR_5, VAR_0 | VAR_1))
  return 0;

 return 1;
}
