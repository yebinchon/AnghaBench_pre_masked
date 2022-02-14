
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct sk_buff {int data; int protocol; } ;
struct net_device {int name; int base_addr; } ;
struct TYPE_5__ {short rx_bytes; int rx_packets; int rx_dropped; int rx_length_errors; int rx_fifo_errors; int rx_crc_errors; int rx_frame_errors; int rx_errors; } ;
struct TYPE_4__ {int rx_overflow; int rx_dribble; int rx_collision; int rx_runt_frames; } ;
struct de4x5_private {int rx_new; int rx_old; int rxRingSize; TYPE_3__* rx_ring; TYPE_2__ stats; TYPE_1__ pktStats; int linkOK; scalar_t__ tx_enable; scalar_t__ rx_ovf; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {void* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct net_device*,int,short) ;
 int FUNC_3 (struct sk_buff*,short) ;
 int FUNC_4 (struct net_device*,int ,short) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 struct de4x5_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_12)
{
    struct de4x5_private *VAR_13 = FUNC_9(VAR_12);
    u_long VAR_14 = VAR_12->base_addr;
    int VAR_15;
    s32 VAR_16;

    for (VAR_15=VAR_13->rx_new; (s32)FUNC_8(VAR_13->rx_ring[VAR_15].status)>=0;
                                                     VAR_15=VAR_13->rx_new) {
 VAR_16 = (s32)FUNC_8(VAR_13->rx_ring[VAR_15].status);

 if (VAR_13->rx_ovf) {
     if (FUNC_7(VAR_0) & VAR_1) {
  FUNC_5(VAR_12);
  break;
     }
 }

 if (VAR_16 & VAR_6) {
     VAR_13->rx_old = VAR_15;
 }

 if (VAR_16 & VAR_7) {
     if (VAR_13->tx_enable) VAR_13->linkOK++;
     if (VAR_16 & VAR_5) {
  VAR_13->stats.rx_errors++;
  if (VAR_16 & (VAR_9 | VAR_10)) VAR_13->stats.rx_frame_errors++;
  if (VAR_16 & VAR_2) VAR_13->stats.rx_crc_errors++;
  if (VAR_16 & VAR_8) VAR_13->stats.rx_fifo_errors++;
  if (VAR_16 & VAR_10) VAR_13->stats.rx_length_errors++;
  if (VAR_16 & VAR_9) VAR_13->pktStats.rx_runt_frames++;
  if (VAR_16 & VAR_3) VAR_13->pktStats.rx_collision++;
  if (VAR_16 & VAR_4) VAR_13->pktStats.rx_dribble++;
  if (VAR_16 & VAR_8) VAR_13->pktStats.rx_overflow++;
     } else {
  struct sk_buff *VAR_17;
  short VAR_18 = (short)(FUNC_8(VAR_13->rx_ring[VAR_15].status)
                                 >> 16) - 4;

  if ((VAR_17 = FUNC_2(VAR_12, VAR_15, VAR_18)) == ((void*)0)) {
      FUNC_11("%s: Insufficient memory; nuking packet.\n",
                                               VAR_12->name);
      VAR_13->stats.rx_dropped++;
  } else {
      FUNC_3(VAR_17, VAR_18);


      VAR_17->protocol=FUNC_6(VAR_17,VAR_12);
      FUNC_4(VAR_12, VAR_17->data, VAR_18);
      FUNC_10(VAR_17);


      VAR_13->stats.rx_packets++;
       VAR_13->stats.rx_bytes += VAR_18;
  }
     }


     for (;VAR_13->rx_old!=VAR_15;VAR_13->rx_old=(VAR_13->rx_old + 1)%VAR_13->rxRingSize) {
  VAR_13->rx_ring[VAR_13->rx_old].status = FUNC_1(VAR_11);
  FUNC_0();
     }
     VAR_13->rx_ring[VAR_15].status = FUNC_1(VAR_11);
     FUNC_0();
 }




 VAR_13->rx_new = (VAR_13->rx_new + 1) % VAR_13->rxRingSize;
    }

    return 0;
}
