
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int write_wait; int atomic_write_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 FUNC_0(&VAR_1->atomic_write_lock);
 FUNC_1(&VAR_1->write_wait, VAR_0);
}
