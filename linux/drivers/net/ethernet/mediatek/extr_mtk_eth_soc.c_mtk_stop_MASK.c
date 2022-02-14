
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mtk_mac {int phylink; struct mtk_eth* hw; } ;
struct mtk_eth {TYPE_1__* soc; int rx_napi; int tx_napi; int dma_refcnt; } ;
struct TYPE_2__ {int caps; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mtk_eth*) ;
 int FUNC_2 (struct mtk_eth*,int ) ;
 int FUNC_3 (struct mtk_eth*,int ) ;
 int FUNC_4 (struct mtk_eth*,int ) ;
 int FUNC_5 (int *) ;
 struct mtk_mac* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct mtk_mac *VAR_6 = FUNC_6(VAR_5);
 struct mtk_eth *VAR_7 = VAR_6->hw;

 FUNC_9(VAR_6->phylink);

 FUNC_7(VAR_5);

 FUNC_8(VAR_6->phylink);


 if (!FUNC_10(&VAR_7->dma_refcnt))
  return 0;

 FUNC_4(VAR_7, VAR_4);
 FUNC_2(VAR_7, VAR_3);
 FUNC_5(&VAR_7->tx_napi);
 FUNC_5(&VAR_7->rx_napi);

 if (FUNC_0(VAR_7->soc->caps, VAR_1))
  FUNC_3(VAR_7, VAR_2);
 FUNC_3(VAR_7, VAR_0);

 FUNC_1(VAR_7);

 return 0;
}
