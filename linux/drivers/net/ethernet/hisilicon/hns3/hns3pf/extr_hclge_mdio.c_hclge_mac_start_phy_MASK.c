
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct TYPE_3__ {struct phy_device* phydev; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int FUNC_0 (struct phy_device*) ;

void FUNC_1(struct hclge_dev *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->hw.mac.phydev;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
}
