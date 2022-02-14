
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_eth_private {TYPE_2__* cd; int dirty_tx; int cur_tx; } ;
struct TYPE_3__ {int tx_fifo_errors; int rx_fifo_errors; int rx_over_errors; int rx_frame_errors; int tx_aborted_errors; } ;
struct net_device {scalar_t__ state; TYPE_1__ stats; } ;
struct TYPE_4__ {int edtrr_trns; scalar_t__ no_ade; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*,char*,int,int ,int ,int,int) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sh_eth_private*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int,int ) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_11, u32 VAR_12)
{
 struct sh_eth_private *VAR_13 = FUNC_1(VAR_11);
 u32 VAR_14;

 if (VAR_12 & VAR_9) {

  if (VAR_12 & VAR_6) {
   VAR_11->stats.tx_aborted_errors++;
   FUNC_2(VAR_13, VAR_10, VAR_11, "Transmit Abort\n");
  }
 }

 if (VAR_12 & VAR_2) {

  if (VAR_12 & VAR_5) {

   VAR_11->stats.rx_frame_errors++;
  }
 }

 if (VAR_12 & VAR_7) {

  VAR_11->stats.tx_fifo_errors++;
  FUNC_2(VAR_13, VAR_10, VAR_11, "Transmit Descriptor Empty\n");
 }

 if (VAR_12 & VAR_8) {

  VAR_11->stats.tx_fifo_errors++;
  FUNC_2(VAR_13, VAR_10, VAR_11, "Transmit FIFO Under flow\n");
 }

 if (VAR_12 & VAR_3) {

  VAR_11->stats.rx_over_errors++;
 }

 if (VAR_12 & VAR_4) {

  VAR_11->stats.rx_fifo_errors++;
 }

 if (!VAR_13->cd->no_ade && (VAR_12 & VAR_1)) {

  VAR_11->stats.tx_fifo_errors++;
  FUNC_2(VAR_13, VAR_10, VAR_11, "Address Error\n");
 }

 VAR_14 = VAR_9 | VAR_6 | VAR_1 | VAR_7 | VAR_8;
 if (VAR_13->cd->no_ade)
  VAR_14 &= ~VAR_1;
 if (VAR_12 & VAR_14) {

  u32 VAR_15 = FUNC_4(VAR_11, VAR_0);


  FUNC_0(VAR_11, "TX error. status=%8.8x cur_tx=%8.8x dirty_tx=%8.8x state=%8.8x EDTRR=%8.8x.\n",
      VAR_12, VAR_13->cur_tx, VAR_13->dirty_tx,
      (u32)VAR_11->state, VAR_15);

  FUNC_5(VAR_11, 1);


  if (VAR_15 ^ VAR_13->cd->edtrr_trns) {

   FUNC_6(VAR_11, VAR_13->cd->edtrr_trns, VAR_0);
  }

  FUNC_3(VAR_11);
 }
}
