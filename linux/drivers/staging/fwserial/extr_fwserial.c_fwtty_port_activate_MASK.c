
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int hw_stopped; int flags; } ;
struct tty_port {int dummy; } ;
struct TYPE_2__ {int console; } ;
struct fwtty_port {int mctrl; int mstatus; int lock; TYPE_1__ port; int max_payload; int tx_fifo; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct fwtty_port*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 struct fwtty_port* VAR_7 ;
 int FUNC_5 (int ,int *) ;
 unsigned int FUNC_6 (struct fwtty_port*,struct tty_struct*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct fwtty_port* FUNC_9 (struct tty_port*,int ) ;

__attribute__((used)) static int FUNC_10(struct tty_port *VAR_8,
          struct tty_struct *VAR_9)
{
 struct fwtty_port *VAR_10 = FUNC_9(VAR_8, VAR_10);
 unsigned int VAR_11;
 int VAR_12;

 FUNC_5(VAR_6, &VAR_9->flags);

 VAR_12 = FUNC_4(&VAR_10->tx_fifo, VAR_1,
        FUNC_2(),
        VAR_10->max_payload,
        VAR_0,
        VAR_2);
 if (VAR_12)
  return VAR_12;

 FUNC_7(&VAR_10->lock);

 VAR_11 = FUNC_6(VAR_10, VAR_9);


 if (!VAR_10->port.console) {
  VAR_10->mctrl = 0;
  if (VAR_11 != 0)
   VAR_10->mctrl = VAR_4 | VAR_5;
 }

 if (FUNC_0(VAR_9) && ~VAR_10->mstatus & VAR_3)
  VAR_9->hw_stopped = 1;

 FUNC_1(VAR_10);
 FUNC_8(&VAR_10->lock);

 FUNC_3(VAR_6, &VAR_9->flags);

 return 0;
}
