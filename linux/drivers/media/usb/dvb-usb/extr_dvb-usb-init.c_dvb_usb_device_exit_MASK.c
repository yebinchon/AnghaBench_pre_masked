
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct dvb_usb_device {TYPE_1__* desc; } ;
typedef int name ;
struct TYPE_2__ {char const* name; } ;


 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 struct dvb_usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

void FUNC_5(struct usb_interface *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_3(VAR_0);
 const char *VAR_2 = "generic DVB-USB module";
 char VAR_3[40];

 FUNC_4(VAR_0, ((void*)0));
 if (VAR_1 != ((void*)0) && VAR_1->desc != ((void*)0)) {
  FUNC_2(VAR_3, VAR_1->desc->name, sizeof(VAR_3));
  FUNC_0(VAR_1);
 } else {
  FUNC_2(VAR_3, VAR_2, sizeof(VAR_3));
 }
 FUNC_1("%s successfully deinitialized and disconnected.", VAR_3);

}
