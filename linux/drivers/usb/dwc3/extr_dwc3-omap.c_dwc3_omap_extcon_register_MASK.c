
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct extcon_dev {int dummy; } ;
struct TYPE_6__ {int notifier_call; } ;
struct dwc3_omap {struct extcon_dev* edev; TYPE_1__* dev; TYPE_3__ id_nb; TYPE_3__ vbus_nb; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct extcon_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,struct extcon_dev*,int ,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_3 (struct dwc3_omap*,int ) ;
 int VAR_6 ;
 struct extcon_dev* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct extcon_dev*,int ) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct dwc3_omap *VAR_7)
{
 int VAR_8;
 struct device_node *VAR_9 = VAR_7->dev->of_node;
 struct extcon_dev *VAR_10;

 if (FUNC_6(VAR_9, "extcon")) {
  VAR_10 = FUNC_4(VAR_7->dev, 0);
  if (FUNC_0(VAR_10)) {
   FUNC_1(VAR_7->dev, "couldn't get extcon device\n");
   return -VAR_0;
  }

  VAR_7->vbus_nb.notifier_call = VAR_6;
  VAR_8 = FUNC_2(VAR_7->dev, VAR_10,
      VAR_1, &VAR_7->vbus_nb);
  if (VAR_8 < 0)
   FUNC_1(VAR_7->dev, "failed to register notifier for USB\n");

  VAR_7->id_nb.notifier_call = VAR_5;
  VAR_8 = FUNC_2(VAR_7->dev, VAR_10,
      VAR_2, &VAR_7->id_nb);
  if (VAR_8 < 0)
   FUNC_1(VAR_7->dev, "failed to register notifier for USB-HOST\n");

  if (FUNC_5(VAR_10, VAR_1) == 1)
   FUNC_3(VAR_7, VAR_4);
  if (FUNC_5(VAR_10, VAR_2) == 1)
   FUNC_3(VAR_7, VAR_3);

  VAR_7->edev = VAR_10;
 }

 return 0;
}
