
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; scalar_t__ f_version; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*) ;

loff_t FUNC_1(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3)
{
 if (VAR_2 < 0 && !FUNC_0(VAR_1))
  return -VAR_0;
 if (VAR_2 > VAR_3)
  return -VAR_0;

 if (VAR_2 != VAR_1->f_pos) {
  VAR_1->f_pos = VAR_2;
  VAR_1->f_version = 0;
 }
 return VAR_2;
}
