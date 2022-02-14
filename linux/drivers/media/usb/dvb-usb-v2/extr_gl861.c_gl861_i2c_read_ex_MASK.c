
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int*,int*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,int*,scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct dvb_usb_device *VAR_4, u8 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 u8 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_4->udev, FUNC_4(VAR_4->udev, 0),
     VAR_3, VAR_2,
     VAR_5 << (8 + 1), 0x0100, VAR_8, VAR_7, 2000);
 if (VAR_9 > 0 && VAR_7 > 0)
  FUNC_2(VAR_8, VAR_6, VAR_7);
 FUNC_0(VAR_8);
 return VAR_9;
}
