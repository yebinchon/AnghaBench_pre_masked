
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int termios_rwsem; scalar_t__ link; struct n_tty_data* disc_data; } ;
struct n_tty_data {int output_lock; scalar_t__ echo_commit; scalar_t__ echo_mark; scalar_t__ echo_tail; scalar_t__ echo_head; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int,struct tty_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (struct n_tty_data*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(int VAR_0, struct tty_struct *VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_1->disc_data;

 if (FUNC_0(VAR_1)) {

  FUNC_1(VAR_0, VAR_1);

 } else {
  FUNC_9(&VAR_1->termios_rwsem);
  FUNC_3(&VAR_1->termios_rwsem);

  FUNC_1(VAR_0, VAR_1);


  FUNC_4(&VAR_2->output_lock);
  VAR_2->echo_head = VAR_2->echo_tail = 0;
  VAR_2->echo_mark = VAR_2->echo_commit = 0;
  FUNC_5(&VAR_2->output_lock);


  FUNC_8(VAR_1);


  FUNC_7(VAR_1->disc_data);


  if (VAR_1->link)
   FUNC_6(VAR_1);

  FUNC_10(&VAR_1->termios_rwsem);
  FUNC_2(&VAR_1->termios_rwsem);
 }
}
