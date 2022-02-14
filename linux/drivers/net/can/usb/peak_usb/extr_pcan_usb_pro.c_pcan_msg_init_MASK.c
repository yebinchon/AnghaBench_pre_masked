
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * rec_buffer; } ;
struct pcan_usb_pro_msg {int rec_buffer_size; int rec_buffer_len; int * rec_ptr; TYPE_1__ u; } ;


 int VAR_0 ;

__attribute__((used)) static u8 *FUNC_0(struct pcan_usb_pro_msg *VAR_1, void *VAR_2,
    int VAR_3)
{
 if (VAR_3 < VAR_0)
  return ((void*)0);

 VAR_1->u.rec_buffer = (u8 *)VAR_2;
 VAR_1->rec_buffer_size = VAR_1->rec_buffer_len = VAR_3;
 VAR_1->rec_ptr = VAR_1->u.rec_buffer + VAR_0;

 return VAR_1->rec_ptr;
}
