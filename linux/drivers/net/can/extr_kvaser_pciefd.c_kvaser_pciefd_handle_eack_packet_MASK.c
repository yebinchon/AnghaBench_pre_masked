
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct kvaser_pciefd_rx_packet {int* header; } ;
struct TYPE_5__ {TYPE_2__* dev; } ;
struct kvaser_pciefd_can {TYPE_1__ can; scalar_t__ reg_base; } ;
struct kvaser_pciefd {size_t nr_channels; struct kvaser_pciefd_can** can; } ;
struct TYPE_6__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct kvaser_pciefd *VAR_7,
         struct kvaser_pciefd_rx_packet *VAR_8)
{
 struct kvaser_pciefd_can *VAR_9;
 u8 VAR_10 = (VAR_8->header[1] >> VAR_5) & 0x7;

 if (VAR_10 >= VAR_7->nr_channels)
  return -VAR_0;

 VAR_9 = VAR_7->can[VAR_10];


 if (VAR_8->header[0] & VAR_1) {
  u8 VAR_11 = FUNC_1(VAR_9->reg_base +
        VAR_4) & 0xff;

  if (VAR_11 == 0)
   FUNC_2(VAR_2,
      VAR_9->reg_base + VAR_3);
 } else {
  int VAR_12 = VAR_8->header[0] & VAR_6;
  int VAR_13 = FUNC_0(VAR_9->can.dev, VAR_12);
  struct net_device_stats *VAR_14 = &VAR_9->can.dev->stats;

  VAR_14->tx_bytes += VAR_13;
  VAR_14->tx_packets++;

  if (FUNC_3(VAR_9->can.dev))
   FUNC_4(VAR_9->can.dev);
 }

 return 0;
}
