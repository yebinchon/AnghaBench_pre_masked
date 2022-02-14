
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_6__ {unsigned int read_status_mask; TYPE_1__ icount; } ;
struct uart_amba_port {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct uart_amba_port*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct uart_amba_port *VAR_13)
{
 u16 VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;

 for (VAR_17 = 0; VAR_17 != 256; VAR_17++) {
  VAR_14 = FUNC_0(VAR_13, VAR_1);
  if (VAR_14 & VAR_10)
   break;


  VAR_15 = FUNC_0(VAR_13, VAR_0) | VAR_12;
  VAR_16 = VAR_4;
  VAR_13->port.icount.rx++;

  if (FUNC_4(VAR_15 & VAR_11)) {
   if (VAR_15 & VAR_6) {
    VAR_15 &= ~(VAR_7 | VAR_9);
    VAR_13->port.icount.brk++;
    if (FUNC_1(&VAR_13->port))
     continue;
   } else if (VAR_15 & VAR_9)
    VAR_13->port.icount.parity++;
   else if (VAR_15 & VAR_7)
    VAR_13->port.icount.frame++;
   if (VAR_15 & VAR_8)
    VAR_13->port.icount.overrun++;

   VAR_15 &= VAR_13->port.read_status_mask;

   if (VAR_15 & VAR_6)
    VAR_16 = VAR_2;
   else if (VAR_15 & VAR_9)
    VAR_16 = VAR_5;
   else if (VAR_15 & VAR_7)
    VAR_16 = VAR_3;
  }

  if (FUNC_2(&VAR_13->port, VAR_15 & 255))
   continue;

  FUNC_3(&VAR_13->port, VAR_15, VAR_8, VAR_15, VAR_16);
 }

 return VAR_17;
}
