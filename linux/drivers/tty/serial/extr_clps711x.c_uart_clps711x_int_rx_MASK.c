
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int overrun; int frame; int parity; int rx; } ;
struct uart_port {unsigned int read_status_mask; unsigned int ignore_status_mask; TYPE_2__* state; TYPE_1__ icount; scalar_t__ membase; int dev; } ;
struct clps711x_port {int syscon; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct uart_port*,unsigned int,int,int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct uart_port *VAR_13 = VAR_12;
 struct clps711x_port *VAR_14 = FUNC_0(VAR_13->dev);
 unsigned int VAR_15, VAR_16;
 u16 VAR_17;

 for (;;) {
  u32 VAR_18 = 0;

  FUNC_2(VAR_14->syscon, VAR_1, &VAR_18);
  if (VAR_18 & VAR_2)
   break;

  VAR_17 = FUNC_1(VAR_13->membase + VAR_8);
  VAR_15 = VAR_17 & (VAR_7 | VAR_10 | VAR_9);
  VAR_17 &= 0xff;

  VAR_13->icount.rx++;
  VAR_16 = VAR_4;

  if (FUNC_6(VAR_15)) {
   if (VAR_15 & VAR_10)
    VAR_13->icount.parity++;
   else if (VAR_15 & VAR_7)
    VAR_13->icount.frame++;
   else if (VAR_15 & VAR_9)
    VAR_13->icount.overrun++;

   VAR_15 &= VAR_13->read_status_mask;

   if (VAR_15 & VAR_10)
    VAR_16 = VAR_6;
   else if (VAR_15 & VAR_7)
    VAR_16 = VAR_3;
   else if (VAR_15 & VAR_9)
    VAR_16 = VAR_5;
  }

  if (FUNC_4(VAR_13, VAR_17))
   continue;

  if (VAR_15 & VAR_13->ignore_status_mask)
   continue;

  FUNC_5(VAR_13, VAR_15, VAR_9, VAR_17, VAR_16);
 }

 FUNC_3(&VAR_13->state->port);

 return VAR_0;
}
