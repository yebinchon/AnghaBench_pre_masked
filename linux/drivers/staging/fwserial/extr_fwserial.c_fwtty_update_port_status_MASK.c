
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_4__ {int delta_msr_wait; int open_wait; } ;
struct TYPE_3__ {int cts; int dcd; int dsr; int rng; } ;
struct fwtty_port {unsigned int mstatus; TYPE_2__ port; int emit_breaks; int break_last; scalar_t__ loopback; int hangup; TYPE_1__ icount; } ;


 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct fwtty_port*) ;
 int FUNC_3 (struct fwtty_port*,char*,unsigned int,unsigned int) ;
 int FUNC_4 (struct fwtty_port*) ;
 int VAR_7 ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int FUNC_8 (struct tty_struct*) ;
 struct tty_struct* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct fwtty_port *VAR_9,
         unsigned int VAR_10)
{
 unsigned int VAR_11;
 struct tty_struct *VAR_12;


 VAR_10 &= ~VAR_0;
 VAR_11 = (VAR_9->mstatus ^ VAR_10) & ~VAR_0;
 VAR_11 &= ~(VAR_10 & VAR_5);
 VAR_9->mstatus = VAR_10;

 if (VAR_11 & VAR_5)
  ++VAR_9->icount.rng;
 if (VAR_11 & VAR_4)
  ++VAR_9->icount.dsr;
 if (VAR_11 & VAR_2)
  ++VAR_9->icount.dcd;
 if (VAR_11 & VAR_3)
  ++VAR_9->icount.cts;

 FUNC_3(VAR_9, "status: %x delta: %x\n", VAR_10, VAR_11);

 if (VAR_11 & VAR_2) {
  VAR_12 = FUNC_9(&VAR_9->port);
  if (VAR_12 && !FUNC_0(VAR_12)) {
   if (VAR_10 & VAR_2)
    FUNC_10(&VAR_9->port.open_wait);
   else
    FUNC_7(&VAR_9->hangup);
  }
  FUNC_8(VAR_12);
 }

 if (VAR_11 & VAR_3) {
  VAR_12 = FUNC_9(&VAR_9->port);
  if (VAR_12 && FUNC_1(VAR_12)) {
   if (VAR_12->hw_stopped) {
    if (VAR_10 & VAR_3) {
     VAR_12->hw_stopped = 0;
     if (VAR_9->loopback)
      FUNC_2(VAR_9);
     else
      FUNC_4(VAR_9);
    }
   } else {
    if (~VAR_10 & VAR_3)
     VAR_12->hw_stopped = 1;
   }
  }
  FUNC_8(VAR_12);

 } else if (VAR_11 & VAR_1) {
  VAR_12 = FUNC_9(&VAR_9->port);
  if (VAR_12) {
   if (VAR_12->hw_stopped) {
    if (~VAR_10 & VAR_1) {
     VAR_12->hw_stopped = 0;
     if (VAR_9->loopback)
      FUNC_2(VAR_9);
     else
      FUNC_4(VAR_9);
    }
   } else {
    if (VAR_10 & VAR_1)
     VAR_12->hw_stopped = 1;
   }
  }
  FUNC_8(VAR_12);
 }

 if (VAR_11 & (VAR_6 << 24)) {
  if (VAR_10 & (VAR_6 << 24)) {
   VAR_9->break_last = VAR_7;
   FUNC_6(&VAR_9->emit_breaks, 0);
  } else {

   FUNC_5(VAR_8, &VAR_9->emit_breaks, 0);
  }
 }

 if (VAR_11 & (VAR_4 | VAR_2 | VAR_3 | VAR_5))
  FUNC_10(&VAR_9->port.delta_msr_wait);
}
