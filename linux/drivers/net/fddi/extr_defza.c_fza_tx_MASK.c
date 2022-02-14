
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; int hard_header_len; } ;
struct TYPE_4__ {int tx_bytes; int tx_fifo_errors; int tx_aborted_errors; int tx_errors; int tx_packets; } ;
struct fza_private {int ring_rmc_txd_index; int ring_rmc_tx_index; int ring_rmc_tx_size; int name; scalar_t__ queue_active; TYPE_2__ stats; TYPE_1__* ring_rmc_tx; } ;
struct TYPE_3__ {int rmc; int own; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fza_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 struct fza_private *VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9, VAR_10;
 int VAR_11;

 while (1) {
  VAR_11 = VAR_8->ring_rmc_txd_index;
  if (VAR_11 == VAR_8->ring_rmc_tx_index)
   break;
  VAR_9 = FUNC_3(&VAR_8->ring_rmc_tx[VAR_11].own);
  if ((VAR_9 & VAR_0) == VAR_4)
   break;

  VAR_10 = FUNC_4(&VAR_8->ring_rmc_tx[VAR_11].rmc);

  if ((VAR_10 & VAR_5) != 0) {
   if ((VAR_10 & VAR_2) ==
       VAR_3) {
    int VAR_12 = (VAR_10 & VAR_1) - 3;


    VAR_8->stats.tx_packets++;
    VAR_8->stats.tx_bytes += VAR_12;
   } else {
    VAR_8->stats.tx_errors++;
    switch (VAR_10 & VAR_2) {
    case 130:
    case 131:
    case 132:
     VAR_8->stats.tx_aborted_errors++;
     break;
    case 128:
     VAR_8->stats.tx_fifo_errors++;
     break;
    case 129:
    default:
     break;
    }
   }
  }

  VAR_8->ring_rmc_txd_index = (VAR_8->ring_rmc_txd_index + 1) %
      VAR_8->ring_rmc_tx_size;
 }

 if (((((VAR_8->ring_rmc_txd_index - 1 + VAR_8->ring_rmc_tx_size) -
        VAR_8->ring_rmc_tx_index) % VAR_8->ring_rmc_tx_size) *
      VAR_6) >= VAR_7->mtu + VAR_7->hard_header_len) {
  if (VAR_8->queue_active) {
   FUNC_1(VAR_7);
   FUNC_2("%s: queue woken\n", VAR_8->name);
  }
 }
}
