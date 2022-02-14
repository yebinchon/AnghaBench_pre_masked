
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rockchip_usb2phy {struct extcon_dev* edev; TYPE_1__* dev; } ;
struct extcon_dev {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extcon_dev*) ;
 int FUNC_1 (struct extcon_dev*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct extcon_dev* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,struct extcon_dev*) ;
 struct extcon_dev* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct rockchip_usb2phy *VAR_3)
{
 int VAR_4;
 struct device_node *VAR_5 = VAR_3->dev->of_node;
 struct extcon_dev *VAR_6;

 if (FUNC_6(VAR_5, "extcon")) {
  VAR_6 = FUNC_5(VAR_3->dev, 0);
  if (FUNC_0(VAR_6)) {
   if (FUNC_1(VAR_6) != -VAR_1)
    FUNC_2(VAR_3->dev, "Invalid or missing extcon\n");
   return FUNC_1(VAR_6);
  }
 } else {

  VAR_6 = FUNC_3(VAR_3->dev,
      VAR_2);

  if (FUNC_0(VAR_6))
   return -VAR_0;

  VAR_4 = FUNC_4(VAR_3->dev, VAR_6);
  if (VAR_4) {
   FUNC_2(VAR_3->dev, "failed to register extcon device\n");
   return VAR_4;
  }
 }

 VAR_3->edev = VAR_6;

 return 0;
}
