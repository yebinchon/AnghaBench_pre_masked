
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipq806x_gmac {int id; void* qsgmii_csr; void* nss_common; void* core_clk; scalar_t__ phy_mode; TYPE_1__* pdev; } ;
struct device {int of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*,int*) ;
 void* FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct ipq806x_gmac *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;

 VAR_1->phy_mode = FUNC_6(VAR_2->of_node);
 if ((int)VAR_1->phy_mode < 0) {
  FUNC_4(VAR_2, "missing phy mode property\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_2->of_node, "qcom,id", &VAR_1->id) < 0) {
  FUNC_4(VAR_2, "missing qcom id property\n");
  return -VAR_0;
 }





 if (VAR_1->id > 3) {
  FUNC_4(VAR_2, "invalid gmac id\n");
  return -VAR_0;
 }

 VAR_1->core_clk = FUNC_5(VAR_2, "stmmaceth");
 if (FUNC_0(VAR_1->core_clk)) {
  FUNC_4(VAR_2, "missing stmmaceth clk property\n");
  return FUNC_1(VAR_1->core_clk);
 }
 FUNC_3(VAR_1->core_clk, 266000000);


 VAR_1->nss_common = FUNC_8(VAR_2->of_node,
          "qcom,nss-common");
 if (FUNC_0(VAR_1->nss_common)) {
  FUNC_4(VAR_2, "missing nss-common node\n");
  return FUNC_1(VAR_1->nss_common);
 }


 VAR_1->qsgmii_csr = FUNC_8(VAR_2->of_node,
          "qcom,qsgmii-csr");
 if (FUNC_0(VAR_1->qsgmii_csr))
  FUNC_4(VAR_2, "missing qsgmii-csr node\n");

 return FUNC_2(VAR_1->qsgmii_csr);
}
