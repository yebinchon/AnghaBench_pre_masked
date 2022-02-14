
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {int break_ctl; int lock; int flags; int tx_fifo; int wait_tx; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fwtty_port*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fwtty_port*,char*,int) ;
 int FUNC_4 (struct fwtty_port*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 long FUNC_9 (int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_4, int VAR_5)
{
 struct fwtty_port *VAR_6 = VAR_4->driver_data;
 long VAR_7;

 FUNC_3(VAR_6, "%d\n", VAR_5);

 if (VAR_5 == -1) {
  FUNC_5(VAR_3, &VAR_6->flags);
  VAR_7 = FUNC_9(VAR_6->wait_tx,
            !FUNC_8(VAR_2, &VAR_6->flags),
            10);
  if (VAR_7 == 0 || VAR_7 == -VAR_1) {
   FUNC_1(VAR_3, &VAR_6->flags);
   FUNC_4(VAR_6);
   return -VAR_0;
  }
 }

 FUNC_6(&VAR_6->lock);
 VAR_6->break_ctl = (VAR_5 == -1);
 FUNC_0(VAR_6);
 FUNC_7(&VAR_6->lock);

 if (VAR_5 == 0) {
  FUNC_6(&VAR_6->lock);
  FUNC_2(&VAR_6->tx_fifo);
  FUNC_1(VAR_3, &VAR_6->flags);
  FUNC_7(&VAR_6->lock);
 }
 return 0;
}
