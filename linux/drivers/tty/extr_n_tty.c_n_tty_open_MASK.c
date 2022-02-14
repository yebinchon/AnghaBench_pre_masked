
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; scalar_t__ closing; struct n_tty_data* disc_data; } ;
struct n_tty_data {int output_lock; int atomic_read_lock; int overrun_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*,int *) ;
 int FUNC_3 (struct tty_struct*) ;
 struct n_tty_data* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_3)
{
 struct n_tty_data *VAR_4;


 VAR_4 = FUNC_4(sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;

 VAR_4->overrun_time = VAR_2;
 FUNC_1(&VAR_4->atomic_read_lock);
 FUNC_1(&VAR_4->output_lock);

 VAR_3->disc_data = VAR_4;
 VAR_3->closing = 0;

 FUNC_0(VAR_1, &VAR_3->flags);
 FUNC_2(VAR_3, ((void*)0));
 FUNC_3(VAR_3);
 return 0;
}
