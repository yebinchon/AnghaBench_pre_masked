
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
union ixgbe_adv_tx_desc {TYPE_1__ wb; } ;
struct TYPE_5__ {scalar_t__ length; } ;
struct TYPE_6__ {TYPE_2__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_3__ wb; } ;
typedef size_t u16 ;
struct ixgbe_tx_buffer {int skb; } ;
struct ixgbe_rx_buffer {int dma; } ;
struct ixgbe_ring {size_t next_to_clean; size_t next_to_use; size_t count; int dev; struct ixgbe_rx_buffer* rx_buffer_info; struct ixgbe_tx_buffer* tx_buffer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 union ixgbe_adv_rx_desc* FUNC_0 (struct ixgbe_ring*,size_t) ;
 int VAR_2 ;
 union ixgbe_adv_tx_desc* FUNC_1 (struct ixgbe_ring*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct ixgbe_tx_buffer*,int ) ;
 int FUNC_7 (struct ixgbe_tx_buffer*,int ) ;
 int FUNC_8 (struct ixgbe_tx_buffer*,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (struct ixgbe_ring*,size_t) ;
 scalar_t__ FUNC_11 (struct ixgbe_rx_buffer*,unsigned int) ;
 int FUNC_12 (struct ixgbe_ring*) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ixgbe_ring*) ;

__attribute__((used)) static u16 FUNC_15(struct ixgbe_ring *VAR_5,
      struct ixgbe_ring *VAR_6,
      unsigned int VAR_7)
{
 union ixgbe_adv_rx_desc *VAR_8;
 u16 VAR_9, VAR_10, VAR_11 = 0;


 VAR_9 = VAR_5->next_to_clean;
 VAR_10 = VAR_6->next_to_clean;
 VAR_8 = FUNC_0(VAR_5, VAR_9);

 while (VAR_10 != VAR_6->next_to_use) {
  union ixgbe_adv_tx_desc *VAR_12;
  struct ixgbe_tx_buffer *VAR_13;

  VAR_12 = FUNC_1(VAR_6, VAR_10);


  if (!(VAR_12->wb.status & FUNC_2(VAR_2)))
   return VAR_11;


  VAR_13 = &VAR_6->tx_buffer_info[VAR_10];


  FUNC_3(VAR_13->skb);


  FUNC_9(VAR_6->dev,
     FUNC_6(VAR_13, VAR_3),
     FUNC_7(VAR_13, VAR_4),
     VAR_1);
  FUNC_8(VAR_13, VAR_4, 0);


  VAR_10++;
  if (VAR_10 == VAR_6->count)
   VAR_10 = 0;
 }

 while (VAR_8->wb.upper.length) {
  struct ixgbe_rx_buffer *VAR_14;


  VAR_14 = &VAR_5->rx_buffer_info[VAR_9];


  FUNC_4(VAR_5->dev,
     VAR_14->dma,
     FUNC_12(VAR_5),
     VAR_0);


  if (FUNC_11(VAR_14, VAR_7))
   VAR_11++;
  else
   break;


  FUNC_5(VAR_5->dev,
        VAR_14->dma,
        FUNC_12(VAR_5),
        VAR_0);


  VAR_9++;
  if (VAR_9 == VAR_5->count)
   VAR_9 = 0;


  VAR_8 = FUNC_0(VAR_5, VAR_9);
 }

 FUNC_13(FUNC_14(VAR_6));


 FUNC_10(VAR_5, VAR_11);
 VAR_5->next_to_clean = VAR_9;
 VAR_6->next_to_clean = VAR_10;

 return VAR_11;
}
