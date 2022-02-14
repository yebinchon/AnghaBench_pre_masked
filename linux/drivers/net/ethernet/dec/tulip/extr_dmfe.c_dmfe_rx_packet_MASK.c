
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct rx_desc {struct rx_desc* next_rx_desc; struct sk_buff* rx_skb_ptr; int rdes2; int rdes0; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_length_errors; int rx_crc_errors; int rx_fifo_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct dmfe_board_info {int cr6_data; int dm910x_chk_mode; struct rx_desc* rx_ready_ptr; int pdev; int interval_rx_cnt; scalar_t__ rx_avail_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (struct dmfe_board_info*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4, struct dmfe_board_info *VAR_5)
{
 struct rx_desc *VAR_6;
 struct sk_buff *VAR_7, *VAR_8;
 int VAR_9;
 u32 VAR_10;

 VAR_6 = VAR_5->rx_ready_ptr;

 while(VAR_5->rx_avail_cnt) {
  VAR_10 = FUNC_4(VAR_6->rdes0);
  if (VAR_10 & 0x80000000)
   break;

  VAR_5->rx_avail_cnt--;
  VAR_5->interval_rx_cnt++;

  FUNC_7(VAR_5->pdev, FUNC_4(VAR_6->rdes2),
     VAR_2, VAR_1);

  if ( (VAR_10 & 0x300) != 0x300) {


   FUNC_0(0, "Reuse SK buffer, rdes0", VAR_10);
   FUNC_2(VAR_5, VAR_6->rx_skb_ptr);
  } else {

   VAR_9 = ( (VAR_10 >> 16) & 0x3fff) - 4;


   if (VAR_10 & 0x8000) {

    VAR_4->stats.rx_errors++;
    if (VAR_10 & 1)
     VAR_4->stats.rx_fifo_errors++;
    if (VAR_10 & 2)
     VAR_4->stats.rx_crc_errors++;
    if (VAR_10 & 0x80)
     VAR_4->stats.rx_length_errors++;
   }

   if ( !(VAR_10 & 0x8000) ||
    ((VAR_5->cr6_data & VAR_0) && (VAR_9>6)) ) {
    VAR_7 = VAR_6->rx_skb_ptr;


    if ( (VAR_5->dm910x_chk_mode & 1) &&
     (FUNC_1(VAR_7->data, VAR_9, 1) !=
     (*(u32 *) (VAR_7->data+VAR_9) ))) {

     FUNC_2(VAR_5, VAR_6->rx_skb_ptr);
     VAR_5->dm910x_chk_mode = 3;
    } else {


     if ((VAR_9 < VAR_3) &&
      ((VAR_8 = FUNC_5(VAR_4, VAR_9 + 2))
      != ((void*)0))) {

      VAR_7 = VAR_8;

      FUNC_10(VAR_7, 2);
      FUNC_8(VAR_6->rx_skb_ptr,
         FUNC_9(VAR_7, VAR_9),
           VAR_9);
      FUNC_2(VAR_5, VAR_6->rx_skb_ptr);
     } else
      FUNC_9(VAR_7, VAR_9);

     VAR_7->protocol = FUNC_3(VAR_7, VAR_4);
     FUNC_6(VAR_7);
     VAR_4->stats.rx_packets++;
     VAR_4->stats.rx_bytes += VAR_9;
    }
   } else {

    FUNC_0(0, "Reuse SK buffer, rdes0", VAR_10);
    FUNC_2(VAR_5, VAR_6->rx_skb_ptr);
   }
  }

  VAR_6 = VAR_6->next_rx_desc;
 }

 VAR_5->rx_ready_ptr = VAR_6;
}
