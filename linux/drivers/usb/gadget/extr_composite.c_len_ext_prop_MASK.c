
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_os_desc {scalar_t__ ext_prop_len; } ;
struct usb_function {int os_desc_n; TYPE_1__* os_desc_table; } ;
struct usb_configuration {struct usb_function** interface; } ;
struct TYPE_2__ {int if_id; struct usb_os_desc* os_desc; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct usb_configuration *VAR_0, int VAR_1)
{
 struct usb_function *VAR_2;
 struct usb_os_desc *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = 10;
 VAR_2 = VAR_0->interface[VAR_1];
 for (VAR_4 = 0; VAR_4 < VAR_2->os_desc_n; ++VAR_4) {
  if (VAR_1 != VAR_2->os_desc_table[VAR_4].if_id)
   continue;
  VAR_3 = VAR_2->os_desc_table[VAR_4].os_desc;
  if (VAR_3)
   return FUNC_0(VAR_5 + VAR_3->ext_prop_len, 4096);
 }
 return VAR_5;
}
