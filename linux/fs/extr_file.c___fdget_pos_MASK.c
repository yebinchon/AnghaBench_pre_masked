
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; int f_pos_lock; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;

unsigned long FUNC_3(unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2);
 struct file *VAR_4 = (struct file *)(VAR_3 & ~3);

 if (VAR_4 && (VAR_4->f_mode & VAR_1)) {
  if (FUNC_1(VAR_4) > 1) {
   VAR_3 |= VAR_0;
   FUNC_2(&VAR_4->f_pos_lock);
  }
 }
 return VAR_3;
}
