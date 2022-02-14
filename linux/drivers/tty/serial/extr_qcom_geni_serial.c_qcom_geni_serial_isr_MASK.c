
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int brk; int parity; int overrun; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ membase; int lock; scalar_t__ suspended; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct qcom_geni_serial_port {int brk; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (struct uart_port*,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 struct qcom_geni_serial_port* FUNC_5 (struct uart_port*,struct uart_port*) ;
 int FUNC_6 (struct tty_port*,int ,int ) ;
 int FUNC_7 (struct uart_port*,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_20, void *VAR_21)
{
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 struct uart_port *VAR_26 = VAR_21;
 unsigned long VAR_27;
 bool VAR_28 = 0;
 struct tty_port *VAR_29 = &VAR_26->state->port;
 struct qcom_geni_serial_port *VAR_30 = FUNC_5(VAR_26, VAR_26);

 if (VAR_26->suspended)
  return VAR_1;

 FUNC_4(&VAR_26->lock, VAR_27);
 VAR_23 = FUNC_3(VAR_26->membase + VAR_8);
 VAR_24 = FUNC_3(VAR_26->membase + VAR_11);
 VAR_25 = FUNC_3(VAR_26->membase + VAR_9);
 VAR_22 = FUNC_3(VAR_26->membase + VAR_7);
 FUNC_8(VAR_23, VAR_26->membase + VAR_6);
 FUNC_8(VAR_24, VAR_26->membase + VAR_10);

 if (FUNC_0(VAR_23 & VAR_4))
  goto out_unlock;

 if (VAR_24 & VAR_18) {
  VAR_26->icount.overrun++;
  FUNC_6(VAR_29, 0, VAR_19);
 }

 if (VAR_23 & VAR_22 & (VAR_5 | VAR_2))
  FUNC_2(VAR_26, VAR_23 & VAR_2,
     VAR_25 & VAR_3);

 if (VAR_24 & VAR_12 || VAR_24 & VAR_13) {
  if (VAR_24 & VAR_12)
   VAR_26->icount.parity++;
  VAR_28 = 1;
 } else if (VAR_24 & VAR_14 ||
     VAR_24 & VAR_15) {
  VAR_26->icount.brk++;
  VAR_30->brk = 1;
 }

 if (VAR_24 & VAR_17 ||
     VAR_24 & VAR_16)
  FUNC_1(VAR_26, VAR_28);

out_unlock:
 FUNC_7(VAR_26, VAR_27);

 return VAR_0;
}
