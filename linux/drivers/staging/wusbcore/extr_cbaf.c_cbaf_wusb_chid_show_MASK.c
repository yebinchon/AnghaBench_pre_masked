
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct cbaf {TYPE_1__ chid; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int ) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 struct cbaf* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_1(VAR_0);
 struct cbaf *VAR_4 = FUNC_2(VAR_3);

 return FUNC_0(VAR_2, "%16ph\n", VAR_4->chid.data);
}
