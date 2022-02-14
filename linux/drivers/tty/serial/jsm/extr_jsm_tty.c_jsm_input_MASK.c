
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tty_struct {int dummy; } ;
struct tty_port {struct tty_struct* tty; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct jsm_channel {int ch_r_head; int ch_r_tail; int ch_flags; int* ch_equeue; int ch_e_tail; struct jsm_board* ch_bd; int ch_lock; int * ch_rqueue; int ch_portnum; TYPE_2__ uart_port; } ;
struct jsm_board {int pci_dev; } ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct jsm_channel*) ;
 int FUNC_5 (int ,int *,char*,...) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct tty_port*,int) ;
 int FUNC_10 (struct tty_port*) ;
 int FUNC_11 (struct tty_port*,int ,int ) ;
 int FUNC_12 (struct tty_port*,int *,int) ;

void FUNC_13(struct jsm_channel *VAR_12)
{
 struct jsm_board *VAR_13;
 struct tty_struct *VAR_14;
 struct tty_port *VAR_15;
 u32 VAR_16;
 u16 VAR_17;
 u16 VAR_18;
 int VAR_19;
 unsigned long VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;

 FUNC_5(VAR_2, &VAR_12->ch_bd->pci_dev, "start\n");

 VAR_15 = &VAR_12->uart_port.state->port;
 VAR_14 = VAR_15->tty;

 VAR_13 = VAR_12->ch_bd;
 if (!VAR_13)
  return;

 FUNC_7(&VAR_12->ch_lock, VAR_20);






 VAR_16 = VAR_3;

 VAR_17 = VAR_12->ch_r_head & VAR_16;
 VAR_18 = VAR_12->ch_r_tail & VAR_16;

 VAR_19 = (VAR_17 - VAR_18) & VAR_16;
 if (VAR_19 == 0) {
  FUNC_8(&VAR_12->ch_lock, VAR_20);
  return;
 }

 FUNC_5(VAR_2, &VAR_12->ch_bd->pci_dev, "start\n");





 if (!VAR_14 || !FUNC_0(VAR_14)) {

  FUNC_5(VAR_2, &VAR_12->ch_bd->pci_dev,
   "input. dropping %d bytes on port %d...\n",
   VAR_19, VAR_12->ch_portnum);
  VAR_12->ch_r_head = VAR_18;


  FUNC_4(VAR_12);

  FUNC_8(&VAR_12->ch_lock, VAR_20);
  return;
 }




 if (VAR_12->ch_flags & VAR_0) {
  FUNC_8(&VAR_12->ch_lock, VAR_20);
  FUNC_5(VAR_2, &VAR_12->ch_bd->pci_dev,
   "Port %d throttled, not reading any data. head: %x tail: %x\n",
   VAR_12->ch_portnum, VAR_17, VAR_18);
  return;
 }

 FUNC_5(VAR_2, &VAR_12->ch_bd->pci_dev, "start 2\n");

 VAR_21 = FUNC_9(VAR_15, VAR_19);






 while (VAR_21) {
  VAR_22 = ((VAR_17 >= VAR_18) ? VAR_17 : VAR_4) - VAR_18;
  VAR_22 = FUNC_6(VAR_22, VAR_21);

  if (VAR_22 <= 0)
   break;
  if (FUNC_3(VAR_14) || FUNC_1(VAR_14) || FUNC_2(VAR_14)) {
   for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++) {




    if (*(VAR_12->ch_equeue +VAR_18 +VAR_23) & VAR_9)
     FUNC_11(VAR_15, *(VAR_12->ch_rqueue +VAR_18 +VAR_23), VAR_5);
    else if (*(VAR_12->ch_equeue +VAR_18 +VAR_23) & VAR_11)
     FUNC_11(VAR_15, *(VAR_12->ch_rqueue +VAR_18 +VAR_23), VAR_8);
    else if (*(VAR_12->ch_equeue +VAR_18 +VAR_23) & VAR_10)
     FUNC_11(VAR_15, *(VAR_12->ch_rqueue +VAR_18 +VAR_23), VAR_6);
    else
     FUNC_11(VAR_15, *(VAR_12->ch_rqueue +VAR_18 +VAR_23), VAR_7);
   }
  } else {
   FUNC_12(VAR_15, VAR_12->ch_rqueue + VAR_18, VAR_22);
  }
  VAR_18 += VAR_22;
  VAR_21 -= VAR_22;

  VAR_18 &= VAR_16;
 }

 VAR_12->ch_r_tail = VAR_18 & VAR_16;
 VAR_12->ch_e_tail = VAR_18 & VAR_16;
 FUNC_4(VAR_12);
 FUNC_8(&VAR_12->ch_lock, VAR_20);


 FUNC_10(VAR_15);

 FUNC_5(VAR_1, &VAR_12->ch_bd->pci_dev, "finish\n");
}
