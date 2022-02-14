
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_phy {int phy_reset; int vregs; int dev; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct qcom_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_0)
{
 struct qcom_phy *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1->phy_reset);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "cannot deassert pipe reset\n");
  return VAR_2;
 }

 VAR_2 = FUNC_3(FUNC_0(VAR_1->vregs), VAR_1->vregs);
 if (VAR_2)
  FUNC_4(VAR_1->phy_reset);

 return VAR_2;
}
