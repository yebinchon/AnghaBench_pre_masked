
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct usb_device {int dummy; } ;
struct dvobj_priv {unsigned int* Queue2Pipe; int * RtInPipe; struct usb_device* pusbdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (struct usb_device*,int ) ;
 unsigned int FUNC_1 (struct usb_device*,unsigned int) ;

unsigned int FUNC_2(struct dvobj_priv *VAR_3, u32 VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;
 struct usb_device *VAR_7 = VAR_3->pusbdev;

 if (VAR_4 == VAR_1) {
  VAR_5 = FUNC_0(VAR_7, VAR_3->RtInPipe[0]);
 } else if (VAR_4 == VAR_2) {
  VAR_5 = FUNC_0(VAR_7, VAR_3->RtInPipe[1]);
 } else if (VAR_4 < VAR_0) {
  VAR_6 = VAR_3->Queue2Pipe[VAR_4];
  VAR_5 = FUNC_1(VAR_7, VAR_6);
 }

 return VAR_5;
}
