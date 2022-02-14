
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clear_work; scalar_t__ hub; } ;
struct usb_hub {int quiescing; TYPE_2__ tt; int leds; scalar_t__ has_indicators; int urb; int irq_urb_retry; TYPE_1__** ports; int irq_urb_lock; struct usb_device* hdev; } ;
struct usb_device {int maxchild; } ;
typedef enum hub_quiescing_type { ____Placeholder_hub_quiescing_type } hub_quiescing_type ;
struct TYPE_3__ {scalar_t__ child; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct usb_hub *VAR_1, enum hub_quiescing_type VAR_2)
{
 struct usb_device *VAR_3 = VAR_1->hdev;
 unsigned long VAR_4;
 int VAR_5;


 FUNC_3(&VAR_1->irq_urb_lock, VAR_4);
 VAR_1->quiescing = 1;
 FUNC_4(&VAR_1->irq_urb_lock, VAR_4);

 if (VAR_2 != VAR_0) {

  for (VAR_5 = 0; VAR_5 < VAR_3->maxchild; ++VAR_5) {
   if (VAR_1->ports[VAR_5]->child)
    FUNC_5(&VAR_1->ports[VAR_5]->child);
  }
 }


 FUNC_1(&VAR_1->irq_urb_retry);
 FUNC_6(VAR_1->urb);
 if (VAR_1->has_indicators)
  FUNC_0(&VAR_1->leds);
 if (VAR_1->tt.hub)
  FUNC_2(&VAR_1->tt.clear_work);
}
