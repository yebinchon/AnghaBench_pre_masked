
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int frame; int parity; int brk; int overrun; int cts; int dsr; int rng; int dcd; int rx; int tx; } ;
struct sdio_uart_port {TYPE_1__ icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sdio_uart_port* FUNC_1 (int) ;
 int FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_2, "serinfo:1.0 driver%s%s revision:%s\n",
         "", "", "");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct sdio_uart_port *VAR_5 = FUNC_1(VAR_4);
  if (VAR_5) {
   FUNC_3(VAR_2, "%d: uart:SDIO", VAR_4);
   if (FUNC_0(VAR_0)) {
    FUNC_3(VAR_2, " tx:%d rx:%d",
           VAR_5->icount.tx, VAR_5->icount.rx);
    if (VAR_5->icount.frame)
     FUNC_3(VAR_2, " fe:%d",
            VAR_5->icount.frame);
    if (VAR_5->icount.parity)
     FUNC_3(VAR_2, " pe:%d",
            VAR_5->icount.parity);
    if (VAR_5->icount.brk)
     FUNC_3(VAR_2, " brk:%d",
            VAR_5->icount.brk);
    if (VAR_5->icount.overrun)
     FUNC_3(VAR_2, " oe:%d",
            VAR_5->icount.overrun);
    if (VAR_5->icount.cts)
     FUNC_3(VAR_2, " cts:%d",
            VAR_5->icount.cts);
    if (VAR_5->icount.dsr)
     FUNC_3(VAR_2, " dsr:%d",
            VAR_5->icount.dsr);
    if (VAR_5->icount.rng)
     FUNC_3(VAR_2, " rng:%d",
            VAR_5->icount.rng);
    if (VAR_5->icount.dcd)
     FUNC_3(VAR_2, " dcd:%d",
            VAR_5->icount.dcd);
   }
   FUNC_2(VAR_5);
   FUNC_4(VAR_2, '\n');
  }
 }
 return 0;
}
