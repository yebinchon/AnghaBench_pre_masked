
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hvcs_struct* driver_data; } ;
struct hvcs_struct {int lock; int todo_mask; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_1)
{
 struct hvcs_struct *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_2->todo_mask |= VAR_0;
 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0();
}
