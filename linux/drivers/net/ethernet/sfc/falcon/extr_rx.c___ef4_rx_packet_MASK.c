
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ef4_rx_queue {int dummy; } ;
struct ef4_rx_buffer {int flags; int len; } ;
struct ef4_nic {int rx_packet_len_offset; int loopback_selftest; TYPE_1__* net_dev; } ;
struct ef4_channel {int rx_pkt_n_frags; TYPE_2__* type; int rx_pkt_index; int rx_queue; struct ef4_nic* efx; } ;
typedef int __le16 ;
struct TYPE_4__ {int receive_skb; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ef4_rx_queue* FUNC_0 (struct ef4_channel*) ;
 int FUNC_1 (struct ef4_rx_queue*,struct ef4_rx_buffer*,int ) ;
 int FUNC_2 (struct ef4_nic*,int *,int ) ;
 int * FUNC_3 (struct ef4_rx_buffer*) ;
 struct ef4_rx_buffer* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ef4_channel*,int *,struct ef4_rx_buffer*,int ) ;
 int FUNC_6 (struct ef4_channel*,struct ef4_rx_buffer*,int ,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct ef4_channel *VAR_4)
{
 struct ef4_nic *VAR_5 = VAR_4->efx;
 struct ef4_rx_buffer *VAR_6 =
  FUNC_4(&VAR_4->rx_queue, VAR_4->rx_pkt_index);
 u8 *VAR_7 = FUNC_3(VAR_6);




 if (VAR_6->flags & VAR_1)
  VAR_6->len = FUNC_7((__le16 *)
        (VAR_7 + VAR_5->rx_packet_len_offset));




 if (FUNC_8(VAR_5->loopback_selftest)) {
  struct ef4_rx_queue *VAR_8;

  FUNC_2(VAR_5, VAR_7, VAR_6->len);
  VAR_8 = FUNC_0(VAR_4);
  FUNC_1(VAR_8, VAR_6,
        VAR_4->rx_pkt_n_frags);
  goto out;
 }

 if (FUNC_8(!(VAR_5->net_dev->features & VAR_3)))
  VAR_6->flags &= ~VAR_0;

 if ((VAR_6->flags & VAR_2) && !VAR_4->type->receive_skb)
  FUNC_6(VAR_4, VAR_6, VAR_4->rx_pkt_n_frags, VAR_7);
 else
  FUNC_5(VAR_4, VAR_7, VAR_6, VAR_4->rx_pkt_n_frags);
out:
 VAR_4->rx_pkt_n_frags = 0;
}
