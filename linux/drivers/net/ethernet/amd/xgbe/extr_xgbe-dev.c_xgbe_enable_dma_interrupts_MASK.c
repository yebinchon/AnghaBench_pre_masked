
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; } ;
struct xgbe_prv_data {unsigned int channel_count; scalar_t__ channel_irq_mode; int per_channel_irq; struct xgbe_channel** channel; TYPE_1__ hw_feat; } ;
struct xgbe_channel {scalar_t__ curr_ier; scalar_t__ rx_ring; scalar_t__ tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct xgbe_channel*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,scalar_t__) ;
 unsigned int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_14)
{
 struct xgbe_channel *VAR_15;
 unsigned int VAR_16, VAR_17;


 if (VAR_14->channel_irq_mode)
  FUNC_3(VAR_14, VAR_4, VAR_6,
       VAR_14->channel_irq_mode);

 VAR_17 = FUNC_2(VAR_14->hw_feat.version, VAR_7, VAR_12);

 for (VAR_16 = 0; VAR_16 < VAR_14->channel_count; VAR_16++) {
  VAR_15 = VAR_14->channel[VAR_16];


  FUNC_1(VAR_15, VAR_3,
      FUNC_0(VAR_15, VAR_3));


  VAR_15->curr_ier = 0;






  if (VAR_17 < 0x21) {
   FUNC_4(VAR_15->curr_ier, VAR_2, VAR_9, 1);
   FUNC_4(VAR_15->curr_ier, VAR_2, VAR_1, 1);
  } else {
   FUNC_4(VAR_15->curr_ier, VAR_2, VAR_8, 1);
   FUNC_4(VAR_15->curr_ier, VAR_2, VAR_0, 1);
  }
  FUNC_4(VAR_15->curr_ier, VAR_2, VAR_5, 1);

  if (VAR_15->tx_ring) {





   if (!VAR_14->per_channel_irq || VAR_14->channel_irq_mode)
    FUNC_4(VAR_15->curr_ier,
            VAR_2, VAR_13, 1);
  }
  if (VAR_15->rx_ring) {






   FUNC_4(VAR_15->curr_ier, VAR_2, VAR_10, 1);
   if (!VAR_14->per_channel_irq || VAR_14->channel_irq_mode)
    FUNC_4(VAR_15->curr_ier,
            VAR_2, VAR_11, 1);
  }

  FUNC_1(VAR_15, VAR_2, VAR_15->curr_ier);
 }
}
