
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int autoneg; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {int autoneg; struct phy_device* phydev; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_0)
{
 struct hclge_vport *VAR_1 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_2 = VAR_1->back;
 struct phy_device *VAR_3 = VAR_2->hw.mac.phydev;

 if (VAR_3)
  return VAR_3->autoneg;

 return VAR_2->hw.mac.autoneg;
}
