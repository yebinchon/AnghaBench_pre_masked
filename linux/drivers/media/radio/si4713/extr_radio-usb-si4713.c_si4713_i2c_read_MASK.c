
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si4713_usb_device {int* buffer; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ,int,int,int,int ,int*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct si4713_usb_device *VAR_5, char *VAR_6, int VAR_7)
{
 unsigned long VAR_8 = VAR_4 + FUNC_5(VAR_2) + 1;
 int VAR_9;


 for (;;) {
  VAR_9 = FUNC_3(VAR_5->usbdev,
     FUNC_4(VAR_5->usbdev, 0),
     0x01, 0xa1, 0x033f, 0, VAR_5->buffer,
     VAR_0, VAR_3);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_5->buffer[1] == 0 && (VAR_5->buffer[2] & VAR_1)) {
   FUNC_0(VAR_6, VAR_5->buffer + 2, VAR_7);
   return 0;
  }
  if (FUNC_2(VAR_8)) {

   VAR_6[0] = 0;
   return 0;
  }
  FUNC_1(3);
 }
}
