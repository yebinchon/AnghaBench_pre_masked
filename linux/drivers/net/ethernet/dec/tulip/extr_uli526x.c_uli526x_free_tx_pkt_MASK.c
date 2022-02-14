
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uli526x_board_info {scalar_t__ tx_packet_cnt; int cr6_data; struct tx_desc* tx_remove_ptr; int tx_jabber_timeout; int tx_loss_carrier; int tx_no_carrier; int tx_late_collision; int tx_excessive_collision; int ioaddr; int tx_fifo_underrun; } ;
struct tx_desc {struct tx_desc* next_tx_desc; int tdes1; int tdes0; } ;
struct TYPE_2__ {int collisions; int tx_bytes; int tx_errors; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
    struct uli526x_board_info * VAR_4)
{
 struct tx_desc *VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_4->tx_remove_ptr;
 while(VAR_4->tx_packet_cnt) {
  VAR_6 = FUNC_0(VAR_5->tdes0);
  if (VAR_6 & 0x80000000)
   break;


  VAR_4->tx_packet_cnt--;
  VAR_3->stats.tx_packets++;


  if ( VAR_6 != 0x7fffffff ) {
   VAR_3->stats.collisions += (VAR_6 >> 3) & 0xf;
   VAR_3->stats.tx_bytes += FUNC_0(VAR_5->tdes1) & 0x7ff;
   if (VAR_6 & VAR_1) {
    VAR_3->stats.tx_errors++;
    if (VAR_6 & 0x0002) {
     VAR_4->tx_fifo_underrun++;
     if ( !(VAR_4->cr6_data & VAR_0) ) {
      VAR_4->cr6_data = VAR_4->cr6_data | VAR_0;
      FUNC_2(VAR_4->cr6_data, VAR_4->ioaddr);
     }
    }
    if (VAR_6 & 0x0100)
     VAR_4->tx_excessive_collision++;
    if (VAR_6 & 0x0200)
     VAR_4->tx_late_collision++;
    if (VAR_6 & 0x0400)
     VAR_4->tx_no_carrier++;
    if (VAR_6 & 0x0800)
     VAR_4->tx_loss_carrier++;
    if (VAR_6 & 0x4000)
     VAR_4->tx_jabber_timeout++;
   }
  }

      VAR_5 = VAR_5->next_tx_desc;
 }


 VAR_4->tx_remove_ptr = VAR_5;


 if ( VAR_4->tx_packet_cnt < VAR_2 )
  FUNC_1(VAR_3);
}
