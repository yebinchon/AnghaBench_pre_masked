
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; } ;
struct TYPE_2__ {int tx; } ;
struct kfifo {int dummy; } ;
struct sdio_uart_port {TYPE_1__ icount; int write_lock; int port; scalar_t__ x_char; struct kfifo xmit_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kfifo*) ;
 int FUNC_1 (struct kfifo*,scalar_t__*,int,int *) ;
 int FUNC_2 (struct sdio_uart_port*,int ,scalar_t__) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (struct tty_struct*) ;
 struct tty_struct* FUNC_5 (int *) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct sdio_uart_port *VAR_2)
{
 struct kfifo *VAR_3 = &VAR_2->xmit_fifo;
 int VAR_4;
 struct tty_struct *VAR_5;
 u8 VAR_6[16];
 int VAR_7;

 if (VAR_2->x_char) {
  FUNC_2(VAR_2, VAR_0, VAR_2->x_char);
  VAR_2->icount.tx++;
  VAR_2->x_char = 0;
  return;
 }

 VAR_5 = FUNC_5(&VAR_2->port);

 if (VAR_5 == ((void*)0) || !FUNC_0(VAR_3) ||
    VAR_5->stopped || VAR_5->hw_stopped) {
  FUNC_3(VAR_2);
  FUNC_4(VAR_5);
  return;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_6, 16, &VAR_2->write_lock);
 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  FUNC_2(VAR_2, VAR_0, VAR_6[VAR_4]);
  VAR_2->icount.tx++;
 }

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 < VAR_1) {
  FUNC_6(VAR_5);
  if (VAR_7 == 0)
   FUNC_3(VAR_2);
 }
 FUNC_4(VAR_5);
}
