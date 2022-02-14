
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct usb_request {unsigned int actual; int * buf; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_5__ {TYPE_3__* config; } ;
struct f_sourcesink {int pattern; TYPE_4__* out_ep; TYPE_1__ function; } ;
struct TYPE_8__ {TYPE_2__* desc; } ;
struct TYPE_7__ {struct usb_composite_dev* cdev; } ;
struct TYPE_6__ {int wMaxPacketSize; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_composite_dev*,char*,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct f_sourcesink *VAR_1, struct usb_request *VAR_2)
{
 unsigned VAR_3;
 u8 *VAR_4 = VAR_2->buf;
 struct usb_composite_dev *VAR_5 = VAR_1->function.config->cdev;
 int VAR_6 = FUNC_1(VAR_1->out_ep->desc->wMaxPacketSize);

 if (VAR_1->pattern == 2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->actual; VAR_3++, VAR_4++) {
  switch (VAR_1->pattern) {


  case 0:
   if (*VAR_4 == 0)
    continue;
   break;
  case 1:
   if (*VAR_4 == (u8)((VAR_3 % VAR_6) % 63))
    continue;
   break;
  }
  FUNC_0(VAR_5, "bad OUT byte, buf[%d] = %d\n", VAR_3, *VAR_4);
  FUNC_2(VAR_1->out_ep);
  return -VAR_0;
 }
 return 0;
}
