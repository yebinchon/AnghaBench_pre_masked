
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sixpack {int slottime; int status1; unsigned char persistence; int led_state; int tx_enable; int* xbuff; int status2; int xleft; int xhead; int tx_t; TYPE_2__* tty; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* write ) (TYPE_2__*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sixpack* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct sixpack* VAR_3 ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 struct sixpack *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 int VAR_7, VAR_8 = VAR_6->slottime;
 static unsigned char VAR_9;

 VAR_9 = VAR_9 * 17 + 41;

 if (((VAR_6->status1 & VAR_1) == 0) && (VAR_9 < VAR_6->persistence)) {
  VAR_6->led_state = 0x70;
  VAR_6->tty->ops->write(VAR_6->tty, &VAR_6->led_state, 1);
  VAR_6->tx_enable = 1;
  VAR_7 = VAR_6->tty->ops->write(VAR_6->tty, VAR_6->xbuff, VAR_6->status2);
  VAR_6->xleft -= VAR_7;
  VAR_6->xhead += VAR_7;
  VAR_6->led_state = 0x60;
  VAR_6->tty->ops->write(VAR_6->tty, &VAR_6->led_state, 1);
  VAR_6->status2 = 0;
 } else
  FUNC_1(&VAR_6->tx_t, VAR_2 + ((VAR_8 + 1) * VAR_0) / 100);
}
