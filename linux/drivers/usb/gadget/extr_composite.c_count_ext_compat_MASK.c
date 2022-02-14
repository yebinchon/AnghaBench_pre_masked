
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_os_desc {scalar_t__ ext_compat_id; } ;
struct usb_function {int os_desc_n; TYPE_1__* os_desc_table; } ;
struct usb_configuration {int next_interface_id; struct usb_function** interface; } ;
struct TYPE_2__ {int if_id; struct usb_os_desc* os_desc; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct usb_configuration *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->next_interface_id; ++VAR_1) {
  struct usb_function *VAR_3;
  int VAR_4;

  VAR_3 = VAR_0->interface[VAR_1];
  for (VAR_4 = 0; VAR_4 < VAR_3->os_desc_n; ++VAR_4) {
   struct usb_os_desc *VAR_5;

   if (VAR_1 != VAR_3->os_desc_table[VAR_4].if_id)
    continue;
   VAR_5 = VAR_3->os_desc_table[VAR_4].os_desc;
   if (VAR_5 && VAR_5->ext_compat_id)
    ++VAR_2;
  }
 }
 FUNC_0(VAR_2 > 255);
 return VAR_2;
}
