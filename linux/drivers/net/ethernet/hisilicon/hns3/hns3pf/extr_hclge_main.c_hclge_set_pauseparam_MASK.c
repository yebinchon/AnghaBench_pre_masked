
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct phy_device {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_6__ {scalar_t__ fc_mode; } ;
struct TYPE_8__ {struct phy_device* phydev; } ;
struct TYPE_5__ {TYPE_4__ mac; } ;
struct hclge_dev {TYPE_3__* pdev; TYPE_2__ tm_info; TYPE_1__ hw; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclge_dev*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hnae3_handle*) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hclge_dev*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct hclge_dev*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct phy_device*) ;

__attribute__((used)) static int FUNC_7(struct hnae3_handle *VAR_2, u32 VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 struct hclge_vport *VAR_6 = FUNC_3(VAR_2);
 struct hclge_dev *VAR_7 = VAR_6->back;
 struct phy_device *VAR_8 = VAR_7->hw.mac.phydev;
 u32 VAR_9;

 if (VAR_8) {
  VAR_9 = FUNC_2(VAR_2);
  if (VAR_3 != VAR_9) {
   FUNC_0(&VAR_7->pdev->dev,
     "To change autoneg please use: ethtool -s <dev> autoneg <on|off>\n");
   return -VAR_0;
  }
 }

 if (VAR_7->tm_info.fc_mode == VAR_1) {
  FUNC_0(&VAR_7->pdev->dev,
    "Priority flow control enabled. Cannot set link flow control.\n");
  return -VAR_0;
 }

 FUNC_5(VAR_7, VAR_4, VAR_5);

 FUNC_4(VAR_7, VAR_4, VAR_5);

 if (!VAR_3)
  return FUNC_1(VAR_7, VAR_4, VAR_5);

 if (VAR_8)
  return FUNC_6(VAR_8);

 return -VAR_0;
}
