
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* otg; } ;
struct tahvo_usb {int vbus_state; TYPE_2__* pt_dev; int extcon; TYPE_3__ phy; } ;
struct retu_dev {int dummy; } ;
struct TYPE_8__ {int kobj; int parent; } ;
struct TYPE_6__ {TYPE_4__ dev; } ;
struct TYPE_5__ {int state; int gadget; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct retu_dev* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct retu_dev*,int ) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_8(struct tahvo_usb *VAR_5)
{
 struct retu_dev *VAR_6 = FUNC_0(VAR_5->pt_dev->dev.parent);
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (VAR_7 & VAR_2) {
  switch (VAR_5->phy.otg->state) {
  case 129:

   if (VAR_5->phy.otg->gadget)
    FUNC_5(VAR_5->phy.otg->gadget);
   VAR_5->phy.otg->state = 128;
   FUNC_7(&VAR_5->phy, VAR_3);
   break;
  case 130:




   VAR_5->phy.otg->state = 131;
   break;
  default:
   break;
  }
  FUNC_1(&VAR_5->pt_dev->dev, "USB cable connected\n");
 } else {
  switch (VAR_5->phy.otg->state) {
  case 128:
   if (VAR_5->phy.otg->gadget)
    FUNC_6(VAR_5->phy.otg->gadget);
   VAR_5->phy.otg->state = 129;
   FUNC_7(&VAR_5->phy, VAR_4);
   break;
  case 131:
   VAR_5->phy.otg->state = 130;
   break;
  default:
   break;
  }
  FUNC_1(&VAR_5->pt_dev->dev, "USB cable disconnected\n");
 }

 VAR_8 = VAR_5->vbus_state;
 VAR_5->vbus_state = VAR_7 & VAR_2;
 if (VAR_8 != VAR_5->vbus_state) {
  FUNC_2(VAR_5->extcon, VAR_0, VAR_5->vbus_state);
  FUNC_4(&VAR_5->pt_dev->dev.kobj, ((void*)0), "vbus_state");
 }
}
