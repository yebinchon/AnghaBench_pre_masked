
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ echo_commit; scalar_t__ echo_head; int output_lock; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct n_tty_data *VAR_1 = VAR_0->disc_data;

 if ((!FUNC_0(VAR_0) && !FUNC_1(VAR_0)) ||
     VAR_1->echo_commit == VAR_1->echo_head)
  return;

 FUNC_3(&VAR_1->output_lock);
 VAR_1->echo_commit = VAR_1->echo_head;
 FUNC_2(VAR_0);
 FUNC_4(&VAR_1->output_lock);
}
