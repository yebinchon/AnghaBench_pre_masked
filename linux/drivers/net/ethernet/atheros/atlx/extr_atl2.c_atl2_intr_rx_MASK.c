
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; int data; } ;
struct TYPE_3__ {int pkt_size; int vtag; scalar_t__ align; scalar_t__ crc; scalar_t__ mcast; scalar_t__ ok; scalar_t__ vlan; scalar_t__ update; } ;
struct rx_desc {TYPE_1__ status; int packet; } ;
struct TYPE_4__ {int rx_bytes; int rx_frame_errors; int rx_crc_errors; int multicast; int rx_length_errors; int rx_errors; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct atl2_adapter {int rxd_write_ptr; scalar_t__ rxd_ring_size; scalar_t__ rxd_read_ptr; int hw; struct rx_desc* rxd_ring; struct net_device* netdev; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct atl2_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 struct rx_desc *VAR_4;
 struct sk_buff *VAR_5;

 do {
  VAR_4 = VAR_2->rxd_ring+VAR_2->rxd_write_ptr;
  if (!VAR_4->status.update)
   break;


  VAR_4->status.update = 0;

  if (VAR_4->status.ok && VAR_4->status.pkt_size >= 60) {
   int VAR_6 = (int)(VAR_4->status.pkt_size - 4);

   VAR_5 = FUNC_5(VAR_3, VAR_6);
   if (((void*)0) == VAR_5) {




    VAR_3->stats.rx_dropped++;
    break;
   }
   FUNC_4(VAR_5->data, VAR_4->packet, VAR_6);
   FUNC_7(VAR_5, VAR_6);
   VAR_5->protocol = FUNC_2(VAR_5, VAR_3);
   if (VAR_4->status.vlan) {
    u16 VAR_7 = (VAR_4->status.vtag>>4) |
     ((VAR_4->status.vtag&7) << 13) |
     ((VAR_4->status.vtag&8) << 9);

    FUNC_1(VAR_5, FUNC_3(VAR_0), VAR_7);
   }
   FUNC_6(VAR_5);
   VAR_3->stats.rx_bytes += VAR_6;
   VAR_3->stats.rx_packets++;
  } else {
   VAR_3->stats.rx_errors++;

   if (VAR_4->status.ok && VAR_4->status.pkt_size <= 60)
    VAR_3->stats.rx_length_errors++;
   if (VAR_4->status.mcast)
    VAR_3->stats.multicast++;
   if (VAR_4->status.crc)
    VAR_3->stats.rx_crc_errors++;
   if (VAR_4->status.align)
    VAR_3->stats.rx_frame_errors++;
  }


  if (++VAR_2->rxd_write_ptr == VAR_2->rxd_ring_size)
   VAR_2->rxd_write_ptr = 0;
 } while (1);


 VAR_2->rxd_read_ptr = VAR_2->rxd_write_ptr;
 FUNC_0(&VAR_2->hw, VAR_1, VAR_2->rxd_read_ptr);
}
