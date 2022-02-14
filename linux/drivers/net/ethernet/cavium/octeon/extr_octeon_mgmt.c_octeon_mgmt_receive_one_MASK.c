
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; scalar_t__ len; } ;
union mgmt_port_ring_entry {void* d64; TYPE_1__ s; } ;
struct TYPE_6__ {int ircnt; } ;
union cvmx_mixx_ircnt {scalar_t__ u64; TYPE_3__ s; } ;
typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ len; int protocol; scalar_t__ data; } ;
struct octeon_mgmt {scalar_t__ mix; scalar_t__ has_rx_tstamp; struct net_device* netdev; } ;
struct TYPE_5__ {int rx_errors; int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (struct octeon_mgmt*,struct sk_buff**) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ,scalar_t__,int ) ;
 struct skb_shared_hwtstamps* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct octeon_mgmt *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 union cvmx_mixx_ircnt VAR_6;
 union mgmt_port_ring_entry VAR_7;
 struct sk_buff *VAR_8;
 struct sk_buff *VAR_9;
 struct sk_buff *VAR_10;
 union mgmt_port_ring_entry VAR_11;
 int VAR_12 = 1;


 VAR_7.d64 = FUNC_7(VAR_4, &VAR_8);
 if (FUNC_4(VAR_7.s.code == VAR_2)) {

  FUNC_11(VAR_8, VAR_7.s.len);
good:

  if (VAR_4->has_rx_tstamp) {

   u64 VAR_13 = *(u64 *)VAR_8->data;
   struct skb_shared_hwtstamps *VAR_14;
   VAR_14 = FUNC_10(VAR_8);
   VAR_14->hwtstamp = FUNC_6(VAR_13);
   FUNC_0(VAR_8, 8);
  }
  VAR_8->protocol = FUNC_3(VAR_8, VAR_5);
  VAR_5->stats.rx_packets++;
  VAR_5->stats.rx_bytes += VAR_8->len;
  FUNC_5(VAR_8);
  VAR_12 = 0;
 } else if (VAR_7.s.code == VAR_3) {







  FUNC_11(VAR_8, VAR_7.s.len);
  do {
   VAR_11 = FUNC_7(VAR_4, &VAR_9);
   if (VAR_11 != VAR_3
    && VAR_11 != VAR_2)
    goto split_error;
   FUNC_11(VAR_9, VAR_11);
   VAR_10 = FUNC_9(VAR_8, 0, VAR_9->len,
        VAR_0);
   if (!VAR_10)
    goto split_error;
   if (FUNC_8(VAR_9, 0, FUNC_12(VAR_10),
       VAR_9->len))
    goto split_error;
   FUNC_11(VAR_10, VAR_9->len);
   FUNC_2(VAR_8);
   FUNC_2(VAR_9);
   VAR_8 = VAR_10;
  } while (VAR_11 == VAR_3);
  goto good;
 } else {

  FUNC_2(VAR_8);



 }
 goto done;
split_error:

 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 while (VAR_11 == VAR_3) {
  VAR_11 = FUNC_7(VAR_4, &VAR_9);
  FUNC_2(VAR_9);
 }
 VAR_5->stats.rx_errors++;

done:

 VAR_6.u64 = 0;
 VAR_6.s.ircnt = 1;
 FUNC_1(VAR_4->mix + VAR_1, VAR_6.u64);
 return VAR_12;
}
