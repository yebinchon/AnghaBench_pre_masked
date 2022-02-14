
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {scalar_t__ membase; int irq; int dev; } ;
struct stm32_usart_offsets {scalar_t__ rqr; scalar_t__ cr1; scalar_t__ cr3; } ;
struct stm32_port {int cr1_irq; scalar_t__ fifoen; TYPE_1__* info; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {struct stm32_usart_offsets ofs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,char const*,struct uart_port*) ;
 int VAR_11 ;
 int FUNC_2 (struct uart_port*,scalar_t__,int) ;
 int VAR_12 ;
 TYPE_2__* FUNC_3 (int ) ;
 struct stm32_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_13)
{
 struct stm32_port *VAR_14 = FUNC_4(VAR_13);
 struct stm32_usart_offsets *VAR_15 = &VAR_14->info->ofs;
 const char *VAR_16 = FUNC_3(VAR_13->dev)->name;
 u32 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_1(VAR_13->irq, VAR_11,
       VAR_12,
       VAR_0, VAR_16, VAR_13);
 if (VAR_18)
  return VAR_18;


 if (VAR_15->rqr != VAR_1)
  FUNC_2(VAR_13, VAR_15->rqr, VAR_10);


 if (VAR_14->fifoen) {
  VAR_17 = FUNC_0(VAR_13->membase + VAR_15->cr3);
  VAR_17 &= ~(VAR_8 | VAR_5);
  VAR_17 |= VAR_7 << VAR_9;
  VAR_17 |= VAR_4 << VAR_6;
  FUNC_5(VAR_17, VAR_13->membase + VAR_15->cr3);
 }


 VAR_17 = VAR_14->cr1_irq | VAR_3;
 if (VAR_14->fifoen)
  VAR_17 |= VAR_2;
 FUNC_2(VAR_13, VAR_15->cr1, VAR_17);

 return 0;
}
