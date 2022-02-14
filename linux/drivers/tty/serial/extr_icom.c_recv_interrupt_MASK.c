
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct uart_icount {short rx; int overrun; int frame; int parity; int brk; } ;
struct tty_port {int dummy; } ;
struct TYPE_8__ {int lock; struct uart_icount icount; TYPE_1__* state; } ;
struct icom_port {short next_rcv; unsigned long recv_buf_pci; int* recv_buf; unsigned short ignore_status_mask; unsigned short read_status_mask; TYPE_4__ uart_port; TYPE_3__* statStg; } ;
struct TYPE_7__ {TYPE_2__* rcv; } ;
struct TYPE_6__ {unsigned short WorkingLength; scalar_t__ flags; scalar_t__ leLength; int leBuffer; } ;
struct TYPE_5__ {struct tty_port port; } ;


 short VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 void* FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct icom_port*,char*,short) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,int,unsigned char) ;
 int FUNC_7 (struct tty_port*,int*,short) ;

__attribute__((used)) static void FUNC_8(u16 VAR_12, struct icom_port *VAR_13)
{
 short int VAR_14, VAR_15;
 struct tty_port *VAR_16 = &VAR_13->uart_port.state->port;
 unsigned short int VAR_17;
 struct uart_icount *VAR_18;
 unsigned long VAR_19;
 unsigned char VAR_20;

 FUNC_4(VAR_13, "RCV_COMPLETE", 0);
 VAR_15 = VAR_13->next_rcv;

 VAR_17 = FUNC_0(VAR_13->statStg->rcv[VAR_15].flags);
 while (VAR_17 & VAR_6) {
  int VAR_21 = -1;

  FUNC_4(VAR_13, "FID_STATUS", VAR_17);
  VAR_14 = FUNC_0(VAR_13->statStg->rcv[VAR_15].leLength);

  FUNC_4(VAR_13, "RCV_COUNT", VAR_14);

  FUNC_4(VAR_13, "REAL_COUNT", VAR_14);

  VAR_19 =
   FUNC_1(VAR_13->statStg->rcv[VAR_15].leBuffer) -
   VAR_13->recv_buf_pci;


  if (VAR_14 > 0) {
   VAR_21 = VAR_13->recv_buf[VAR_19];
   FUNC_7(VAR_16, VAR_13->recv_buf + VAR_19, VAR_14 - 1);
  }

  VAR_18 = &VAR_13->uart_port.icount;
  VAR_18->rx += VAR_14;


  if ((VAR_17 & VAR_3)
      && VAR_21 == 0) {
   VAR_17 &= ~VAR_3;
   VAR_17 |= VAR_2;
   FUNC_4(VAR_13, "BREAK_DET", 0);
  }

  VAR_20 = VAR_9;

  if (VAR_17 &
      (VAR_2 | VAR_5 |
       VAR_3 | VAR_4)) {

   if (VAR_17 & VAR_2)
    VAR_18->brk++;
   if (VAR_17 & VAR_5)
    VAR_18->parity++;
   if (VAR_17 & VAR_3)
    VAR_18->frame++;
   if (VAR_17 & VAR_4)
    VAR_18->overrun++;






   if (VAR_17 & VAR_13->ignore_status_mask) {
    FUNC_4(VAR_13, "IGNORE_CHAR", 0);
    goto ignore_char;
   }

   VAR_17 &= VAR_13->read_status_mask;

   if (VAR_17 & VAR_2) {
    VAR_20 = VAR_7;
   } else if (VAR_17 & VAR_5) {
    FUNC_4(VAR_13, "PARITY_ERROR", 0);
    VAR_20 = VAR_11;
   } else if (VAR_17 & VAR_3)
    VAR_20 = VAR_8;

  }

  FUNC_6(VAR_16, *(VAR_13->recv_buf + VAR_19 + VAR_14 - 1), VAR_20);

  if (VAR_17 & VAR_4)





   FUNC_6(VAR_16, 0, VAR_10);
ignore_char:
  VAR_13->statStg->rcv[VAR_15].flags = 0;
  VAR_13->statStg->rcv[VAR_15].leLength = 0;
  VAR_13->statStg->rcv[VAR_15].WorkingLength =
   (unsigned short int) FUNC_0(VAR_1);

  VAR_15++;
  if (VAR_15 == VAR_0)
   VAR_15 = 0;

  VAR_17 = FUNC_0(VAR_13->statStg->rcv[VAR_15].flags);
 }
 VAR_13->next_rcv = VAR_15;

 FUNC_3(&VAR_13->uart_port.lock);
 FUNC_5(VAR_16);
 FUNC_2(&VAR_13->uart_port.lock);
}
