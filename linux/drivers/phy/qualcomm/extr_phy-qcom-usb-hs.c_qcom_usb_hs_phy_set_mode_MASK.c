
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qcom_usb_hs_phy {int ulpi; int vbus_edev; } ;
struct phy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct qcom_usb_hs_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_9,
        enum phy_mode VAR_10, int VAR_11)
{
 struct qcom_usb_hs_phy *VAR_12 = FUNC_2(VAR_9);
 u8 VAR_13;
 int VAR_14;

 if (!VAR_12->vbus_edev) {
  u8 VAR_15 = 0;

  switch (VAR_10) {
  case 128:
  case 129:
   VAR_15 |= VAR_1;

  case 130:
   VAR_15 |= VAR_2;
  default:
   break;
  }

  VAR_14 = FUNC_3(VAR_12->ulpi, VAR_8, VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_14 = FUNC_3(VAR_12->ulpi, VAR_7, VAR_15);
 } else {
  switch (VAR_10) {
  case 128:
  case 130:
   VAR_13 = FUNC_1(VAR_3);
   break;
  case 129:
   VAR_13 = FUNC_0(VAR_3);
   break;
  default:
   return -VAR_0;
  }

  VAR_14 = FUNC_3(VAR_12->ulpi, FUNC_1(VAR_5),
     VAR_6);
  if (VAR_14)
   return VAR_14;
  VAR_14 = FUNC_3(VAR_12->ulpi, VAR_13, VAR_4);
 }

 return VAR_14;
}
