
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_port {scalar_t__ location; TYPE_2__* peer; } ;
struct usb_hub {struct usb_port** ports; struct usb_device* hdev; } ;
struct TYPE_3__ {struct usb_device* root_hub; } ;
struct usb_hcd {TYPE_1__ self; struct usb_hcd* shared_hcd; } ;
struct usb_device {int portnum; int maxchild; struct usb_device* parent; int bus; } ;
struct TYPE_4__ {struct usb_device* child; } ;


 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_port*,struct usb_port*) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_port*,int ) ;
 struct usb_hub* FUNC_3 (struct usb_device*) ;

__attribute__((used)) static void FUNC_4(struct usb_hub *VAR_1, int VAR_2)
{
 struct usb_port *VAR_3 = VAR_1->ports[VAR_2 - 1], *VAR_4;
 struct usb_device *VAR_5 = VAR_1->hdev;
 struct usb_device *VAR_6;
 struct usb_hub *VAR_7;







 if (VAR_3->location) {

  FUNC_2(VAR_3, VAR_0);
  return;
 } else if (!VAR_5->parent) {
  struct usb_hcd *VAR_8 = FUNC_0(VAR_5->bus);
  struct usb_hcd *VAR_9 = VAR_8->shared_hcd;

  if (!VAR_9)
   return;

  VAR_6 = VAR_9->self.root_hub;
 } else {
  struct usb_port *VAR_10;
  struct usb_device *VAR_11 = VAR_5->parent;
  struct usb_hub *VAR_12 = FUNC_3(VAR_11);

  if (!VAR_12)
   return;

  VAR_10 = VAR_12->ports[VAR_5->portnum - 1];
  if (!VAR_10 || !VAR_10->peer)
   return;

  VAR_6 = VAR_10->peer->child;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (!VAR_7 || VAR_2 > VAR_6->maxchild)
  return;





 VAR_4 = VAR_7->ports[VAR_2 - 1];
 if (VAR_4 && VAR_4->location == 0)
  FUNC_1(VAR_3, VAR_4);
}
