
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {int ch_r_tail; int ch_r_head; int ch_c_cflag; int ch_flags; int ch_c_iflag; TYPE_1__* ch_bd; int ch_stops_sent; } ;
struct board_ops {int (* send_start_character ) (struct jsm_channel*) ;int (* enable_receiver ) (struct jsm_channel*) ;int (* send_stop_character ) (struct jsm_channel*) ;int (* disable_receiver ) (struct jsm_channel*) ;} ;
struct TYPE_2__ {int pci_dev; struct board_ops* bd_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,char*,...) ;
 int FUNC_1 (struct jsm_channel*) ;
 int FUNC_2 (struct jsm_channel*) ;
 int FUNC_3 (struct jsm_channel*) ;
 int FUNC_4 (struct jsm_channel*) ;

void FUNC_5(struct jsm_channel *VAR_7)
{
 struct board_ops *VAR_8 = VAR_7->ch_bd->bd_ops;
 int VAR_9;


 if ((VAR_9 = VAR_7->ch_r_tail - VAR_7->ch_r_head - 1) < 0)
  VAR_9 += VAR_5 + 1;
 if (VAR_9 < 256) {

  if (VAR_7->ch_c_cflag & VAR_1) {
   if (!(VAR_7->ch_flags & VAR_0)) {
    VAR_8->disable_receiver(VAR_7);
    VAR_7->ch_flags |= (VAR_0);
    FUNC_0(VAR_4, &VAR_7->ch_bd->pci_dev,
     "Internal queue hit hilevel mark (%d)! Turning off interrupts\n",
     VAR_9);
   }
  }

  else if (VAR_7->ch_c_iflag & VAR_2) {
   if (VAR_7->ch_stops_sent <= VAR_3) {
    VAR_8->send_stop_character(VAR_7);
    VAR_7->ch_stops_sent++;
    FUNC_0(VAR_4, &VAR_7->ch_bd->pci_dev,
     "Sending stop char! Times sent: %x\n",
     VAR_7->ch_stops_sent);
   }
  }
 }
 if (VAR_9 > (VAR_6 / 2)) {

  if (VAR_7->ch_c_cflag & VAR_1) {
   if (VAR_7->ch_flags & VAR_0) {
    VAR_8->enable_receiver(VAR_7);
    VAR_7->ch_flags &= ~(VAR_0);
    FUNC_0(VAR_4, &VAR_7->ch_bd->pci_dev,
     "Internal queue hit lowlevel mark (%d)! Turning on interrupts\n",
     VAR_9);
   }
  }

  else if (VAR_7->ch_c_iflag & VAR_2 && VAR_7->ch_stops_sent) {
   VAR_7->ch_stops_sent = 0;
   VAR_8->send_start_character(VAR_7);
   FUNC_0(VAR_4, &VAR_7->ch_bd->pci_dev,
    "Sending start char!\n");
  }
 }
}
