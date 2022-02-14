
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phy_device {int link; } ;
struct TYPE_4__ {struct phy_device* phydev; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_3__* pdev; TYPE_2__ hw; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_2,
           int VAR_3)
{


 struct phy_device *VAR_4 = VAR_2->hw.mac.phydev;
 int VAR_5 = 0;
 int VAR_6;

 do {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6) {
   FUNC_0(&VAR_2->pdev->dev,
    "phy update link status fail, ret = %d\n", VAR_6);
   return;
  }

  if (VAR_4->link == VAR_3)
   break;

  FUNC_1(VAR_0);
 } while (++VAR_5 < 200);
}
