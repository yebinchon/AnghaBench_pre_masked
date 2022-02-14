
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_otg {int state; struct usb_bus* host; } ;
struct usb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct usb_otg *VAR_2, struct usb_bus *VAR_3)
{
 if (!VAR_2)
  return -VAR_0;

 VAR_2->host = VAR_3;
 if (!VAR_3)
  VAR_2->state = VAR_1;

 return 0;
}
