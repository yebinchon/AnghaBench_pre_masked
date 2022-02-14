
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;


 scalar_t__ FUNC_0 (struct file_lock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct file_lock*,struct file_lock*) ;
 struct file_lock* FUNC_3 (struct file_lock*) ;

__attribute__((used)) static int FUNC_4(struct file_lock *VAR_2,
    struct file_lock *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_1);





 if (FUNC_0(VAR_2))
  return 0;

 while ((VAR_3 = FUNC_3(VAR_3))) {
  if (VAR_4++ > VAR_0)
   return 0;
  if (FUNC_2(VAR_2, VAR_3))
   return 1;
 }
 return 0;
}
