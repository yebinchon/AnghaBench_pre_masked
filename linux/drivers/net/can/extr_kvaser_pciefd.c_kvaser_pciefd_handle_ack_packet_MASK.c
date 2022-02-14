
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct kvaser_pciefd_rx_packet {int* header; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct kvaser_pciefd_can {TYPE_1__ can; scalar_t__ reg_base; } ;
struct kvaser_pciefd {size_t nr_channels; struct kvaser_pciefd_can** can; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct kvaser_pciefd_can*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct kvaser_pciefd *VAR_8,
        struct kvaser_pciefd_rx_packet *VAR_9)
{
 struct kvaser_pciefd_can *VAR_10;
 bool VAR_11 = 0;
 u8 VAR_12 = (VAR_9->header[1] >> VAR_6) & 0x7;

 if (VAR_12 >= VAR_8->nr_channels)
  return -VAR_0;

 VAR_10 = VAR_8->can[VAR_12];

 if (VAR_9->header[0] & VAR_1)
  return 0;

 if (VAR_9->header[0] & VAR_3) {
  FUNC_2(VAR_10, VAR_9);
  VAR_11 = 1;
 }

 if (VAR_9->header[0] & VAR_2) {
  FUNC_3(VAR_10->can.dev, "Packet was flushed\n");
 } else {
  int VAR_13 = VAR_9->header[0] & VAR_7;
  int VAR_14 = FUNC_0(VAR_10->can.dev, VAR_13);
  u8 VAR_15 = FUNC_1(VAR_10->reg_base +
        VAR_5) & 0xff;

  if (VAR_15 < VAR_4 &&
      FUNC_4(VAR_10->can.dev))
   FUNC_5(VAR_10->can.dev);

  if (!VAR_11) {
   struct net_device_stats *VAR_16 = &VAR_10->can.dev->stats;

   VAR_16->tx_bytes += VAR_14;
   VAR_16->tx_packets++;
  }
 }

 return 0;
}
