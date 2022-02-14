
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int tx_delay; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct xgene_enet_pdata *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_2, "tx-delay", &VAR_3);
 if (VAR_4) {
  VAR_1->tx_delay = 4;
  return 0;
 }

 if (VAR_3 < 0 || VAR_3 > 7) {
  FUNC_0(VAR_2, "Invalid tx-delay specified\n");
  return -VAR_0;
 }

 VAR_1->tx_delay = VAR_3;

 return 0;
}
