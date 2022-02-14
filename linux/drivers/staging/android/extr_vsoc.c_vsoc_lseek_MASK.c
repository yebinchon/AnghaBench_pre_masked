
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_pos; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 ssize_t VAR_5 = 0;
 int VAR_6 = FUNC_1(VAR_2);

 if (VAR_6)
  return VAR_6;
 VAR_5 = FUNC_0(VAR_2, ((void*)0));
 switch (VAR_4) {
 case 128:
  break;

 case 132:
  if (VAR_3 > 0 && VAR_3 + VAR_2->f_pos < 0)
   return -VAR_1;
  VAR_3 += VAR_2->f_pos;
  break;

 case 130:
  if (VAR_3 > 0 && VAR_3 + VAR_5 < 0)
   return -VAR_1;
  VAR_3 += VAR_5;
  break;

 case 131:
  if (VAR_3 >= VAR_5)
   return -VAR_0;
  if (VAR_3 < 0)
   VAR_3 = 0;
  break;

 case 129:



  if (VAR_3 < VAR_5)
   VAR_3 = VAR_5;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_3 < 0 || VAR_3 > VAR_5)
  return -VAR_0;
 VAR_2->f_pos = VAR_3;

 return VAR_3;
}
