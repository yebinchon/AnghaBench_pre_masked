
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct usb_device_driver {TYPE_1__ drvwrap; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;

void FUNC_2(struct usb_device_driver *VAR_1)
{
 FUNC_1("%s: deregistering device driver %s\n",
   VAR_0, VAR_1->name);

 FUNC_0(&VAR_1->drvwrap.driver);
}
