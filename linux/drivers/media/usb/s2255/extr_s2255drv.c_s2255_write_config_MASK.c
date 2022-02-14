
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (struct usb_device*,int,unsigned char*,int,int*,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_1, unsigned char *VAR_2,
         int VAR_3)
{
 int VAR_4;
 int VAR_5;
 long VAR_6 = -1;
 if (VAR_1) {
  VAR_4 = FUNC_1(VAR_1, VAR_0);
  VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3, &VAR_5, 500);
 }
 return VAR_6;
}
