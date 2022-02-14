
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {struct reset_control* ufs_reset; int dev; } ;
struct reset_control {int dummy; } ;


 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 struct reset_control* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ufs_qcom_phy *VAR_0)
{
 struct reset_control *VAR_1;

 if (VAR_0->ufs_reset)
  return 0;

 VAR_1 = FUNC_2(VAR_0->dev, 0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_0->ufs_reset = VAR_1;
 return 0;
}
