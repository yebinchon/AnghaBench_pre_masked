
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; size_t type; scalar_t__ iotype; int name; int lock; int fifosize; int membase; int iobase; int mapbase; } ;
struct uart_8250_port {unsigned int capabilities; int probe; int tx_loadsz; struct uart_port port; scalar_t__ bugs; } ;
struct TYPE_2__ {unsigned int flags; unsigned char name; int tx_loadsz; int fifo_size; } ;


 int FUNC_0 (char*,unsigned char,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct uart_8250_port*) ;
 unsigned char FUNC_8 (struct uart_8250_port*) ;
 int FUNC_9 (struct uart_8250_port*,unsigned char) ;
 int FUNC_10 (struct uart_8250_port*,int ) ;
 int FUNC_11 (struct uart_8250_port*,int ,unsigned char) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 TYPE_1__* VAR_21 ;

__attribute__((used)) static void FUNC_14(struct uart_8250_port *VAR_22)
{
 unsigned char VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned char VAR_27, VAR_28;
 struct uart_port *VAR_29 = &VAR_22->port;
 unsigned long VAR_30;
 unsigned int VAR_31;

 if (!VAR_29->iobase && !VAR_29->mapbase && !VAR_29->membase)
  return;

 FUNC_0("%s: autoconf (0x%04lx, 0x%p): ",
         VAR_29->name, VAR_29->iobase, VAR_29->membase);





 FUNC_12(&VAR_29->lock, VAR_30);

 VAR_22->capabilities = 0;
 VAR_22->bugs = 0;

 if (!(VAR_29->flags & VAR_18)) {
  VAR_24 = FUNC_10(VAR_22, VAR_8);
  FUNC_11(VAR_22, VAR_8, 0);







  VAR_25 = FUNC_10(VAR_22, VAR_8) & 0x0f;
  FUNC_11(VAR_22, VAR_8, 0x0F);



  VAR_26 = FUNC_10(VAR_22, VAR_8) & 0x0f;
  FUNC_11(VAR_22, VAR_8, VAR_24);
  if (VAR_25 != 0 || VAR_26 != 0x0F) {



   FUNC_13(&VAR_29->lock, VAR_30);
   FUNC_0("IER test failed (%02x, %02x) ",
           VAR_25, VAR_26);
   goto out;
  }
 }

 VAR_28 = FUNC_8(VAR_22);
 VAR_27 = FUNC_10(VAR_22, VAR_11);
 if (!(VAR_29->flags & VAR_19)) {
  FUNC_9(VAR_22, VAR_13 | 0x0A);
  VAR_23 = FUNC_10(VAR_22, VAR_14) & 0xF0;
  FUNC_9(VAR_22, VAR_28);
  if (VAR_23 != 0x90) {
   FUNC_13(&VAR_29->lock, VAR_30);
   FUNC_0("LOOP test failed (%02x) ",
           VAR_23);
   goto out;
  }
 }
 FUNC_11(VAR_22, VAR_11, VAR_12);
 FUNC_11(VAR_22, VAR_5, 0);
 FUNC_11(VAR_22, VAR_11, 0);

 FUNC_11(VAR_22, VAR_6, VAR_7);
 VAR_24 = FUNC_10(VAR_22, VAR_10) >> 6;

 switch (VAR_24) {
 case 0:
  FUNC_3(VAR_22);
  break;
 case 1:
  VAR_29->type = VAR_3;
  break;
 case 2:
  VAR_29->type = VAR_0;
  break;
 case 3:
  FUNC_2(VAR_22);
  break;
 }
 FUNC_11(VAR_22, VAR_11, VAR_27);

 VAR_29->fifosize = VAR_21[VAR_22->port.type].fifo_size;
 VAR_31 = VAR_22->capabilities;
 VAR_22->capabilities = VAR_21[VAR_29->type].flags;
 VAR_22->tx_loadsz = VAR_21[VAR_29->type].tx_loadsz;

 if (VAR_29->type == VAR_3)
  goto out_lock;
 FUNC_9(VAR_22, VAR_28);
 FUNC_7(VAR_22);
 FUNC_10(VAR_22, VAR_17);
 if (VAR_22->capabilities & VAR_4)
  FUNC_11(VAR_22, VAR_8, VAR_9);
 else
  FUNC_11(VAR_22, VAR_8, 0);

out_lock:
 FUNC_13(&VAR_29->lock, VAR_30);




 if (VAR_29->type == VAR_1 && VAR_29->iotype == VAR_20)
  FUNC_4(VAR_22);

 if (VAR_22->capabilities != VAR_31) {
  FUNC_6("%s: detected caps %08x should be %08x\n",
   VAR_29->name, VAR_31, VAR_22->capabilities);
 }
out:
 FUNC_0("iir=%d ", VAR_24);
 FUNC_0("type=%s\n", VAR_21[VAR_29->type].name);
}
