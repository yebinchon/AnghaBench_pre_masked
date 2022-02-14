
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int ip_summed; int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {int features; TYPE_1__ stats; } ;
struct gelic_descr {struct sk_buff* skb; int dmac_cmd_status; int buf_size; int result_size; int valid_size; int buf_addr; int data_error; int data_status; } ;
struct gelic_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gelic_card*) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_9(struct gelic_descr *VAR_6,
      struct gelic_card *VAR_7,
      struct net_device *VAR_8)

{
 struct sk_buff *VAR_9 = VAR_6->skb;
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_6->data_status);
 VAR_11 = FUNC_0(VAR_6->data_error);

 FUNC_3(FUNC_1(VAR_7), FUNC_0(VAR_6->buf_addr),
    VAR_4,
    VAR_1);

 FUNC_8(VAR_9, FUNC_0(VAR_6->valid_size)?
  FUNC_0(VAR_6->valid_size) :
  FUNC_0(VAR_6->result_size));
 if (!VAR_6->valid_size)
  FUNC_2(FUNC_1(VAR_7), "buffer full %x %x %x\n",
    FUNC_0(VAR_6->result_size),
    FUNC_0(VAR_6->buf_size),
    FUNC_0(VAR_6->dmac_cmd_status));

 VAR_6->skb = ((void*)0);




 FUNC_7(VAR_9, 2);
 VAR_9->protocol = FUNC_4(VAR_9, VAR_8);


 if (VAR_8->features & VAR_5) {
  if ((VAR_10 & VAR_3) &&
      (!(VAR_11 & VAR_2)))
   VAR_9->ip_summed = VAR_0;
  else
   FUNC_6(VAR_9);
 } else
  FUNC_6(VAR_9);


 VAR_8->stats.rx_packets++;
 VAR_8->stats.rx_bytes += VAR_9->len;


 FUNC_5(VAR_9);
}
