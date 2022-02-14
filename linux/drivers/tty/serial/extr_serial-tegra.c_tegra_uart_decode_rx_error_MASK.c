
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brk; int frame; int parity; int overrun; } ;
struct TYPE_4__ {unsigned long ignore_status_mask; int dev; TYPE_1__ icount; } ;
struct tegra_uart_port {TYPE_2__ uport; } ;


 unsigned long VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tegra_uart_port*,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned long,unsigned long,int ,char) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static char FUNC_5(struct tegra_uart_port *VAR_13,
   unsigned long VAR_14)
{
 char VAR_15 = VAR_3;

 if (FUNC_4(VAR_14 & VAR_0)) {
  if (VAR_14 & VAR_11) {

   VAR_15 = VAR_4;
   VAR_13->uport.icount.overrun++;
   FUNC_1(VAR_13->uport.dev, "Got overrun errors\n");
  } else if (VAR_14 & VAR_12) {

   VAR_15 = VAR_5;
   VAR_13->uport.icount.parity++;
   FUNC_1(VAR_13->uport.dev, "Got Parity errors\n");
  } else if (VAR_14 & VAR_9) {
   VAR_15 = VAR_2;
   VAR_13->uport.icount.frame++;
   FUNC_1(VAR_13->uport.dev, "Got frame errors\n");
  } else if (VAR_14 & VAR_7) {




   if (!(VAR_14 & VAR_8) && (VAR_14 & VAR_10))
    FUNC_2(VAR_13, VAR_6);
   if (VAR_13->uport.ignore_status_mask & VAR_7)
    return VAR_1;
   VAR_15 = VAR_1;
   VAR_13->uport.icount.brk++;
   FUNC_0(VAR_13->uport.dev, "Got Break\n");
  }
  FUNC_3(&VAR_13->uport, VAR_14, VAR_11, 0, VAR_15);
 }

 return VAR_15;
}
