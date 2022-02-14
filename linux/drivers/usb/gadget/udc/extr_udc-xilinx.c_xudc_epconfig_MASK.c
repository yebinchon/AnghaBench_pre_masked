
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xusb_udc {int addr; int (* write_fn ) (int ,scalar_t__,int) ;} ;
struct TYPE_2__ {int maxpacket; } ;
struct xusb_ep {int is_in; int is_iso; int rambase; int buffer0count; int buffer1count; int epnumber; scalar_t__ buffer1ready; scalar_t__ buffer0ready; scalar_t__ offset; TYPE_1__ ep_usb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct xusb_ep *VAR_4, struct xusb_udc *VAR_5)
{
 u32 VAR_6;





 VAR_6 = ((VAR_4->is_in << 29) | (VAR_4->is_iso << 28) |
     (VAR_4->ep_usb.maxpacket << 15) | (VAR_4->rambase));
 VAR_5->write_fn(VAR_5->addr, VAR_4->offset, VAR_6);


 VAR_5->write_fn(VAR_5->addr, VAR_4->offset + VAR_1,
        VAR_4->buffer0count);
 VAR_5->write_fn(VAR_5->addr, VAR_4->offset + VAR_2,
        VAR_4->buffer1count);
 if (VAR_4->buffer0ready)
  VAR_5->write_fn(VAR_5->addr, VAR_0,
         1 << VAR_4->epnumber);
 if (VAR_4->buffer1ready)
  VAR_5->write_fn(VAR_5->addr, VAR_0,
         1 << (VAR_4->epnumber + VAR_3));
}
