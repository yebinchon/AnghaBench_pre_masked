
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_si {int cbd_ring; int hw; } ;
struct enetc_ndev_priv {int cls_rules; int dev; struct enetc_si* si; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct enetc_ndev_priv *VAR_0)
{
 struct enetc_si *VAR_1 = VAR_0->si;

 FUNC_0(&VAR_1->hw);
 FUNC_1(VAR_0->dev, &VAR_1->cbd_ring);

 FUNC_2(VAR_0->cls_rules);
}
