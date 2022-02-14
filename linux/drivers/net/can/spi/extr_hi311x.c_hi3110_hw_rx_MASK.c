
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hi3110_priv {TYPE_2__* net; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int data; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_0 (TYPE_2__*,struct can_frame**) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct spi_device*,int*) ;
 int FUNC_4 (int ,int*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 struct hi3110_priv* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static void FUNC_7(struct spi_device *VAR_10)
{
 struct hi3110_priv *VAR_11 = FUNC_6(VAR_10);
 struct sk_buff *VAR_12;
 struct can_frame *VAR_13;
 u8 VAR_14[VAR_9 - 1];

 VAR_12 = FUNC_0(VAR_11->net, &VAR_13);
 if (!VAR_12) {
  VAR_11->net->stats.rx_dropped++;
  return;
 }

 FUNC_3(VAR_10, VAR_14);
 if (VAR_14[VAR_8] & VAR_7) {

  VAR_13->can_id = VAR_0;
  VAR_13->can_id |=
   (VAR_14[VAR_5] << 21) |
   (((VAR_14[VAR_5 + 1] & 0xE0) >> 5) << 18) |
   ((VAR_14[VAR_5 + 1] & 0x07) << 15) |
   (VAR_14[VAR_5 + 2] << 7) |
   (VAR_14[VAR_5 + 3] >> 1);
 } else {

  VAR_13->can_id =
   (VAR_14[VAR_5] << 3) |
   ((VAR_14[VAR_5 + 1] & 0xE0) >> 5);
 }


 VAR_13->can_dlc = FUNC_2(VAR_14[VAR_4] & 0x0F);

 if (VAR_14[VAR_5 + 3] & VAR_6)
  VAR_13->can_id |= VAR_2;
 else
  FUNC_4(VAR_13->data, VAR_14 + VAR_3,
         VAR_13->can_dlc);

 VAR_11->net->stats.rx_packets++;
 VAR_11->net->stats.rx_bytes += VAR_13->can_dlc;

 FUNC_1(VAR_11->net, VAR_1);

 FUNC_5(VAR_12);
}
