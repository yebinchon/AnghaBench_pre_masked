
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ echo_mark; scalar_t__ echo_tail; scalar_t__ echo_commit; int output_lock; } ;
struct TYPE_2__ {int (* flush_chars ) (struct tty_struct*) ;} ;


 size_t FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct n_tty_data *VAR_1 = VAR_0->disc_data;
 size_t VAR_2;

 if (VAR_1->echo_mark == VAR_1->echo_tail)
  return;

 FUNC_1(&VAR_1->output_lock);
 VAR_1->echo_commit = VAR_1->echo_mark;
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->output_lock);

 if (VAR_2 && VAR_0->ops->flush_chars)
  VAR_0->ops->flush_chars(VAR_0);
}
