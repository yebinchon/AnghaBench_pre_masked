
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct peak_usb_device {struct net_device* netdev; } ;
struct net_device_stats {int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_dlc; int can_id; int * data; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct peak_usb_device *VAR_6, struct sk_buff *VAR_7,
          u8 *VAR_8, size_t *VAR_9)
{
 struct net_device *VAR_10 = VAR_6->netdev;
 struct net_device_stats *VAR_11 = &VAR_10->stats;
 struct can_frame *VAR_12 = (struct can_frame *)VAR_7->data;
 u8 *VAR_13;

 VAR_8[0] = 2;
 VAR_8[1] = 1;

 VAR_13 = VAR_8 + VAR_3;


 *VAR_13 = VAR_12->can_dlc;
 if (VAR_12->can_id & VAR_2)
  *VAR_13 |= VAR_5;


 if (VAR_12->can_id & VAR_0) {
  __le32 VAR_14 = FUNC_1((VAR_12->can_id & VAR_1) << 3);

  *VAR_13 |= VAR_4;
  FUNC_2(++VAR_13, &VAR_14, 4);
  VAR_13 += 4;
 } else {
  __le16 VAR_15 = FUNC_0((VAR_12->can_id & VAR_1) << 5);

  FUNC_2(++VAR_13, &VAR_15, 2);
  VAR_13 += 2;
 }


 if (!(VAR_12->can_id & VAR_2)) {
  FUNC_2(VAR_13, VAR_12->data, VAR_12->can_dlc);
  VAR_13 += VAR_12->can_dlc;
 }

 VAR_8[(*VAR_9)-1] = (u8)(VAR_11->tx_packets & 0xff);

 return 0;
}
