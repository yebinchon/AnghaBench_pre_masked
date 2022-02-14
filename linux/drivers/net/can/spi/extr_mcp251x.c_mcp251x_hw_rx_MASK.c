
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dev; } ;
struct sk_buff {int dummy; } ;
struct mcp251x_priv {TYPE_2__* net; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int data; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int) ;
 int VAR_16 ;
 struct sk_buff* FUNC_1 (TYPE_2__*,struct can_frame**) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct spi_device*,int*,int) ;
 int FUNC_6 (int ,int*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 struct mcp251x_priv* FUNC_8 (struct spi_device*) ;

__attribute__((used)) static void FUNC_9(struct spi_device *VAR_17, int VAR_18)
{
 struct mcp251x_priv *VAR_19 = FUNC_8(VAR_17);
 struct sk_buff *VAR_20;
 struct can_frame *VAR_21;
 u8 VAR_22[VAR_16];

 VAR_20 = FUNC_1(VAR_19->net, &VAR_21);
 if (!VAR_20) {
  FUNC_3(&VAR_17->dev, "cannot allocate RX skb\n");
  VAR_19->net->stats.rx_dropped++;
  return;
 }

 FUNC_5(VAR_17, VAR_22, VAR_18);
 if (VAR_22[VAR_13] & VAR_12) {

  VAR_21->can_id = VAR_0;
  VAR_21->can_id |=

   FUNC_0(VAR_22[VAR_13] & VAR_11, 2) |
   FUNC_0(VAR_22[VAR_8], 1) |
   FUNC_0(VAR_22[VAR_7], 0) |

   (((VAR_22[VAR_9] << VAR_10) |
     (VAR_22[VAR_13] >> VAR_14)) << 18);

  if (VAR_22[VAR_5] & VAR_6)
   VAR_21->can_id |= VAR_2;
 } else {

  VAR_21->can_id =
   (VAR_22[VAR_9] << VAR_10) |
   (VAR_22[VAR_13] >> VAR_14);
  if (VAR_22[VAR_13] & VAR_15)
   VAR_21->can_id |= VAR_2;
 }

 VAR_21->can_dlc = FUNC_4(VAR_22[VAR_5] & VAR_4);
 FUNC_6(VAR_21->data, VAR_22 + VAR_3, VAR_21->can_dlc);

 VAR_19->net->stats.rx_packets++;
 VAR_19->net->stats.rx_bytes += VAR_21->can_dlc;

 FUNC_2(VAR_19->net, VAR_1);

 FUNC_7(VAR_20);
}
