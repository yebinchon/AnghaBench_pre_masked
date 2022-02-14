
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_os_desc {int ext_prop_count; scalar_t__ ext_compat_id; } ;
struct usb_function {int os_desc_n; TYPE_1__* os_desc_table; } ;
struct usb_configuration {struct usb_function** interface; } ;
struct TYPE_2__ {int if_id; struct usb_os_desc* os_desc; } ;



__attribute__((used)) static int FUNC_0(struct usb_configuration *VAR_0, int VAR_1)
{
 struct usb_function *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->interface[VAR_1];
 for (VAR_3 = 0; VAR_3 < VAR_2->os_desc_n; ++VAR_3) {
  struct usb_os_desc *VAR_4;

  if (VAR_1 != VAR_2->os_desc_table[VAR_3].if_id)
   continue;
  VAR_4 = VAR_2->os_desc_table[VAR_3].os_desc;
  if (VAR_4 && VAR_4->ext_compat_id)
   return VAR_4->ext_prop_count;
 }
 return 0;
}
