
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int* data; int protocol; } ;
struct packet_type {int dummy; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ethhdr {int h_source; } ;
struct bpqdev {int* acpt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct ethhdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int*) ;
 int VAR_2 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;
 struct bpqdev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 char* FUNC_15 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_3, struct net_device *VAR_4, struct packet_type *VAR_5, struct net_device *VAR_6)
{
 int VAR_7;
 char * VAR_8;
 struct ethhdr *VAR_9;
 struct bpqdev *VAR_10;

 if (!FUNC_6(FUNC_2(VAR_4), &VAR_2))
  goto drop;

 if ((VAR_3 = FUNC_16(VAR_3, VAR_0)) == ((void*)0))
  return VAR_1;

 if (!FUNC_10(VAR_3, sizeof(struct ethhdr)))
  goto drop;

 FUNC_11();
 VAR_4 = FUNC_1(VAR_4);

 if (VAR_4 == ((void*)0) || !FUNC_8(VAR_4))
  goto drop_unlock;






 VAR_10 = FUNC_7(VAR_4);

 VAR_9 = FUNC_3(VAR_3);

 if (!(VAR_10->acpt_addr[0] & 0x01) &&
     !FUNC_4(VAR_9->h_source, VAR_10->acpt_addr))
  goto drop_unlock;

 if (FUNC_13(VAR_3, sizeof(struct ethhdr)))
  goto drop_unlock;

 VAR_7 = VAR_3->data[0] + VAR_3->data[1] * 256 - 5;

 FUNC_14(VAR_3, 2);
 FUNC_17(VAR_3, VAR_7);

 VAR_4->stats.rx_packets++;
 VAR_4->stats.rx_bytes += VAR_7;

 VAR_8 = FUNC_15(VAR_3, 1);
 *VAR_8 = 0;

 VAR_3->protocol = FUNC_0(VAR_3, VAR_4);
 FUNC_9(VAR_3);
unlock:

 FUNC_12();

 return 0;
drop_unlock:
 FUNC_5(VAR_3);
 goto unlock;

drop:
 FUNC_5(VAR_3);
 return 0;
}
