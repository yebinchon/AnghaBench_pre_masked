
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int,int) ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_4, loff_t VAR_5, int VAR_6)
{
 if ((VAR_4->f_flags & VAR_1) != VAR_2)
  return -VAR_0;
 if (VAR_5 % VAR_3)
  return -VAR_0;
 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
