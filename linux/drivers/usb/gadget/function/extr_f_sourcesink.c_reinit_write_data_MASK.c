
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_request {unsigned int length; int * buf; } ;
struct usb_ep {struct f_sourcesink* driver_data; TYPE_1__* desc; } ;
struct f_sourcesink {int pattern; } ;
struct TYPE_2__ {int wMaxPacketSize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 unsigned VAR_2;
 u8 *VAR_3 = VAR_1->buf;
 int VAR_4 = FUNC_0(VAR_0->desc->wMaxPacketSize);
 struct f_sourcesink *VAR_5 = VAR_0->driver_data;

 switch (VAR_5->pattern) {
 case 0:
  FUNC_1(VAR_1->buf, 0, VAR_1->length);
  break;
 case 1:
  for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++)
   *VAR_3++ = (u8) ((VAR_2 % VAR_4) % 63);
  break;
 case 2:
  break;
 }
}
