
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long rx_packets; unsigned long rx_bytes; unsigned long rx_frame_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct hns_nic_ring_data {int (* poll_one ) (struct hns_nic_ring_data*,int,int ) ;} ;
struct hns_nic_priv {struct hns_nic_ring_data* ring_data; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_nic_ring_data*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hns_nic_priv *VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct hns_nic_ring_data *VAR_7;
 struct net_device *VAR_8 = VAR_1->netdev;
 unsigned long VAR_9 = VAR_8->stats.rx_packets;
 unsigned long VAR_10 = VAR_8->stats.rx_bytes;
 unsigned long VAR_11 = VAR_8->stats.rx_frame_errors;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
  VAR_7 = &VAR_1->ring_data[VAR_5];
  (void)VAR_7->poll_one(VAR_7,
       VAR_4, VAR_0);
 }
 VAR_6 = (int)(VAR_8->stats.rx_packets - VAR_9);
 VAR_8->stats.rx_packets = VAR_9;
 VAR_8->stats.rx_bytes = VAR_10;
 VAR_8->stats.rx_frame_errors = VAR_11;
 return VAR_6;
}
