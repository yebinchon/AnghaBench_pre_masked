
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__* rec_cnt; } ;
struct pcan_usb_pro_msg {TYPE_1__ u; int rec_buffer_len; } ;


 int VAR_0 ;
 int * FUNC_0 (struct pcan_usb_pro_msg*,void*,int) ;

__attribute__((used)) static u8 *FUNC_1(struct pcan_usb_pro_msg *VAR_1,
          void *VAR_2, int VAR_3)
{
 u8 *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4) {
  VAR_1->rec_buffer_len = VAR_0;
  *VAR_1->u.rec_cnt = 0;
 }
 return VAR_4;
}
