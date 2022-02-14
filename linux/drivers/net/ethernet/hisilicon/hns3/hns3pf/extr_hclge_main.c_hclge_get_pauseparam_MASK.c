
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_6__ {scalar_t__ fc_mode; } ;
struct TYPE_4__ {struct phy_device* phydev; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_3__ tm_info; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hnae3_handle*) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_4, u32 *VAR_5,
     u32 *VAR_6, u32 *VAR_7)
{
 struct hclge_vport *VAR_8 = FUNC_1(VAR_4);
 struct hclge_dev *VAR_9 = VAR_8->back;
 struct phy_device *VAR_10 = VAR_9->hw.mac.phydev;

 *VAR_5 = VAR_10 ? FUNC_0(VAR_4) : 0;

 if (VAR_9->tm_info.fc_mode == VAR_1) {
  *VAR_6 = 0;
  *VAR_7 = 0;
  return;
 }

 if (VAR_9->tm_info.fc_mode == VAR_2) {
  *VAR_6 = 1;
  *VAR_7 = 0;
 } else if (VAR_9->tm_info.fc_mode == VAR_3) {
  *VAR_7 = 1;
  *VAR_6 = 0;
 } else if (VAR_9->tm_info.fc_mode == VAR_0) {
  *VAR_6 = 1;
  *VAR_7 = 1;
 } else {
  *VAR_6 = 0;
  *VAR_7 = 0;
 }
}
