
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ notifier_call; } ;
struct usb_phy {TYPE_3__ type_nb; TYPE_1__* dev; TYPE_3__ id_nb; struct extcon_dev* edev; struct extcon_dev* id_edev; TYPE_3__ vbus_nb; } ;
struct extcon_dev {int dummy; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct extcon_dev*) ;
 int FUNC_1 (struct extcon_dev*) ;
 int FUNC_2 (struct usb_phy*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,struct extcon_dev*,int ,TYPE_3__*) ;
 void* FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_8(struct usb_phy *VAR_7)
{
 int VAR_8;

 if (FUNC_7(VAR_7->dev->of_node, "extcon")) {
  VAR_7->edev = FUNC_6(VAR_7->dev, 0);
  if (FUNC_0(VAR_7->edev))
   return FUNC_1(VAR_7->edev);

  VAR_7->id_edev = FUNC_6(VAR_7->dev, 1);
  if (FUNC_0(VAR_7->id_edev)) {
   VAR_7->id_edev = ((void*)0);
   FUNC_4(VAR_7->dev, "No separate ID extcon device\n");
  }

  if (VAR_7->vbus_nb.notifier_call) {
   VAR_8 = FUNC_5(VAR_7->dev, VAR_7->edev,
           VAR_4,
           &VAR_7->vbus_nb);
   if (VAR_8 < 0) {
    FUNC_3(VAR_7->dev,
     "register VBUS notifier failed\n");
    return VAR_8;
   }
  } else {
   VAR_7->type_nb.notifier_call = VAR_6;

   VAR_8 = FUNC_5(VAR_7->dev, VAR_7->edev,
           VAR_3,
           &VAR_7->type_nb);
   if (VAR_8) {
    FUNC_3(VAR_7->dev,
     "register extcon USB SDP failed.\n");
    return VAR_8;
   }

   VAR_8 = FUNC_5(VAR_7->dev, VAR_7->edev,
           VAR_1,
           &VAR_7->type_nb);
   if (VAR_8) {
    FUNC_3(VAR_7->dev,
     "register extcon USB CDP failed.\n");
    return VAR_8;
   }

   VAR_8 = FUNC_5(VAR_7->dev, VAR_7->edev,
           VAR_2,
           &VAR_7->type_nb);
   if (VAR_8) {
    FUNC_3(VAR_7->dev,
     "register extcon USB DCP failed.\n");
    return VAR_8;
   }

   VAR_8 = FUNC_5(VAR_7->dev, VAR_7->edev,
           VAR_0,
           &VAR_7->type_nb);
   if (VAR_8) {
    FUNC_3(VAR_7->dev,
     "register extcon USB ACA failed.\n");
    return VAR_8;
   }
  }

  if (VAR_7->id_nb.notifier_call) {
   struct extcon_dev *VAR_9;

   if (VAR_7->id_edev)
    VAR_9 = VAR_7->id_edev;
   else
    VAR_9 = VAR_7->edev;

   VAR_8 = FUNC_5(VAR_7->dev, VAR_9,
           VAR_5,
           &VAR_7->id_nb);
   if (VAR_8 < 0) {
    FUNC_3(VAR_7->dev,
     "register ID notifier failed\n");
    return VAR_8;
   }
  }
 }

 if (VAR_7->type_nb.notifier_call)
  FUNC_2(VAR_7);

 return 0;
}
