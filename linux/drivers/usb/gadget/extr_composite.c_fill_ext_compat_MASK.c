
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_os_desc {scalar_t__ ext_compat_id; } ;
struct usb_function {int os_desc_n; TYPE_1__* os_desc_table; } ;
struct usb_configuration {int next_interface_id; struct usb_function** interface; } ;
struct TYPE_2__ {int if_id; struct usb_os_desc* os_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct usb_configuration *VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = 16;
 VAR_2 += 16;
 for (VAR_3 = 0; VAR_3 < VAR_1->next_interface_id; ++VAR_3) {
  struct usb_function *VAR_5;
  int VAR_6;

  VAR_5 = VAR_1->interface[VAR_3];
  for (VAR_6 = 0; VAR_6 < VAR_5->os_desc_n; ++VAR_6) {
   struct usb_os_desc *VAR_7;

   if (VAR_3 != VAR_5->os_desc_table[VAR_6].if_id)
    continue;
   VAR_7 = VAR_5->os_desc_table[VAR_6].os_desc;
   if (VAR_7 && VAR_7->ext_compat_id) {
    *VAR_2++ = VAR_3;
    *VAR_2++ = 0x01;
    FUNC_0(VAR_2, VAR_7->ext_compat_id, 16);
    VAR_2 += 22;
   } else {
    ++VAR_2;
    *VAR_2 = 0x01;
    VAR_2 += 23;
   }
   VAR_4 += 24;
   if (VAR_4 + 24 >= VAR_0)
    return VAR_4;
  }
 }

 return VAR_4;
}
