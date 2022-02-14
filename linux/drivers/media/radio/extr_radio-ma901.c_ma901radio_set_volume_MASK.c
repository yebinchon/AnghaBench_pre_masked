
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ma901radio_device {int* buffer; int volume; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int,int ,int*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ma901radio_device *VAR_3, u16 VAR_4)
{
 int VAR_5;

 VAR_3->buffer[0] = 0x0a;
 VAR_3->buffer[1] = VAR_1;
 VAR_3->buffer[2] = 0xc2;
 VAR_3->buffer[3] = VAR_4 + 0x20;
 VAR_3->buffer[4] = 0x00;
 VAR_3->buffer[5] = 0x00;
 VAR_3->buffer[6] = 0x00;
 VAR_3->buffer[7] = 0x00;

 VAR_5 = FUNC_0(VAR_3->usbdev, FUNC_1(VAR_3->usbdev, 0),
    9, 0x21, 0x0300, 0,
    VAR_3->buffer, VAR_0, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->volume = VAR_4;
 return VAR_5;
}
