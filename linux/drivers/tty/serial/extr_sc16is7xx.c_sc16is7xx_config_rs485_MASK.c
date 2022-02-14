
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_rs485 {int flags; scalar_t__ delay_rts_after_send; } ;
struct uart_port {struct serial_rs485 rs485; int dev; } ;
struct sc16is7xx_port {int kworker; } ;
struct TYPE_2__ {int flags; } ;
struct sc16is7xx_one {int reg_work; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int) ;
 struct sc16is7xx_port* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 struct sc16is7xx_one* FUNC_3 (struct uart_port*,struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_5,
      struct serial_rs485 *VAR_6)
{
 struct sc16is7xx_port *VAR_7 = FUNC_1(VAR_5->dev);
 struct sc16is7xx_one *VAR_8 = FUNC_3(VAR_5, VAR_5);

 if (VAR_6->flags & VAR_2) {
  bool VAR_9, VAR_10;

  VAR_9 = VAR_6->flags & VAR_3;
  VAR_10 = VAR_6->flags & VAR_4;

  if (VAR_9 == VAR_10)
   FUNC_0(VAR_5->dev,
    "unsupported RTS signalling on_send:%d after_send:%d - exactly one of RS485 RTS flags should be set\n",
    VAR_10, VAR_9);






  if (VAR_6->delay_rts_after_send)
   return -VAR_0;
 }

 VAR_5->rs485 = *VAR_6;
 VAR_8->config.flags |= VAR_1;
 FUNC_2(&VAR_7->kworker, &VAR_8->reg_work);

 return 0;
}
