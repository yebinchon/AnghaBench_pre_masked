
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct cc770_priv {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int* data; } ;
struct TYPE_2__ {int * data; int * id; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct cc770_priv*,int ) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_4 ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5, unsigned int VAR_6, u8 VAR_7)
{
 struct cc770_priv *VAR_8 = FUNC_3(VAR_5);
 struct net_device_stats *VAR_9 = &VAR_5->stats;
 struct can_frame *VAR_10;
 struct sk_buff *VAR_11;
 u8 VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_11 = FUNC_0(VAR_5, &VAR_10);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_1(VAR_8, VAR_4[VAR_6].config);

 if (VAR_7 & VAR_3) {





  VAR_10->can_id = VAR_1;
  if (VAR_12 & VAR_2)
   VAR_10->can_id |= VAR_0;
  VAR_10->can_dlc = 0;
 } else {
  if (VAR_12 & VAR_2) {
   VAR_13 = FUNC_1(VAR_8, VAR_4[VAR_6].id[3]);
   VAR_13 |= FUNC_1(VAR_8, VAR_4[VAR_6].id[2]) << 8;
   VAR_13 |= FUNC_1(VAR_8, VAR_4[VAR_6].id[1]) << 16;
   VAR_13 |= FUNC_1(VAR_8, VAR_4[VAR_6].id[0]) << 24;
   VAR_13 >>= 3;
   VAR_13 |= VAR_0;
  } else {
   VAR_13 = FUNC_1(VAR_8, VAR_4[VAR_6].id[1]);
   VAR_13 |= FUNC_1(VAR_8, VAR_4[VAR_6].id[0]) << 8;
   VAR_13 >>= 5;
  }

  VAR_10->can_id = VAR_13;
  VAR_10->can_dlc = FUNC_2((VAR_12 & 0xf0) >> 4);
  for (VAR_14 = 0; VAR_14 < VAR_10->can_dlc; VAR_14++)
   VAR_10->data[VAR_14] = FUNC_1(VAR_8, VAR_4[VAR_6].data[VAR_14]);
 }

 VAR_9->rx_packets++;
 VAR_9->rx_bytes += VAR_10->can_dlc;
 FUNC_4(VAR_11);
}
