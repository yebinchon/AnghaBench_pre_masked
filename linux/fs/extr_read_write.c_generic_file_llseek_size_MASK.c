
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {unsigned long long f_pos; int f_lock; } ;
typedef unsigned long long loff_t ;


 unsigned long long VAR_0 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long long FUNC_2 (struct file*,unsigned long long,unsigned long long) ;

loff_t
FUNC_3(struct file *VAR_1, loff_t VAR_2, int VAR_3,
  loff_t VAR_4, loff_t VAR_5)
{
 switch (VAR_3) {
 case 129:
  VAR_2 += VAR_5;
  break;
 case 131:






  if (VAR_2 == 0)
   return VAR_1->f_pos;





  FUNC_0(&VAR_1->f_lock);
  VAR_2 = FUNC_2(VAR_1, VAR_1->f_pos + VAR_2, VAR_4);
  FUNC_1(&VAR_1->f_lock);
  return VAR_2;
 case 130:




  if ((unsigned long long)VAR_2 >= VAR_5)
   return -VAR_0;
  break;
 case 128:




  if ((unsigned long long)VAR_2 >= VAR_5)
   return -VAR_0;
  VAR_2 = VAR_5;
  break;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_4);
}
