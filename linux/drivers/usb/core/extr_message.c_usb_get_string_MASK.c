
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_device*,int ,int ,int ,int,unsigned short,void*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_6, unsigned short VAR_7,
     unsigned char VAR_8, void *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;

 for (VAR_11 = 0; VAR_11 < 3; ++VAR_11) {

  VAR_12 = FUNC_0(VAR_6, FUNC_1(VAR_6, 0),
   VAR_5, VAR_3,
   (VAR_4 << 8) + VAR_8, VAR_7, VAR_9, VAR_10,
   VAR_2);
  if (VAR_12 == 0 || VAR_12 == -VAR_1)
   continue;
  if (VAR_12 > 1 && ((u8 *) VAR_9)[1] != VAR_4) {
   VAR_12 = -VAR_0;
   continue;
  }
  break;
 }
 return VAR_12;
}
