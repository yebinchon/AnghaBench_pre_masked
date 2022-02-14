
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int fifosize; size_t type; scalar_t__ iotype; int flags; int irqflags; int iobase; int name; int lock; int mctrl; scalar_t__ irq; int handle_irq; } ;
struct TYPE_5__ {int flags; int irqflags; int quirks; int mctrl; int irq; } ;
struct uart_8250_port {int tx_loadsz; scalar_t__ cur_iotype; int bugs; int ier; int * dma; scalar_t__ msr_saved_flags; scalar_t__ lsr_saved_flags; TYPE_2__ port; TYPE_1__* ops; scalar_t__ acr; scalar_t__ mcr; scalar_t__ capabilities; } ;
struct TYPE_6__ {int fifo_size; int tx_loadsz; scalar_t__ flags; } ;
struct TYPE_4__ {int (* setup_irq ) (struct uart_8250_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 int VAR_22 ;
 unsigned char VAR_23 ;
 int VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 unsigned char VAR_31 ;
 int VAR_32 ;
 unsigned char VAR_33 ;
 int VAR_34 ;
 unsigned char VAR_35 ;
 unsigned char VAR_36 ;
 int VAR_37 ;
 unsigned char VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 unsigned char VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct uart_8250_port*) ;
 int FUNC_11 (struct uart_8250_port*) ;
 int FUNC_12 (struct uart_8250_port*) ;
 int FUNC_13 (struct uart_8250_port*) ;
 int FUNC_14 (struct uart_port*,int ) ;
 int VAR_52 ;
 int FUNC_15 (struct uart_8250_port*,int ,int ) ;
 unsigned char FUNC_16 (struct uart_8250_port*,int ) ;
 int FUNC_17 (struct uart_8250_port*,int ,unsigned char) ;
 int FUNC_18 (struct uart_port*,int ) ;
 int FUNC_19 (struct uart_port*,int ,unsigned char) ;
 int FUNC_20 (struct uart_port*,int ,unsigned char) ;
 int FUNC_21 (struct uart_port*) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (struct uart_8250_port*) ;
 TYPE_3__* VAR_53 ;
 int FUNC_25 (int) ;
 struct uart_8250_port* FUNC_26 (struct uart_port*) ;
 int FUNC_27 (struct uart_8250_port*,int ) ;

int FUNC_28(struct uart_port *VAR_54)
{
 struct uart_8250_port *VAR_55 = FUNC_26(VAR_54);
 unsigned long VAR_56;
 unsigned char VAR_57, VAR_58;
 int VAR_59;

 if (!VAR_54->fifosize)
  VAR_54->fifosize = VAR_53[VAR_54->type].fifo_size;
 if (!VAR_55->tx_loadsz)
  VAR_55->tx_loadsz = VAR_53[VAR_54->type].tx_loadsz;
 if (!VAR_55->capabilities)
  VAR_55->capabilities = VAR_53[VAR_54->type].flags;
 VAR_55->mcr = 0;

 if (VAR_54->iotype != VAR_55->cur_iotype)
  FUNC_21(VAR_54);

 FUNC_12(VAR_55);
 if (VAR_54->type == VAR_3) {

  VAR_55->acr = 0;
  FUNC_19(VAR_54, VAR_34, VAR_35);
  FUNC_19(VAR_54, VAR_22, VAR_23);
  FUNC_19(VAR_54, VAR_28, 0);
  FUNC_19(VAR_54, VAR_34, 0);
  FUNC_15(VAR_55, VAR_17, 0);
  FUNC_19(VAR_54, VAR_34, VAR_35);
  FUNC_19(VAR_54, VAR_22, VAR_23);
  FUNC_19(VAR_54, VAR_34, 0);
 }

 if (VAR_54->type == VAR_7) {

  FUNC_19(VAR_54, VAR_28, 0);
  FUNC_19(VAR_54, VAR_18, 0);
  FUNC_4(10);


  FUNC_19(VAR_54, VAR_18,
    VAR_21 |
    VAR_20 |
    VAR_19);
 }

 if (VAR_54->type == VAR_8) {





  FUNC_19(VAR_54, VAR_42, VAR_41 | 0x20);
 }
 if (VAR_54->type == VAR_9) {




  FUNC_19(VAR_54, VAR_46, VAR_23);





  FUNC_19(VAR_54, VAR_28, 0);
 }





 FUNC_10(VAR_55);




 FUNC_18(VAR_54, VAR_37);
 FUNC_18(VAR_54, VAR_43);
 FUNC_18(VAR_54, VAR_32);
 FUNC_18(VAR_54, VAR_40);






 if (!(VAR_54->flags & VAR_47) &&
     (FUNC_18(VAR_54, VAR_37) == 0xff)) {
  FUNC_8("%s: LSR safety check engaged!\n", VAR_54->name);
  VAR_59 = -VAR_0;
  goto out;
 }




 if (VAR_54->type == VAR_2) {
  unsigned char VAR_60;

  FUNC_17(VAR_55, VAR_34, VAR_35);

  VAR_60 = FUNC_16(VAR_55, VAR_24) & ~(VAR_25|VAR_27);
  FUNC_19(VAR_54, VAR_24,
    VAR_60 | VAR_26 | VAR_25);
  FUNC_19(VAR_54, VAR_44, VAR_45);
  FUNC_19(VAR_54, VAR_24,
    VAR_60 | VAR_26 | VAR_27);
  FUNC_19(VAR_54, VAR_44, VAR_45);

  FUNC_19(VAR_54, VAR_34, 0);
 }




 if (((VAR_54->type == VAR_5) ||
      (VAR_54->type == VAR_6) ||
      (VAR_54->type == VAR_4)) && (VAR_54->fifosize > 1)) {

  if ((VAR_55->tx_loadsz < 2) || (VAR_55->tx_loadsz > VAR_54->fifosize)) {
   FUNC_7("%s TX FIFO Threshold errors, skipping\n",
          VAR_54->name);
  } else {
   FUNC_19(VAR_54, VAR_12,
     VAR_13);
   FUNC_19(VAR_54, VAR_14,
     VAR_54->fifosize - VAR_55->tx_loadsz);
   VAR_54->handle_irq = VAR_52;
  }
 }

 if (VAR_54->irq && !(VAR_55->port.flags & VAR_50)) {
  unsigned char VAR_61;
  FUNC_22(&VAR_54->lock, VAR_56);
  if (VAR_55->port.irqflags & VAR_1)
   FUNC_0(VAR_54->irq);

  FUNC_27(VAR_55, VAR_39);
  FUNC_20(VAR_54, VAR_28, VAR_31);
  FUNC_25(1);
  VAR_61 = FUNC_18(VAR_54, VAR_32);
  FUNC_19(VAR_54, VAR_28, 0);
  FUNC_20(VAR_54, VAR_28, VAR_31);
  FUNC_25(1);
  VAR_58 = FUNC_18(VAR_54, VAR_32);
  FUNC_19(VAR_54, VAR_28, 0);

  if (VAR_54->irqflags & VAR_1)
   FUNC_1(VAR_54->irq);
  FUNC_23(&VAR_54->lock, VAR_56);






  if ((!(VAR_61 & VAR_33) && (VAR_58 & VAR_33)) ||
      VAR_55->port.flags & VAR_48) {
   VAR_55->bugs |= VAR_15;
  }
 }

 VAR_59 = VAR_55->ops->setup_irq(VAR_55);
 if (VAR_59)
  goto out;




 FUNC_19(VAR_54, VAR_34, VAR_36);

 FUNC_22(&VAR_54->lock, VAR_56);
 if (VAR_55->port.flags & VAR_49) {
  if (!VAR_55->port.irq)
   VAR_55->port.mctrl |= VAR_10;
 } else



  if (VAR_54->irq)
   VAR_55->port.mctrl |= VAR_11;

 FUNC_14(VAR_54, VAR_54->mctrl);
 if (VAR_55->port.quirks & VAR_51)
  goto dont_test_tx_en;





 FUNC_19(VAR_54, VAR_28, VAR_31);
 VAR_57 = FUNC_18(VAR_54, VAR_37);
 VAR_58 = FUNC_18(VAR_54, VAR_32);
 FUNC_19(VAR_54, VAR_28, 0);

 if (VAR_57 & VAR_38 && VAR_58 & VAR_33) {
  if (!(VAR_55->bugs & VAR_16)) {
   VAR_55->bugs |= VAR_16;
   FUNC_6("%s - enabling bad tx status workarounds\n",
     VAR_54->name);
  }
 } else {
  VAR_55->bugs &= ~VAR_16;
 }

dont_test_tx_en:
 FUNC_23(&VAR_54->lock, VAR_56);






 FUNC_18(VAR_54, VAR_37);
 FUNC_18(VAR_54, VAR_43);
 FUNC_18(VAR_54, VAR_32);
 FUNC_18(VAR_54, VAR_40);
 VAR_55->lsr_saved_flags = 0;
 VAR_55->msr_saved_flags = 0;




 if (VAR_55->dma) {
  VAR_59 = FUNC_11(VAR_55);
  if (VAR_59) {
   FUNC_9("%s - failed to request DMA\n",
         VAR_54->name);
   VAR_55->dma = ((void*)0);
  }
 }






 VAR_55->ier = VAR_30 | VAR_29;

 if (VAR_54->flags & VAR_49) {
  unsigned int VAR_62;



  VAR_62 = (VAR_54->iobase & 0xfe0) | 0x01f;
  FUNC_5(0x80, VAR_62);
  FUNC_3(VAR_62);
 }
 VAR_59 = 0;
out:
 FUNC_13(VAR_55);
 return VAR_59;
}
