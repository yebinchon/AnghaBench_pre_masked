
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; int per_channel_irq; struct xlgmac_channel* channel_head; } ;
struct xlgmac_channel {scalar_t__ rx_ring; scalar_t__ tx_ring; } ;


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
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_14)
{
 unsigned int VAR_15, VAR_16;
 struct xlgmac_channel *VAR_17;
 unsigned int VAR_18;

 VAR_17 = VAR_14->channel_head;
 for (VAR_18 = 0; VAR_18 < VAR_14->channel_count; VAR_18++, VAR_17++) {

  VAR_15 = FUNC_2(FUNC_0(VAR_17, VAR_13));
  FUNC_3(VAR_15, FUNC_0(VAR_17, VAR_13));


  VAR_16 = 0;






  VAR_16 = FUNC_1(VAR_16,
       VAR_6,
     VAR_5, 1);
  VAR_16 = FUNC_1(VAR_16,
       VAR_2,
     VAR_1, 1);
  VAR_16 = FUNC_1(VAR_16,
       VAR_4,
     VAR_3, 1);

  if (VAR_17->tx_ring) {




   if (!VAR_14->per_channel_irq)
    VAR_16 = FUNC_1(
      VAR_16,
      VAR_12,
      VAR_11,
      1);
  }
  if (VAR_17->rx_ring) {





   VAR_16 = FUNC_1(
     VAR_16,
     VAR_8,
     VAR_7,
     1);
   if (!VAR_14->per_channel_irq)
    VAR_16 = FUNC_1(
      VAR_16,
      VAR_10,
      VAR_9,
      1);
  }

  FUNC_3(VAR_15, FUNC_0(VAR_17, VAR_0));
 }
}
