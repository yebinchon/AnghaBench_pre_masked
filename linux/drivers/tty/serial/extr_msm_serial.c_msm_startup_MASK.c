
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int line; int fifosize; int irq; } ;
struct TYPE_2__ {int mapbase; } ;
struct msm_port {int clk; int pclk; scalar_t__ is_uartdm; int name; TYPE_1__ uart; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct uart_port*) ;
 unsigned int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct msm_port*) ;
 int FUNC_6 (struct msm_port*,int ) ;
 int FUNC_7 (struct msm_port*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct uart_port*,unsigned int,int ) ;
 int FUNC_9 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_10 (int ,int,char*,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct uart_port *VAR_6)
{
 struct msm_port *VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_10(VAR_7->name, sizeof(VAR_7->name),
   "msm_serial%d", VAR_6->line);

 FUNC_3(VAR_6);

 if (FUNC_2(VAR_6->fifosize > 12))
  VAR_9 = VAR_6->fifosize - 12;
 else
  VAR_9 = VAR_6->fifosize;


 VAR_8 = FUNC_4(VAR_6, VAR_2);

 if (VAR_7->is_uartdm)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_4;

 VAR_8 &= ~VAR_10;
 VAR_8 &= ~VAR_3;
 VAR_8 |= VAR_10 & (VAR_9 << 2);
 VAR_8 |= VAR_3 & VAR_9;
 FUNC_8(VAR_6, VAR_8, VAR_2);

 if (VAR_7->is_uartdm) {
  FUNC_7(VAR_7, VAR_7->uart.mapbase);
  FUNC_6(VAR_7, VAR_7->uart.mapbase);
 }

 VAR_11 = FUNC_9(VAR_6->irq, VAR_5, VAR_0,
     VAR_7->name, VAR_6);
 if (FUNC_11(VAR_11))
  goto err_irq;

 return 0;

err_irq:
 if (VAR_7->is_uartdm)
  FUNC_5(VAR_7);

 FUNC_1(VAR_7->pclk);
 FUNC_1(VAR_7->clk);

 return VAR_11;
}
