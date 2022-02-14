
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,unsigned int,void*,int,int*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct usb_device*,unsigned int,void*,int,int*,int) ;
 struct usb_host_endpoint* FUNC_3 (struct usb_device*,unsigned int) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_2, void *VAR_3, int VAR_4,
         int *VAR_5, int VAR_6)
{




 struct usb_host_endpoint *VAR_7;
 unsigned int VAR_8;

 VAR_8 = FUNC_5(VAR_2, VAR_1);
 VAR_7 = FUNC_3(VAR_2, VAR_8);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_1(&VAR_7->desc)) {
  return FUNC_2(VAR_2, VAR_8, VAR_3, VAR_4,
      VAR_5, VAR_6);
 } else {
  VAR_8 = FUNC_4(VAR_2, VAR_1);
  return FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5,
        VAR_6);
 }
}
