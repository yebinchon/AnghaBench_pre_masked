
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_9__ {int open_wait; int delta_msr_wait; } ;
struct TYPE_7__ {int modem_status; } ;
struct TYPE_6__ {int cts; int dcd; int dsr; int rng; } ;
struct mxser_port {scalar_t__ type; int IER; scalar_t__ ioaddr; TYPE_3__* board; TYPE_4__ port; TYPE_2__ mon_data; TYPE_1__ icount; } ;
struct TYPE_8__ {int chip_flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_9,
    struct mxser_port *VAR_10, int VAR_11)
{

 if (VAR_11 & VAR_8)
  VAR_10->icount.rng++;
 if (VAR_11 & VAR_7)
  VAR_10->icount.dsr++;
 if (VAR_11 & VAR_6)
  VAR_10->icount.dcd++;
 if (VAR_11 & VAR_5)
  VAR_10->icount.cts++;
 VAR_10->mon_data.modem_status = VAR_11;
 FUNC_4(&VAR_10->port.delta_msr_wait);

 if (FUNC_1(&VAR_10->port) && (VAR_11 & VAR_6)) {
  if (VAR_11 & VAR_4)
   FUNC_4(&VAR_10->port.open_wait);
 }

 if (FUNC_2(&VAR_10->port)) {
  if (VAR_9->hw_stopped) {
   if (VAR_11 & VAR_3) {
    VAR_9->hw_stopped = 0;

    if ((VAR_10->type != VAR_0) &&
      (!VAR_10->board->chip_flag)) {
     FUNC_0(VAR_10->IER & ~VAR_2,
      VAR_10->ioaddr + VAR_1);
     VAR_10->IER |= VAR_2;
     FUNC_0(VAR_10->IER, VAR_10->ioaddr +
       VAR_1);
    }
    FUNC_3(VAR_9);
   }
  } else {
   if (!(VAR_11 & VAR_3)) {
    VAR_9->hw_stopped = 1;
    if (VAR_10->type != VAR_0 &&
      !VAR_10->board->chip_flag) {
     VAR_10->IER &= ~VAR_2;
     FUNC_0(VAR_10->IER, VAR_10->ioaddr +
       VAR_1);
    }
   }
  }
 }
}
