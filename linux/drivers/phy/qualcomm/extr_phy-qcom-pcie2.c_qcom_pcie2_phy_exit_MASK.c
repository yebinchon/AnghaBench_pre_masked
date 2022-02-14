
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_phy {int phy_reset; int vregs; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qcom_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct qcom_phy *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(FUNC_0(VAR_1->vregs), VAR_1->vregs);
 FUNC_3(VAR_1->phy_reset);

 return 0;
}
