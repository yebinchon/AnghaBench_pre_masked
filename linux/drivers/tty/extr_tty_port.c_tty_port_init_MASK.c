
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int close_delay; int closing_wait; int kref; int * client_ops; int lock; int buf_mutex; int mutex; int delta_msr_wait; int open_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_port*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_port*) ;

void FUNC_6(struct tty_port *VAR_2)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_5(VAR_2);
 FUNC_0(&VAR_2->open_wait);
 FUNC_0(&VAR_2->delta_msr_wait);
 FUNC_3(&VAR_2->mutex);
 FUNC_3(&VAR_2->buf_mutex);
 FUNC_4(&VAR_2->lock);
 VAR_2->close_delay = (50 * VAR_0) / 100;
 VAR_2->closing_wait = (3000 * VAR_0) / 100;
 VAR_2->client_ops = &VAR_1;
 FUNC_1(&VAR_2->kref);
}
