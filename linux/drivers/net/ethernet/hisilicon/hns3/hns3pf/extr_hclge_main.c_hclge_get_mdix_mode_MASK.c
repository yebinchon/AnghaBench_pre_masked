
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct phy_device {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {struct phy_device* phydev; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ,int ) ;
 unsigned int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hnae3_handle *VAR_13,
    u8 *VAR_14, u8 *VAR_15)
{
 struct hclge_vport *VAR_16 = FUNC_0(VAR_13);
 struct hclge_dev *VAR_17 = VAR_16->back;
 struct phy_device *VAR_18 = VAR_17->hw.mac.phydev;
 int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;

 if (!VAR_18) {
  *VAR_14 = VAR_2;
  *VAR_15 = VAR_2;
  return;
 }

 FUNC_4(VAR_18, VAR_11, VAR_10);

 VAR_22 = FUNC_3(VAR_18, VAR_4);
 VAR_19 = FUNC_2(VAR_22, VAR_6,
        VAR_7);

 VAR_22 = FUNC_3(VAR_18, VAR_5);
 VAR_20 = FUNC_1(VAR_22, VAR_8);
 VAR_21 = FUNC_1(VAR_22, VAR_12);

 FUNC_4(VAR_18, VAR_11, VAR_9);

 switch (VAR_19) {
 case 0x0:
  *VAR_14 = VAR_0;
  break;
 case 0x1:
  *VAR_14 = VAR_3;
  break;
 case 0x3:
  *VAR_14 = VAR_1;
  break;
 default:
  *VAR_14 = VAR_2;
  break;
 }

 if (!VAR_21)
  *VAR_15 = VAR_2;
 else if (VAR_20)
  *VAR_15 = VAR_3;
 else
  *VAR_15 = VAR_0;
}
