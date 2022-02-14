
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ci_hdrc_cable {int changed; int connected; } ;
struct ci_hdrc {int dev; int lock; int irq; TYPE_1__* platdata; scalar_t__ wq; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
struct TYPE_2__ {struct ci_hdrc_cable id_extcon; struct ci_hdrc_cable vbus_extcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ci_hdrc*) ;
 int FUNC_1 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3, enum usb_role VAR_4)
{
 struct ci_hdrc *VAR_5 = FUNC_2(VAR_3);
 struct ci_hdrc_cable *VAR_6 = ((void*)0);
 enum usb_role VAR_7 = FUNC_1(VAR_5);
 unsigned long VAR_8;

 if (VAR_7 == VAR_4)
  return 0;

 FUNC_4(VAR_5->dev);

 FUNC_6(&VAR_5->lock, VAR_8);
 if (VAR_7 == VAR_0)
  VAR_6 = &VAR_5->platdata->vbus_extcon;
 else if (VAR_7 == VAR_1)
  VAR_6 = &VAR_5->platdata->id_extcon;

 if (VAR_6) {
  VAR_6->changed = 1;
  VAR_6->connected = 0;
  FUNC_0(VAR_5->irq, VAR_5);
  FUNC_7(&VAR_5->lock, VAR_8);
  if (VAR_5->wq && VAR_4 != VAR_2)
   FUNC_3(VAR_5->wq);
  FUNC_6(&VAR_5->lock, VAR_8);
 }

 VAR_6 = ((void*)0);


 if (VAR_4 == VAR_0)
  VAR_6 = &VAR_5->platdata->vbus_extcon;
 else if (VAR_4 == VAR_1)
  VAR_6 = &VAR_5->platdata->id_extcon;

 if (VAR_6) {
  VAR_6->changed = 1;
  VAR_6->connected = 1;
  FUNC_0(VAR_5->irq, VAR_5);
 }
 FUNC_7(&VAR_5->lock, VAR_8);
 FUNC_5(VAR_5->dev);

 return 0;
}
