
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtk_mac {int phylink; } ;
struct mtk_eth {int rx_napi; int tx_napi; int * netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_eth*) ;
 int FUNC_1 (struct mtk_eth*) ;
 int FUNC_2 (struct mtk_eth*) ;
 int FUNC_3 (int ) ;
 struct mtk_mac* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct mtk_eth* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct mtk_eth *VAR_2 = FUNC_7(VAR_1);
 struct mtk_mac *VAR_3;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_2->netdev[VAR_4])
   continue;
  FUNC_3(VAR_2->netdev[VAR_4]);
  VAR_3 = FUNC_4(VAR_2->netdev[VAR_4]);
  FUNC_6(VAR_3->phylink);
 }

 FUNC_1(VAR_2);

 FUNC_5(&VAR_2->tx_napi);
 FUNC_5(&VAR_2->rx_napi);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
