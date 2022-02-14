
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_priv {int napi; int ndev; int isr_count; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct emac_priv*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct emac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *)VAR_2;
 struct emac_priv *VAR_4 = FUNC_3(VAR_3);

 ++VAR_4->isr_count;
 if (FUNC_1(FUNC_4(VAR_4->ndev))) {
  FUNC_0(VAR_4);
  FUNC_2(&VAR_4->napi);
 } else {

 }
 return VAR_0;
}
