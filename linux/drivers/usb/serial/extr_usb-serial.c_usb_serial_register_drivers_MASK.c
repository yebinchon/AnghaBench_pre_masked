
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_driver {struct usb_driver* usb_driver; scalar_t__ reset_resume; } ;
struct TYPE_2__ {int driver; } ;
struct usb_driver {char const* name; int no_dynamic_id; int supports_autosuspend; TYPE_1__ drvwrap; struct usb_device_id const* id_table; int reset_resume; int disconnect; int probe; int resume; int suspend; } ;
struct usb_device_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_driver*) ;
 struct usb_driver* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_driver*) ;
 int FUNC_4 (struct usb_driver*) ;
 int FUNC_5 (struct usb_serial_driver* const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct usb_serial_driver* const) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_7(struct usb_serial_driver *const VAR_7[],
    const char *VAR_8,
    const struct usb_device_id *VAR_9)
{
 int VAR_10;
 struct usb_driver *VAR_11;
 struct usb_serial_driver * const *VAR_12;
 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->name = VAR_8;
 VAR_11->no_dynamic_id = 1;
 VAR_11->supports_autosuspend = 1;
 VAR_11->suspend = VAR_6;
 VAR_11->resume = VAR_5;
 VAR_11->probe = VAR_3;
 VAR_11->disconnect = VAR_2;


 for (VAR_12 = VAR_7; *VAR_12; ++VAR_12) {
  if ((*VAR_12)->reset_resume) {
   VAR_11->reset_resume = VAR_4;
   break;
  }
 }

 VAR_10 = FUNC_4(VAR_11);
 if (VAR_10)
  goto failed_usb_register;

 for (VAR_12 = VAR_7; *VAR_12; ++VAR_12) {
  (*VAR_12)->usb_driver = VAR_11;
  VAR_10 = FUNC_6(*VAR_12);
  if (VAR_10)
   goto failed;
 }


 VAR_11->id_table = VAR_9;
 VAR_10 = FUNC_0(&VAR_11->drvwrap.driver);
 return 0;

 failed:
 while (VAR_12-- > VAR_7)
  FUNC_5(*VAR_12);
 FUNC_3(VAR_11);
failed_usb_register:
 FUNC_1(VAR_11);
 return VAR_10;
}
