
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct type_frame_head {int sts; int len; } ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct TYPE_2__ {int rx_dropped; int rx_packets; int rx_bytes; int rx_length_errors; int rx_frame_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ks_net {int frame_cnt; int rc_rxqcr; struct type_frame_head* frame_head_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct ks_net*,int ) ;
 int FUNC_2 (struct ks_net*,int *,int) ;
 int FUNC_3 (struct ks_net*,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct ks_net *VAR_7, struct net_device *VAR_8)
{
 u32 VAR_9;
 struct type_frame_head *VAR_10 = VAR_7->frame_head_info;
 struct sk_buff *VAR_11;

 VAR_7->frame_cnt = FUNC_1(VAR_7, VAR_0) >> 8;


 for (VAR_9 = 0; VAR_9 < VAR_7->frame_cnt; VAR_9++) {

  VAR_10->sts = FUNC_1(VAR_7, VAR_2);

  VAR_10->len = FUNC_1(VAR_7, VAR_1);
  VAR_10++;
 }

 VAR_10 = VAR_7->frame_head_info;
 while (VAR_7->frame_cnt--) {
  if (FUNC_9(!(VAR_10->sts & VAR_4) ||
        VAR_10->len >= VAR_6 ||
        VAR_10->len <= 0)) {


   FUNC_3(VAR_7, VAR_3, (VAR_7->rc_rxqcr | VAR_5));
   VAR_8->stats.rx_dropped++;
   if (!(VAR_10->sts & VAR_4))
    VAR_8->stats.rx_frame_errors++;
   else
    VAR_8->stats.rx_length_errors++;
   VAR_10++;
   continue;
  }

  VAR_11 = FUNC_5(VAR_8, VAR_10->len + 16);
  if (FUNC_4(VAR_11)) {
   FUNC_8(VAR_11, 2);

   FUNC_2(VAR_7, (u16 *)VAR_11->data, VAR_10->len);
   FUNC_7(VAR_11, VAR_10->len - 4);
   VAR_11->protocol = FUNC_0(VAR_11, VAR_8);
   FUNC_6(VAR_11);

   VAR_8->stats.rx_bytes += VAR_10->len - 4;
   VAR_8->stats.rx_packets++;
  } else {
   FUNC_3(VAR_7, VAR_3, (VAR_7->rc_rxqcr | VAR_5));
   VAR_8->stats.rx_dropped++;
  }
  VAR_10++;
 }
}
