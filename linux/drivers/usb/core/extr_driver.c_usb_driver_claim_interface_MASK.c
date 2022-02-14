
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int * driver; } ;
struct usb_interface {int condition; scalar_t__ needs_remote_wakeup; scalar_t__ needs_binding; int authorized; struct device dev; } ;
struct TYPE_2__ {int driver; } ;
struct usb_driver {scalar_t__ supports_autosuspend; TYPE_1__ drvwrap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct usb_interface*,void*) ;

int FUNC_8(struct usb_driver *VAR_4,
    struct usb_interface *VAR_5, void *VAR_6)
{
 struct device *VAR_7;
 int VAR_8 = 0;

 if (!VAR_5)
  return -VAR_1;

 VAR_7 = &VAR_5->dev;
 if (VAR_7->driver)
  return -VAR_0;


 if (!VAR_5->authorized)
  return -VAR_1;

 VAR_7->driver = &VAR_4->drvwrap.driver;
 FUNC_7(VAR_5, VAR_6);
 VAR_5->needs_binding = 0;

 VAR_5->condition = VAR_2;







 FUNC_6(VAR_7, 0);
 if (VAR_4->supports_autosuspend)
  FUNC_3(VAR_7);
 else
  FUNC_4(VAR_7);




 if (FUNC_1(VAR_7))
  VAR_8 = FUNC_0(VAR_7);

 if (VAR_8) {
  VAR_7->driver = ((void*)0);
  FUNC_7(VAR_5, ((void*)0));
  VAR_5->needs_remote_wakeup = 0;
  VAR_5->condition = VAR_3;





  if (VAR_4->supports_autosuspend)
   FUNC_2(VAR_7);
  FUNC_5(VAR_7);
 }

 return VAR_8;
}
