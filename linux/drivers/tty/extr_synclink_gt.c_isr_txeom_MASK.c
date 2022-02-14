
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* tty; } ;
struct TYPE_6__ {scalar_t__ mode; } ;
struct TYPE_5__ {int txok; int txunder; } ;
struct slgt_info {int tx_active; int drop_rts_on_tx_done; int pending_bh; TYPE_4__ port; scalar_t__ netcount; int signals; TYPE_2__ params; int tx_timer; TYPE_1__ icount; int device_name; } ;
struct TYPE_7__ {scalar_t__ hw_stopped; scalar_t__ stopped; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct slgt_info*) ;
 unsigned short FUNC_3 (struct slgt_info*,int ) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (struct slgt_info*,scalar_t__) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (struct slgt_info*) ;
 int FUNC_8 (struct slgt_info*) ;
 scalar_t__ FUNC_9 (struct slgt_info*) ;
 int FUNC_10 (struct slgt_info*) ;
 int FUNC_11 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_12(struct slgt_info *VAR_8, unsigned short VAR_9)
{
 FUNC_0(("%s txeom status=%04x\n", VAR_8->device_name, VAR_9));

 FUNC_5(VAR_8, VAR_2 + VAR_3 + VAR_4);
 FUNC_6(VAR_8);
 if (VAR_9 & VAR_4) {
  unsigned short VAR_10 = FUNC_3(VAR_8, VAR_7);
  FUNC_11(VAR_8, VAR_7, (unsigned short)(VAR_10 | VAR_1));
  FUNC_11(VAR_8, VAR_7, VAR_10);
 }

 if (VAR_8->tx_active) {
  if (VAR_8->params.mode != VAR_5) {
   if (VAR_9 & VAR_4)
    VAR_8->icount.txunder++;
   else if (VAR_9 & VAR_3)
    VAR_8->icount.txok++;
  }

  if (FUNC_9(VAR_8)) {
   FUNC_7(VAR_8);
   FUNC_10(VAR_8);
   return;
  }
  VAR_8->tx_active = 0;

  FUNC_1(&VAR_8->tx_timer);

  if (VAR_8->params.mode != VAR_5 && VAR_8->drop_rts_on_tx_done) {
   VAR_8->signals &= ~VAR_6;
   VAR_8->drop_rts_on_tx_done = 0;
   FUNC_4(VAR_8);
  }






  {
   if (VAR_8->port.tty && (VAR_8->port.tty->stopped || VAR_8->port.tty->hw_stopped)) {
    FUNC_8(VAR_8);
    return;
   }
   VAR_8->pending_bh |= VAR_0;
  }
 }
}
