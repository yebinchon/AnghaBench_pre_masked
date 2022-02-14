
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {int dr_mode; int id_det; int force_session_end; int detect; } ;
struct sun4i_usb_phy {scalar_t__ index; } ;
struct phy {int dev; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 struct sun4i_usb_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_4 ;
 struct sun4i_usb_phy_data* FUNC_3 (struct sun4i_usb_phy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_5,
      enum phy_mode VAR_6, int VAR_7)
{
 struct sun4i_usb_phy *VAR_8 = FUNC_1(VAR_5);
 struct sun4i_usb_phy_data *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 if (VAR_8->index != 0) {
  if (VAR_6 == 129)
   return 0;
  return -VAR_0;
 }

 switch (VAR_6) {
 case 129:
  VAR_10 = VAR_1;
  break;
 case 130:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_10 != VAR_9->dr_mode) {
  FUNC_0(&VAR_5->dev, "Changing dr_mode to %d\n", VAR_10);
  VAR_9->dr_mode = VAR_10;
 }

 VAR_9->id_det = -1;
 VAR_9->force_session_end = 1;
 FUNC_2(VAR_4, &VAR_9->detect, 0);

 return 0;
}
