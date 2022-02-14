
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ep {struct f_sourcesink* driver_data; } ;
struct usb_composite_dev {TYPE_1__* gadget; } ;
struct TYPE_4__ {int name; } ;
struct f_sourcesink {int cur_alt; TYPE_2__ function; struct usb_ep* iso_out_ep; struct usb_ep* iso_in_ep; struct usb_ep* out_ep; struct usb_ep* in_ep; } ;
struct TYPE_3__ {int speed; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,struct usb_ep*) ;
 int FUNC_2 (struct f_sourcesink*,int,int,int) ;
 int FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (struct usb_ep*) ;

__attribute__((used)) static int
FUNC_5(struct usb_composite_dev *VAR_0, struct f_sourcesink *VAR_1,
  int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_0->gadget->speed;
 struct usb_ep *VAR_5;


 VAR_5 = VAR_1->in_ep;
 VAR_3 = FUNC_1(VAR_0->gadget, &(VAR_1->function), VAR_5);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_4(VAR_5);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_5->driver_data = VAR_1;

 VAR_3 = FUNC_2(VAR_1, 1, 0, VAR_4);
 if (VAR_3 < 0) {
fail:
  VAR_5 = VAR_1->in_ep;
  FUNC_3(VAR_5);
  return VAR_3;
 }


 VAR_5 = VAR_1->out_ep;
 VAR_3 = FUNC_1(VAR_0->gadget, &(VAR_1->function), VAR_5);
 if (VAR_3)
  goto fail;
 VAR_3 = FUNC_4(VAR_5);
 if (VAR_3 < 0)
  goto fail;
 VAR_5->driver_data = VAR_1;

 VAR_3 = FUNC_2(VAR_1, 0, 0, VAR_4);
 if (VAR_3 < 0) {
fail2:
  VAR_5 = VAR_1->out_ep;
  FUNC_3(VAR_5);
  goto fail;
 }

 if (VAR_2 == 0)
  goto out;


 VAR_5 = VAR_1->iso_in_ep;
 if (VAR_5) {
  VAR_3 = FUNC_1(VAR_0->gadget, &(VAR_1->function), VAR_5);
  if (VAR_3)
   goto fail2;
  VAR_3 = FUNC_4(VAR_5);
  if (VAR_3 < 0)
   goto fail2;
  VAR_5->driver_data = VAR_1;

  VAR_3 = FUNC_2(VAR_1, 1, 1, VAR_4);
  if (VAR_3 < 0) {
fail3:
   VAR_5 = VAR_1->iso_in_ep;
   if (VAR_5)
    FUNC_3(VAR_5);
   goto fail2;
  }
 }


 VAR_5 = VAR_1->iso_out_ep;
 if (VAR_5) {
  VAR_3 = FUNC_1(VAR_0->gadget, &(VAR_1->function), VAR_5);
  if (VAR_3)
   goto fail3;
  VAR_3 = FUNC_4(VAR_5);
  if (VAR_3 < 0)
   goto fail3;
  VAR_5->driver_data = VAR_1;

  VAR_3 = FUNC_2(VAR_1, 0, 1, VAR_4);
  if (VAR_3 < 0) {
   FUNC_3(VAR_5);
   goto fail3;
  }
 }
out:
 VAR_1->cur_alt = VAR_2;

 FUNC_0(VAR_0, "%s enabled, alt intf %d\n", VAR_1->function.name, VAR_2);
 return VAR_3;
}
