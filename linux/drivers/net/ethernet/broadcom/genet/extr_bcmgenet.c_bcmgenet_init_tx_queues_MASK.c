
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct bcmgenet_priv {TYPE_1__* hw_params; } ;
struct TYPE_2__ {int tx_queues; int tx_bds_per_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct bcmgenet_priv*,int,int,int,int) ;
 int FUNC_3 (struct bcmgenet_priv*,int ) ;
 int FUNC_4 (struct bcmgenet_priv*,int,int ) ;
 struct bcmgenet_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_13)
{
 struct bcmgenet_priv *VAR_14 = FUNC_5(VAR_13);
 u32 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 u32 VAR_19[3] = {0, 0, 0};

 VAR_17 = FUNC_3(VAR_14, VAR_3);
 VAR_16 = VAR_17 & VAR_4;
 VAR_17 &= ~VAR_4;
 FUNC_4(VAR_14, VAR_17, VAR_3);

 VAR_17 = 0;
 VAR_18 = 0;


 FUNC_4(VAR_14, VAR_1, VAR_2);


 for (VAR_15 = 0; VAR_15 < VAR_14->hw_params->tx_queues; VAR_15++) {
  FUNC_2(VAR_14, VAR_15, VAR_14->hw_params->tx_bds_per_q,
          VAR_15 * VAR_14->hw_params->tx_bds_per_q,
          (VAR_15 + 1) * VAR_14->hw_params->tx_bds_per_q);
  VAR_18 |= (1 << VAR_15);
  VAR_17 |= (1 << (VAR_15 + VAR_8));
  VAR_19[FUNC_0(VAR_15)] |=
   ((VAR_10 + VAR_15) << FUNC_1(VAR_15));
 }


 FUNC_2(VAR_14, VAR_0, VAR_11,
         VAR_14->hw_params->tx_queues *
         VAR_14->hw_params->tx_bds_per_q,
         VAR_12);
 VAR_18 |= (1 << VAR_0);
 VAR_17 |= (1 << (VAR_0 + VAR_8));
 VAR_19[FUNC_0(VAR_0)] |=
  ((VAR_10 + VAR_14->hw_params->tx_queues) <<
   FUNC_1(VAR_0));


 FUNC_4(VAR_14, VAR_19[0], VAR_5);
 FUNC_4(VAR_14, VAR_19[1], VAR_6);
 FUNC_4(VAR_14, VAR_19[2], VAR_7);


 FUNC_4(VAR_14, VAR_18, VAR_9);


 if (VAR_16)
  VAR_17 |= VAR_4;
 FUNC_4(VAR_14, VAR_17, VAR_3);
}
