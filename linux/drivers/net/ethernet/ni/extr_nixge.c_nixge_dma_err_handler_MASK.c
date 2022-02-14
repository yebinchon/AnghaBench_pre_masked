
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nixge_tx_skb {int dummy; } ;
struct nixge_priv {scalar_t__ tx_bd_p; scalar_t__ rx_bd_p; scalar_t__ rx_bd_ci; scalar_t__ tx_bd_tail; scalar_t__ tx_bd_ci; struct nixge_hw_dma_bd* rx_bd_v; struct nixge_tx_skb* tx_skb; struct nixge_hw_dma_bd* tx_bd_v; } ;
struct nixge_hw_dma_bd {scalar_t__ status; scalar_t__ cntrl; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct nixge_priv*,int ) ;
 size_t FUNC_1 (struct nixge_priv*,int ) ;
 int FUNC_2 (struct nixge_priv*,int ,scalar_t__) ;
 int FUNC_3 (struct nixge_priv*,int ,size_t) ;
 int FUNC_4 (struct nixge_hw_dma_bd*,int ) ;
 int FUNC_5 (struct nixge_hw_dma_bd*,int ) ;
 int FUNC_6 (struct nixge_priv*,struct nixge_tx_skb*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_17)
{
 struct nixge_priv *VAR_18 = (struct nixge_priv *)VAR_17;
 struct nixge_hw_dma_bd *VAR_19;
 struct nixge_tx_skb *VAR_20;
 u32 VAR_21, VAR_22;

 FUNC_0(VAR_18, VAR_16);
 FUNC_0(VAR_18, VAR_13);

 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  VAR_19 = &VAR_18->tx_bd_v[VAR_22];
  VAR_20 = &VAR_18->tx_skb[VAR_22];
  FUNC_6(VAR_18, VAR_20);

  FUNC_5(VAR_19, 0);
  VAR_19->cntrl = 0;
  VAR_19->status = 0;
  FUNC_4(VAR_19, 0);
 }

 for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++) {
  VAR_19 = &VAR_18->rx_bd_v[VAR_22];
  VAR_19->status = 0;
 }

 VAR_18->tx_bd_ci = 0;
 VAR_18->tx_bd_tail = 0;
 VAR_18->rx_bd_ci = 0;


 VAR_21 = FUNC_1(VAR_18, VAR_13);

 VAR_21 = ((VAR_21 & ~VAR_2) |
       (VAR_7 << VAR_3));

 VAR_21 = ((VAR_21 & ~VAR_5) |
       (VAR_8 << VAR_6));

 VAR_21 |= VAR_11;

 FUNC_3(VAR_18, VAR_13, VAR_21);


 VAR_21 = FUNC_1(VAR_18, VAR_16);

 VAR_21 = (((VAR_21 & ~VAR_2)) |
       (VAR_9 << VAR_3));

 VAR_21 = (((VAR_21 & ~VAR_5)) |
       (VAR_10 << VAR_6));

 VAR_21 |= VAR_11;

 FUNC_3(VAR_18, VAR_16, VAR_21);




 FUNC_2(VAR_18, VAR_12, VAR_18->rx_bd_p);
 VAR_21 = FUNC_1(VAR_18, VAR_13);
 FUNC_3(VAR_18, VAR_13,
       VAR_21 | VAR_4);
 FUNC_2(VAR_18, VAR_14, VAR_18->rx_bd_p +
       (sizeof(*VAR_18->rx_bd_v) * (VAR_0 - 1)));





 FUNC_2(VAR_18, VAR_15, VAR_18->tx_bd_p);
 VAR_21 = FUNC_1(VAR_18, VAR_16);
 FUNC_3(VAR_18, VAR_16,
       VAR_21 | VAR_4);
}
