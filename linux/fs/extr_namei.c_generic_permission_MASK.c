
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct inode*,int) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;

int FUNC_3(struct inode *VAR_7, int VAR_8)
{
 int VAR_9;




 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9 != -VAR_2)
  return VAR_9;

 if (FUNC_0(VAR_7->i_mode)) {

  if (!(VAR_8 & VAR_5))
   if (FUNC_2(VAR_7,
           VAR_1))
    return 0;
  if (FUNC_2(VAR_7, VAR_0))
   return 0;
  return -VAR_2;
 }




 VAR_8 &= VAR_4 | VAR_5 | VAR_3;
 if (VAR_8 == VAR_4)
  if (FUNC_2(VAR_7, VAR_1))
   return 0;





 if (!(VAR_8 & VAR_3) || (VAR_7->i_mode & VAR_6))
  if (FUNC_2(VAR_7, VAR_0))
   return 0;

 return -VAR_2;
}
