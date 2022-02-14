
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {scalar_t__ phy_mode; int rxq_cnt; int txq_cnt; int cq_cnt; int* irqs; struct platform_device* pdev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_2(struct xgene_enet_pdata *VAR_4)
{
 struct platform_device *VAR_5 = VAR_4->pdev;
 int VAR_6, VAR_7, VAR_8;

 if (FUNC_0(VAR_4->phy_mode))
  VAR_8 = 1;
 else if (VAR_4->phy_mode == VAR_1)
  VAR_8 = 2;
 else
  VAR_8 = VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_1(VAR_5, VAR_6);
  if (VAR_7 <= 0) {
   if (VAR_4->phy_mode == VAR_2) {
    VAR_8 = VAR_6;
    VAR_4->rxq_cnt = VAR_8 / 2;
    VAR_4->txq_cnt = VAR_8 / 2;
    VAR_4->cq_cnt = VAR_8 / 2;
    break;
   }
   return VAR_7 ? : -VAR_0;
  }
  VAR_4->irqs[VAR_6] = VAR_7;
 }

 return 0;
}
