
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {TYPE_1__ desc; struct usb_host_endpoint* endpoint; } ;
struct usb_host_endpoint {unsigned char* extra; int extralen; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;

__attribute__((used)) static int FUNC_0(struct usb_host_interface *VAR_2,
         struct usb_host_endpoint *VAR_3[])
{
 struct usb_host_endpoint *VAR_4 = VAR_2->endpoint;
 unsigned VAR_5, VAR_6 = VAR_2->desc.bNumEndpoints;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  unsigned char *VAR_7 = VAR_4[VAR_5].extra;
  int VAR_8 = VAR_4[VAR_5].extralen;
  while (VAR_8 >= 3) {
   if (VAR_7[1] == VAR_1) {
    unsigned VAR_9 = VAR_7[2];
    if (VAR_9 > 0 && VAR_9 < 5)
     VAR_3[VAR_9 - 1] = &VAR_4[VAR_5];
    break;
   }
   VAR_8 -= VAR_7[0];
   VAR_7 += VAR_7[0];
  }
 }

 if (!VAR_3[0] || !VAR_3[1] || !VAR_3[2] || !VAR_3[3])
  return -VAR_0;

 return 0;
}
