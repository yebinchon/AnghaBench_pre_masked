
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct si4713_usb_device {int* buffer; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,int ,int,int,int,int ,int*,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct si4713_usb_device *VAR_2, u8 *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_2->buffer[0] = 0x3f;
 VAR_2->buffer[1] = 0x06;

 FUNC_0(VAR_2->buffer + 2, VAR_3, 3);
 FUNC_0(VAR_2->buffer + 5, VAR_4, VAR_5);
 FUNC_1(VAR_2->buffer + 5 + VAR_5, 0, VAR_0 - 5 - VAR_5);


 VAR_6 = FUNC_2(VAR_2->usbdev, FUNC_3(VAR_2->usbdev, 0),
     0x09, 0x21, 0x033f, 0, VAR_2->buffer,
     VAR_0, VAR_1);

 return VAR_6 < 0 ? VAR_6 : 0;
}
