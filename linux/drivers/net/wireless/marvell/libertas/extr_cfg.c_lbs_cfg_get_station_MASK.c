
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct TYPE_8__ {int legacy; } ;
struct station_info {int filled; TYPE_3__ txrate; int signal; int rx_packets; int rx_bytes; int tx_packets; int tx_bytes; } ;
struct net_device {int dummy; } ;
struct lbs_private {scalar_t__ cur_rate; TYPE_2__* dev; } ;
typedef int s8 ;
struct TYPE_9__ {scalar_t__ hw_value; int bitrate; } ;
struct TYPE_6__ {int rx_packets; int rx_bytes; int tx_packets; int tx_bytes; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct lbs_private*,int *,int *) ;
 TYPE_4__* VAR_6 ;
 struct lbs_private* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_7, struct net_device *VAR_8,
          const u8 *VAR_9, struct station_info *VAR_10)
{
 struct lbs_private *VAR_11 = FUNC_3(VAR_7);
 s8 VAR_12, VAR_13;
 int VAR_14;
 size_t VAR_15;

 VAR_10->filled |= FUNC_1(VAR_4) |
    FUNC_1(VAR_5) |
    FUNC_1(VAR_0) |
    FUNC_1(VAR_1);
 VAR_10->tx_bytes = VAR_11->dev->stats.tx_bytes;
 VAR_10->tx_packets = VAR_11->dev->stats.tx_packets;
 VAR_10->rx_bytes = VAR_11->dev->stats.rx_bytes;
 VAR_10->rx_packets = VAR_11->dev->stats.rx_packets;


 VAR_14 = FUNC_2(VAR_11, &VAR_12, &VAR_13);
 if (VAR_14 == 0) {
  VAR_10->signal = VAR_12;
  VAR_10->filled |= FUNC_1(VAR_2);
 }


 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_6); VAR_15++) {
  if (VAR_11->cur_rate == VAR_6[VAR_15].hw_value) {
   VAR_10->txrate.legacy = VAR_6[VAR_15].bitrate;
   VAR_10->filled |= FUNC_1(VAR_3);
   break;
  }
 }

 return 0;
}
