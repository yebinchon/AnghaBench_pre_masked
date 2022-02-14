
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int request_intra; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_usbvision*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_usbvision *VAR_2)
{
 unsigned char VAR_3[1];

 FUNC_0(VAR_0, "");
 VAR_2->request_intra = 1;
 VAR_3[0] = 1;
 FUNC_1(VAR_2, VAR_1, VAR_3, 1);
 return 0;
}
