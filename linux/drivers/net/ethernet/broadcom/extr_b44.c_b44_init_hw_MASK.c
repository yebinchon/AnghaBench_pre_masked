
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b44 {int tx_ring_dma; int dma_offset; int rx_ring_dma; int rx_pending; int rx_prod; TYPE_1__* dev; } ;
struct TYPE_3__ {int mtu; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*) ;
 int FUNC_4 (struct b44*,int ) ;
 int FUNC_5 (struct b44*,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct b44 *VAR_26, int VAR_27)
{
 u32 VAR_28;

 FUNC_1(VAR_26, VAR_0);
 if (VAR_27 == VAR_7) {
  FUNC_2(VAR_26);
  FUNC_3(VAR_26);
 }


 FUNC_5(VAR_26, VAR_8, VAR_20 | VAR_21);
 FUNC_5(VAR_26, VAR_11, (1 << VAR_23));


 FUNC_0(VAR_26->dev);


 FUNC_5(VAR_26, VAR_12, VAR_26->dev->mtu + VAR_19 + 8 + VAR_24);
 FUNC_5(VAR_26, VAR_13, VAR_26->dev->mtu + VAR_19 + 8 + VAR_24);

 FUNC_5(VAR_26, VAR_14, 56);
 if (VAR_27 == VAR_10) {
  FUNC_5(VAR_26, VAR_2, (VAR_15 |
          (VAR_25 << VAR_16)));
 } else {
  FUNC_5(VAR_26, VAR_5, VAR_17);
  FUNC_5(VAR_26, VAR_4, VAR_26->tx_ring_dma + VAR_26->dma_offset);
  FUNC_5(VAR_26, VAR_2, (VAR_15 |
          (VAR_25 << VAR_16)));
  FUNC_5(VAR_26, VAR_1, VAR_26->rx_ring_dma + VAR_26->dma_offset);

  FUNC_5(VAR_26, VAR_3, VAR_26->rx_pending);
  VAR_26->rx_prod = VAR_26->rx_pending;

  FUNC_5(VAR_26, VAR_9, VAR_22);
 }

 VAR_28 = FUNC_4(VAR_26, VAR_6);
 FUNC_5(VAR_26, VAR_6, (VAR_28 | VAR_18));

 FUNC_6(VAR_26->dev);
}
