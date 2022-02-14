
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 () ;

loff_t FUNC_1(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 0:
  VAR_1->f_pos = VAR_2;
  break;
 case 1:
  VAR_1->f_pos += VAR_2;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0();
 return VAR_1->f_pos;
}
