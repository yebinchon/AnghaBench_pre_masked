
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int read_status_mask; scalar_t__ sysrq; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct uart_qe_port {struct qe_bd* rx_cur; struct qe_bd* rx_bd_base; struct uart_port port; } ;
struct tty_port {int dummy; } ;
struct qe_bd {int status; int buf; int length; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 unsigned char* FUNC_3 (int ,struct uart_qe_port*) ;
 int FUNC_4 (struct tty_port*,int) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,unsigned char,unsigned int) ;
 scalar_t__ FUNC_7 (struct uart_port*,unsigned char) ;

__attribute__((used)) static void FUNC_8(struct uart_qe_port *VAR_12)
{
 int VAR_13;
 unsigned char VAR_14, *VAR_15;
 struct uart_port *VAR_16 = &VAR_12->port;
 struct tty_port *VAR_17 = &VAR_16->state->port;
 struct qe_bd *VAR_18;
 u16 VAR_19;
 unsigned int VAR_20;




 VAR_18 = VAR_12->rx_cur;
 while (1) {
  VAR_19 = FUNC_2(&VAR_18->status);


  if (VAR_19 & VAR_1)
   break;


  VAR_13 = FUNC_2(&VAR_18->length);




  if (FUNC_4(VAR_17, VAR_13) < VAR_13) {
   FUNC_1(VAR_16->dev, "ucc-uart: no room in RX buffer\n");
   return;
  }


  VAR_15 = FUNC_3(VAR_18->buf, VAR_12);


  while (VAR_13-- > 0) {
   VAR_14 = *VAR_15++;
   VAR_16->icount.rx++;
   VAR_20 = VAR_9;

   if (!VAR_13 && VAR_19 &
       (VAR_0 | VAR_2 | VAR_5 | VAR_4))
    goto handle_error;
   if (FUNC_7(VAR_16, VAR_14))
    continue;

error_return:
   FUNC_6(VAR_17, VAR_14, VAR_20);

  }


  FUNC_0(&VAR_18->status, VAR_0 | VAR_2 | VAR_5 |
   VAR_4 | VAR_3, VAR_1);
  if (FUNC_2(&VAR_18->status) & VAR_6)
   VAR_18 = VAR_12->rx_bd_base;
  else
   VAR_18++;

 }


 VAR_12->rx_cur = VAR_18;


 FUNC_5(VAR_17);

 return;



handle_error:

 if (VAR_19 & VAR_0)
  VAR_16->icount.brk++;
 if (VAR_19 & VAR_5)
  VAR_16->icount.parity++;
 if (VAR_19 & VAR_2)
  VAR_16->icount.frame++;
 if (VAR_19 & VAR_4)
  VAR_16->icount.overrun++;


 VAR_19 &= VAR_16->read_status_mask;


 if (VAR_19 & VAR_0)
  VAR_20 = VAR_7;
 else if (VAR_19 & VAR_5)
  VAR_20 = VAR_11;
 else if (VAR_19 & VAR_2)
  VAR_20 = VAR_8;


 if (VAR_19 & VAR_4)
  FUNC_6(VAR_17, 0, VAR_10);



 goto error_return;
}
