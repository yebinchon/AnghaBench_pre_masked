
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union e1000_adv_rx_desc {TYPE_2__ wb; } ;
typedef size_t u16 ;
struct igb_tx_buffer {int skb; } ;
struct igb_rx_buffer {int dma; } ;
struct igb_ring {size_t next_to_clean; size_t count; int dev; struct igb_tx_buffer* tx_buffer_info; struct igb_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 union e1000_adv_rx_desc* FUNC_0 (struct igb_ring*,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 int FUNC_4 (struct igb_tx_buffer*,int ) ;
 int FUNC_5 (struct igb_tx_buffer*,int ) ;
 int FUNC_6 (struct igb_tx_buffer*,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct igb_ring*,size_t) ;
 scalar_t__ FUNC_9 (struct igb_rx_buffer*,unsigned int) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct igb_ring*) ;

__attribute__((used)) static int FUNC_12(struct igb_ring *VAR_4,
    struct igb_ring *VAR_5,
    unsigned int VAR_6)
{
 union e1000_adv_rx_desc *VAR_7;
 struct igb_rx_buffer *VAR_8;
 struct igb_tx_buffer *VAR_9;
 u16 VAR_10, VAR_11, VAR_12 = 0;


 VAR_10 = VAR_4->next_to_clean;
 VAR_11 = VAR_5->next_to_clean;
 VAR_7 = FUNC_0(VAR_4, VAR_10);

 while (VAR_7->wb.upper.length) {

  VAR_8 = &VAR_4->rx_buffer_info[VAR_10];


  FUNC_2(VAR_4->dev,
     VAR_8->dma,
     VAR_6,
     VAR_0);


  if (FUNC_9(VAR_8, VAR_6))
   VAR_12++;


  FUNC_3(VAR_4->dev,
        VAR_8->dma,
        VAR_6,
        VAR_0);


  VAR_9 = &VAR_5->tx_buffer_info[VAR_11];


  FUNC_1(VAR_9->skb);


  FUNC_7(VAR_5->dev,
     FUNC_4(VAR_9, VAR_2),
     FUNC_5(VAR_9, VAR_3),
     VAR_1);
  FUNC_6(VAR_9, VAR_3, 0);


  VAR_10++;
  if (VAR_10 == VAR_4->count)
   VAR_10 = 0;
  VAR_11++;
  if (VAR_11 == VAR_5->count)
   VAR_11 = 0;


  VAR_7 = FUNC_0(VAR_4, VAR_10);
 }

 FUNC_10(FUNC_11(VAR_5));


 FUNC_8(VAR_4, VAR_12);
 VAR_4->next_to_clean = VAR_10;
 VAR_5->next_to_clean = VAR_11;

 return VAR_12;
}
