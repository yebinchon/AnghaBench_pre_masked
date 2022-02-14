
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmp_phy {struct qcom_qmp* qmp; } ;
struct qcom_qmp {int mode; } ;
struct phy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 struct qmp_phy* FUNC_0 (struct phy*) ;

__attribute__((used)) static int FUNC_1(struct phy *VAR_0,
     enum phy_mode VAR_1, int VAR_2)
{
 struct qmp_phy *VAR_3 = FUNC_0(VAR_0);
 struct qcom_qmp *VAR_4 = VAR_3->qmp;

 VAR_4->mode = VAR_1;

 return 0;
}
