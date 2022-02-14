
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct TYPE_4__ {struct phy_device* phydev; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_3__* pdev; TYPE_2__ hw; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hclge_dev*,int) ;
 int FUNC_2 (struct hclge_dev*,struct phy_device*) ;
 int FUNC_3 (struct hclge_dev*,struct phy_device*) ;
 int FUNC_4 (struct hclge_dev*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_2, bool VAR_3)
{
 struct phy_device *VAR_4 = VAR_2->hw.mac.phydev;
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 if (VAR_3)
  VAR_5 = FUNC_3(VAR_2, VAR_4);
 else
  VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_2->pdev->dev,
   "set phy loopback fail, ret = %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_2, VAR_3);

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_1);
 if (VAR_5)
  FUNC_0(&VAR_2->pdev->dev,
   "phy loopback config mac mode timeout\n");

 return VAR_5;
}
