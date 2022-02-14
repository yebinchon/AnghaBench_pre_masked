
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {int mode; } ;
struct phy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 struct ufs_qcom_phy* FUNC_0 (struct phy*) ;

__attribute__((used)) static
int FUNC_1(struct phy *VAR_1,
       enum phy_mode VAR_2, int VAR_3)
{
 struct ufs_qcom_phy *VAR_4 = FUNC_0(VAR_1);

 VAR_4->mode = VAR_0;

 if (VAR_2 > 0)
  VAR_4->mode = VAR_2;

 return 0;
}
