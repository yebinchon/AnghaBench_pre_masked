
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uli526x_board_info {int cr6_data; struct rx_desc* rx_ready_ptr; int pdev; int interval_rx_cnt; scalar_t__ rx_avail_cnt; } ;
struct sk_buff {int protocol; } ;
struct rx_desc {struct rx_desc* next_rx_desc; struct sk_buff* rx_skb_ptr; int rdes2; int rdes0; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_length_errors; int rx_crc_errors; int rx_fifo_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct uli526x_board_info*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4, struct uli526x_board_info * VAR_5)
{
 struct rx_desc *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_6 = VAR_5->rx_ready_ptr;

 while(VAR_5->rx_avail_cnt) {
  VAR_9 = FUNC_2(VAR_6->rdes0);
  if (VAR_9 & 0x80000000)
  {
   break;
  }

  VAR_5->rx_avail_cnt--;
  VAR_5->interval_rx_cnt++;

  FUNC_5(VAR_5->pdev, FUNC_2(VAR_6->rdes2), VAR_2, VAR_1);
  if ( (VAR_9 & 0x300) != 0x300) {


   FUNC_0(0, "Reuse SK buffer, rdes0", VAR_9);
   FUNC_10(VAR_5, VAR_6->rx_skb_ptr);
  } else {

   VAR_8 = ( (VAR_9 >> 16) & 0x3fff) - 4;


   if (VAR_9 & 0x8000) {

    VAR_4->stats.rx_errors++;
    if (VAR_9 & 1)
     VAR_4->stats.rx_fifo_errors++;
    if (VAR_9 & 2)
     VAR_4->stats.rx_crc_errors++;
    if (VAR_9 & 0x80)
     VAR_4->stats.rx_length_errors++;
   }

   if ( !(VAR_9 & 0x8000) ||
    ((VAR_5->cr6_data & VAR_0) && (VAR_8>6)) ) {
    struct sk_buff *VAR_10 = ((void*)0);

    VAR_7 = VAR_6->rx_skb_ptr;



    if ((VAR_8 < VAR_3) &&
        (((VAR_10 = FUNC_3(VAR_4, VAR_8 + 2)) != ((void*)0)))) {
     VAR_7 = VAR_10;

     FUNC_8(VAR_7, 2);
     FUNC_7(VAR_7,
           FUNC_9(VAR_6->rx_skb_ptr),
           VAR_8);
     FUNC_10(VAR_5, VAR_6->rx_skb_ptr);
    } else
     FUNC_6(VAR_7, VAR_8);

    VAR_7->protocol = FUNC_1(VAR_7, VAR_4);
    FUNC_4(VAR_7);
    VAR_4->stats.rx_packets++;
    VAR_4->stats.rx_bytes += VAR_8;

   } else {

    FUNC_0(0, "Reuse SK buffer, rdes0", VAR_9);
    FUNC_10(VAR_5, VAR_6->rx_skb_ptr);
   }
  }

  VAR_6 = VAR_6->next_rx_desc;
 }

 VAR_5->rx_ready_ptr = VAR_6;
}
