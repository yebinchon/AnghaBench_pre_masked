
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,unsigned char,int ,void*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct usb_device *VAR_5, unsigned char VAR_6,
         unsigned char VAR_7, void *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;

 FUNC_0(VAR_8, 0, VAR_9);

 for (VAR_10 = 0; VAR_10 < 3; ++VAR_10) {

  VAR_11 = FUNC_1(VAR_5, FUNC_2(VAR_5, 0),
    VAR_4, VAR_3,
    (VAR_6 << 8) + VAR_7, 0, VAR_8, VAR_9,
    VAR_2);
  if (VAR_11 <= 0 && VAR_11 != -VAR_1)
   continue;
  if (VAR_11 > 1 && ((u8 *)VAR_8)[1] != VAR_6) {
   VAR_11 = -VAR_0;
   continue;
  }
  break;
 }
 return VAR_11;
}
