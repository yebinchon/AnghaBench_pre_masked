
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ma901radio_device {int* buffer; int stereo; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int,int,int ,int*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ma901radio_device *VAR_6, u8 VAR_7)
{
 int VAR_8;

 VAR_6->buffer[0] = 0x0a;
 VAR_6->buffer[1] = VAR_1;
 VAR_6->buffer[2] = VAR_7;
 VAR_6->buffer[3] = 0x00;
 VAR_6->buffer[4] = 0x00;
 VAR_6->buffer[5] = 0x00;
 VAR_6->buffer[6] = 0x00;
 VAR_6->buffer[7] = 0x00;

 VAR_8 = FUNC_0(VAR_6->usbdev, FUNC_1(VAR_6->usbdev, 0),
    9, 0x21, 0x0300, 0,
    VAR_6->buffer, VAR_0, VAR_3);

 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 == VAR_2)
  VAR_6->stereo = VAR_5;
 else
  VAR_6->stereo = VAR_4;

 return VAR_8;
}
