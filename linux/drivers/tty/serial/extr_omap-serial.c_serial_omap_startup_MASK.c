
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; int mctrl; int line; int dev; int irq; int irqflags; } ;
struct uart_omap_port {int ier; int wer; int features; int port_activity; int dev; scalar_t__ msr_saved_flags; TYPE_1__ port; scalar_t__ wakeirq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,struct uart_omap_port*) ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,struct uart_omap_port*) ;
 int FUNC_7 (struct uart_omap_port*,int ) ;
 int FUNC_8 (struct uart_omap_port*) ;
 int VAR_16 ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct uart_omap_port*,int ,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct uart_omap_port* FUNC_13 (struct uart_port*) ;

__attribute__((used)) static int FUNC_14(struct uart_port *VAR_17)
{
 struct uart_omap_port *VAR_18 = FUNC_13(VAR_17);
 unsigned long VAR_19 = 0;
 int VAR_20;




 VAR_20 = FUNC_6(VAR_18->port.irq, VAR_16, VAR_18->port.irqflags,
    VAR_18->name, VAR_18);
 if (VAR_20)
  return VAR_20;


 if (VAR_18->wakeirq) {
  VAR_20 = FUNC_1(VAR_18->dev, VAR_18->wakeirq);
  if (VAR_20) {
   FUNC_2(VAR_18->port.irq, VAR_18);
   return VAR_20;
  }
 }

 FUNC_0(VAR_18->port.dev, "serial_omap_startup+%d\n", VAR_18->port.line);

 FUNC_3(VAR_18->dev);




 FUNC_8(VAR_18);




 (void) FUNC_7(VAR_18, VAR_10);
 if (FUNC_7(VAR_18, VAR_10) & VAR_11)
  (void) FUNC_7(VAR_18, VAR_14);
 (void) FUNC_7(VAR_18, VAR_7);
 (void) FUNC_7(VAR_18, VAR_12);




 FUNC_10(VAR_18, VAR_8, VAR_9);
 FUNC_11(&VAR_18->port.lock, VAR_19);



 VAR_18->port.mctrl |= VAR_3;
 FUNC_9(&VAR_18->port, VAR_18->port.mctrl);
 FUNC_12(&VAR_18->port.lock, VAR_19);

 VAR_18->msr_saved_flags = 0;





 VAR_18->ier = VAR_6 | VAR_5;
 FUNC_10(VAR_18, VAR_4, VAR_18->ier);


 VAR_18->wer = VAR_2;
 if (VAR_18->features & VAR_1)
  VAR_18->wer |= VAR_0;

 FUNC_10(VAR_18, VAR_13, VAR_18->wer);

 FUNC_4(VAR_18->dev);
 FUNC_5(VAR_18->dev);
 VAR_18->port_activity = VAR_15;
 return 0;
}
