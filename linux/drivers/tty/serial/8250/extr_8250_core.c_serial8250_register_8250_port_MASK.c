
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uartclk; scalar_t__ type; int flags; int line; int irq; scalar_t__ mapbase; int iobase; scalar_t__ dev; scalar_t__ handle_break; scalar_t__ pm; scalar_t__ shutdown; scalar_t__ startup; scalar_t__ set_divisor; scalar_t__ get_divisor; scalar_t__ set_mctrl; scalar_t__ get_mctrl; scalar_t__ set_ldisc; scalar_t__ set_termios; scalar_t__ handle_irq; scalar_t__ serial_out; scalar_t__ serial_in; scalar_t__ fifosize; int rs485; int rs485_config; int unthrottle; int throttle; int private_data; int mapsize; int iotype; int regshift; int irqflags; int membase; } ;
struct uart_8250_port {scalar_t__ overrun_backoff_time_ms; int overrun_backoff; TYPE_1__ port; int capabilities; scalar_t__ dl_write; scalar_t__ dl_read; struct mctrl_gpios* gpios; scalar_t__ tx_loadsz; int dma; int bugs; } ;
struct mctrl_gpios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct mctrl_gpios*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct mctrl_gpios*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,char*,int ,unsigned long long,int ) ;
 int FUNC_4 (scalar_t__) ;
 struct mctrl_gpios* FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct uart_8250_port*) ;
 struct uart_8250_port* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,TYPE_1__*,int *) ;
 int VAR_5 ;
 int FUNC_11 (struct uart_8250_port*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int *,TYPE_1__*) ;
 int FUNC_13 (int *,TYPE_1__*) ;

int FUNC_14(struct uart_8250_port *VAR_8)
{
 struct uart_8250_port *VAR_9;
 int VAR_10 = -VAR_1;

 if (VAR_8->port.uartclk == 0)
  return -VAR_0;

 FUNC_6(&VAR_7);

 VAR_9 = FUNC_9(&VAR_8->port);
 if (VAR_9 && VAR_9->port.type != VAR_2) {
  struct mctrl_gpios *VAR_11;

  if (VAR_9->port.dev)
   FUNC_13(&VAR_5, &VAR_9->port);

  VAR_9->port.iobase = VAR_8->port.iobase;
  VAR_9->port.membase = VAR_8->port.membase;
  VAR_9->port.irq = VAR_8->port.irq;
  VAR_9->port.irqflags = VAR_8->port.irqflags;
  VAR_9->port.uartclk = VAR_8->port.uartclk;
  VAR_9->port.fifosize = VAR_8->port.fifosize;
  VAR_9->port.regshift = VAR_8->port.regshift;
  VAR_9->port.iotype = VAR_8->port.iotype;
  VAR_9->port.flags = VAR_8->port.flags | VAR_3;
  VAR_9->bugs = VAR_8->bugs;
  VAR_9->port.mapbase = VAR_8->port.mapbase;
  VAR_9->port.mapsize = VAR_8->port.mapsize;
  VAR_9->port.private_data = VAR_8->port.private_data;
  VAR_9->tx_loadsz = VAR_8->tx_loadsz;
  VAR_9->capabilities = VAR_8->capabilities;
  VAR_9->port.throttle = VAR_8->port.throttle;
  VAR_9->port.unthrottle = VAR_8->port.unthrottle;
  VAR_9->port.rs485_config = VAR_8->port.rs485_config;
  VAR_9->port.rs485 = VAR_8->port.rs485;
  VAR_9->dma = VAR_8->dma;


  if (VAR_9->port.fifosize && !VAR_9->tx_loadsz)
   VAR_9->tx_loadsz = VAR_9->port.fifosize;

  if (VAR_8->port.dev)
   VAR_9->port.dev = VAR_8->port.dev;

  if (VAR_8->port.flags & VAR_4)
   VAR_9->port.type = VAR_8->port.type;





  if (!FUNC_4(VAR_9->port.dev)) {
   VAR_11 = FUNC_5(&VAR_9->port, 0);
   if (FUNC_1(VAR_11)) {
    VAR_10 = FUNC_2(VAR_11);
    goto out_unlock;
   } else {
    VAR_9->gpios = VAR_11;
   }
  }

  FUNC_11(VAR_9);


  if (VAR_8->port.serial_in)
   VAR_9->port.serial_in = VAR_8->port.serial_in;
  if (VAR_8->port.serial_out)
   VAR_9->port.serial_out = VAR_8->port.serial_out;
  if (VAR_8->port.handle_irq)
   VAR_9->port.handle_irq = VAR_8->port.handle_irq;

  if (VAR_8->port.set_termios)
   VAR_9->port.set_termios = VAR_8->port.set_termios;
  if (VAR_8->port.set_ldisc)
   VAR_9->port.set_ldisc = VAR_8->port.set_ldisc;
  if (VAR_8->port.get_mctrl)
   VAR_9->port.get_mctrl = VAR_8->port.get_mctrl;
  if (VAR_8->port.set_mctrl)
   VAR_9->port.set_mctrl = VAR_8->port.set_mctrl;
  if (VAR_8->port.get_divisor)
   VAR_9->port.get_divisor = VAR_8->port.get_divisor;
  if (VAR_8->port.set_divisor)
   VAR_9->port.set_divisor = VAR_8->port.set_divisor;
  if (VAR_8->port.startup)
   VAR_9->port.startup = VAR_8->port.startup;
  if (VAR_8->port.shutdown)
   VAR_9->port.shutdown = VAR_8->port.shutdown;
  if (VAR_8->port.pm)
   VAR_9->port.pm = VAR_8->port.pm;
  if (VAR_8->port.handle_break)
   VAR_9->port.handle_break = VAR_8->port.handle_break;
  if (VAR_8->dl_read)
   VAR_9->dl_read = VAR_8->dl_read;
  if (VAR_8->dl_write)
   VAR_9->dl_write = VAR_8->dl_write;

  if (VAR_9->port.type != VAR_2) {
   if (&FUNC_10 != ((void*)0))
    FUNC_10(0, &VAR_9->port,
      &VAR_9->capabilities);

   FUNC_8(VAR_9);
   VAR_10 = FUNC_12(&VAR_5,
      &VAR_9->port);
   if (VAR_10 == 0)
    VAR_10 = VAR_9->port.line;
  } else {
   FUNC_3(VAR_9->port.dev,
    "skipping CIR port at 0x%lx / 0x%llx, IRQ %d\n",
    VAR_9->port.iobase,
    (unsigned long long)VAR_9->port.mapbase,
    VAR_9->port.irq);

   VAR_10 = 0;
  }


  if (VAR_8->overrun_backoff_time_ms > 0) {
   VAR_9->overrun_backoff_time_ms =
    VAR_8->overrun_backoff_time_ms;
   FUNC_0(&VAR_9->overrun_backoff,
     VAR_6);
  } else {
   VAR_9->overrun_backoff_time_ms = 0;
  }
 }

out_unlock:
 FUNC_7(&VAR_7);

 return VAR_10;
}
