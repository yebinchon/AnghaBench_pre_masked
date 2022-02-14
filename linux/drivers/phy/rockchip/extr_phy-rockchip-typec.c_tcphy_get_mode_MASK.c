
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union extcon_property_value {scalar_t__ intval; } ;
typedef int u8 ;
struct rockchip_typec_phy {int flip; int dev; struct extcon_dev* extcon; } ;
struct extcon_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct extcon_dev*,unsigned int,int ,union extcon_property_value*) ;
 int FUNC_2 (struct extcon_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct rockchip_typec_phy *VAR_8)
{
 struct extcon_dev *VAR_9 = VAR_8->extcon;
 union extcon_property_value VAR_10;
 unsigned int VAR_11;
 bool VAR_12, VAR_13;
 u8 VAR_14;
 int VAR_15;

 if (!VAR_9)
  return VAR_6;

 VAR_12 = FUNC_2(VAR_9, VAR_3);
 VAR_13 = FUNC_2(VAR_9, VAR_0);

 VAR_14 = VAR_6;
 VAR_11 = VAR_4;

 if (VAR_12) {
  VAR_14 = VAR_7;
  VAR_11 = VAR_3;
 } else if (VAR_13) {
  VAR_14 = VAR_5;
  VAR_11 = VAR_0;

  VAR_15 = FUNC_1(VAR_9, VAR_11, VAR_1,
       &VAR_10);
  if (VAR_15) {
   FUNC_0(VAR_8->dev, "get superspeed property failed\n");
   return VAR_15;
  }

  if (VAR_10.intval)
   VAR_14 |= VAR_6;
 }

 VAR_15 = FUNC_1(VAR_9, VAR_11, VAR_2,
      &VAR_10);
 if (VAR_15) {
  FUNC_0(VAR_8->dev, "get polarity property failed\n");
  return VAR_15;
 }

 VAR_8->flip = VAR_10.intval ? 1 : 0;

 return VAR_14;
}
