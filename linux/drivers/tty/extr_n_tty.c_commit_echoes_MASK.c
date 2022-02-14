
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; struct n_tty_data* disc_data; } ;
struct n_tty_data {size_t echo_head; size_t echo_mark; size_t echo_commit; size_t echo_tail; int output_lock; } ;
struct TYPE_2__ {int (* flush_chars ) (struct tty_struct*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 struct n_tty_data *VAR_3 = VAR_2->disc_data;
 size_t VAR_4, VAR_5, VAR_6;
 size_t VAR_7;

 FUNC_1(&VAR_3->output_lock);
 VAR_7 = VAR_3->echo_head;
 VAR_3->echo_mark = VAR_7;
 VAR_5 = VAR_3->echo_commit - VAR_3->echo_tail;




 VAR_4 = VAR_7 - VAR_3->echo_tail;
 if (VAR_4 < VAR_1 ||
     (VAR_4 % VAR_0 > VAR_5 % VAR_0)) {
  FUNC_2(&VAR_3->output_lock);
  return;
 }

 VAR_3->echo_commit = VAR_7;
 VAR_6 = FUNC_0(VAR_2);
 FUNC_2(&VAR_3->output_lock);

 if (VAR_6 && VAR_2->ops->flush_chars)
  VAR_2->ops->flush_chars(VAR_2);
}
