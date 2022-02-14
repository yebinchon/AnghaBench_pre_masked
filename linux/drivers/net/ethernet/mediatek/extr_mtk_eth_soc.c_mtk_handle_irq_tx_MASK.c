
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int tx_napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_eth*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct mtk_eth *VAR_4 = VAR_3;

 if (FUNC_1(FUNC_3(&VAR_4->tx_napi))) {
  FUNC_0(&VAR_4->tx_napi);
  FUNC_2(VAR_4, VAR_1);
 }

 return VAR_0;
}
