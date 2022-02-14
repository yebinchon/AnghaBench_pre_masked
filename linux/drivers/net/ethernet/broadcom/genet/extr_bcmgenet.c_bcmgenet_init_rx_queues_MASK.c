
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct bcmgenet_priv {TYPE_1__* hw_params; } ;
struct TYPE_2__ {int rx_queues; int rx_bds_per_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcmgenet_priv*,int,int,int,int) ;
 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int,int ) ;
 struct bcmgenet_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7)
{
 struct bcmgenet_priv *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_11 = FUNC_1(VAR_8, VAR_1);
 VAR_10 = VAR_11 & VAR_2;
 VAR_11 &= ~VAR_2;
 FUNC_2(VAR_8, VAR_11, VAR_1);

 VAR_11 = 0;
 VAR_12 = 0;


 for (VAR_9 = 0; VAR_9 < VAR_8->hw_params->rx_queues; VAR_9++) {
  VAR_13 = FUNC_0(VAR_8, VAR_9,
         VAR_8->hw_params->rx_bds_per_q,
         VAR_9 * VAR_8->hw_params->rx_bds_per_q,
         (VAR_9 + 1) *
         VAR_8->hw_params->rx_bds_per_q);
  if (VAR_13)
   return VAR_13;

  VAR_12 |= (1 << VAR_9);
  VAR_11 |= (1 << (VAR_9 + VAR_3));
 }


 VAR_13 = FUNC_0(VAR_8, VAR_0, VAR_5,
        VAR_8->hw_params->rx_queues *
        VAR_8->hw_params->rx_bds_per_q,
        VAR_6);
 if (VAR_13)
  return VAR_13;

 VAR_12 |= (1 << VAR_0);
 VAR_11 |= (1 << (VAR_0 + VAR_3));


 FUNC_2(VAR_8, VAR_12, VAR_4);


 if (VAR_10)
  VAR_11 |= VAR_2;
 FUNC_2(VAR_8, VAR_11, VAR_1);

 return 0;
}
