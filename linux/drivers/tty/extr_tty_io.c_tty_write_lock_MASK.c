
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int atomic_write_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2, int VAR_3)
{
 if (!FUNC_1(&VAR_2->atomic_write_lock)) {
  if (VAR_3)
   return -VAR_0;
  if (FUNC_0(&VAR_2->atomic_write_lock))
   return -VAR_1;
 }
 return 0;
}
