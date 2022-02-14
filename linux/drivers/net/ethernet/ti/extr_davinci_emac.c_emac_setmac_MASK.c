
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct emac_priv {int rx_addr_type; TYPE_1__* ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct emac_priv*,scalar_t__,char*) ;
 int FUNC_2 (struct emac_priv*,scalar_t__,char*) ;
 int FUNC_3 (struct emac_priv*,scalar_t__,char*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct emac_priv*) ;

__attribute__((used)) static void FUNC_5(struct emac_priv *VAR_1, u32 VAR_2, char *VAR_3)
{
 struct device *VAR_4 = &VAR_1->ndev->dev;

 if (VAR_1->rx_addr_type == 0) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
 } else if (VAR_1->rx_addr_type == 1) {
  u32 VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_2(VAR_1, VAR_2, VAR_3);
 } else if (VAR_1->rx_addr_type == 2) {
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_2, 1);
  FUNC_1(VAR_1, VAR_2, VAR_3);
 } else {
  if (FUNC_4(VAR_1))
   FUNC_0(VAR_4, "DaVinci EMAC: Wrong addressing\n");
 }
}
