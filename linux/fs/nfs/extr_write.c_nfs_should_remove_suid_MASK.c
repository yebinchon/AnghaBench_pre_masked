
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct inode *VAR_5)
{
 umode_t VAR_6 = VAR_5->i_mode;
 int VAR_7 = 0;


 if (FUNC_1(VAR_6 & VAR_3))
  VAR_7 = VAR_1;





 if (FUNC_1((VAR_6 & VAR_2) && (VAR_6 & VAR_4)))
  VAR_7 |= VAR_0;

 if (FUNC_1(VAR_7 && FUNC_0(VAR_6)))
  return VAR_7;

 return 0;
}
