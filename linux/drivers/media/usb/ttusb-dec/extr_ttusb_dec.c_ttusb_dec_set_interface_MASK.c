
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb_dec {int interface; int udev; } ;
typedef enum ttusb_dec_interface { ____Placeholder_ttusb_dec_interface } ttusb_dec_interface ;
typedef int b ;





 int FUNC_0 (struct ttusb_dec*,int,int,int*,int *,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ttusb_dec *VAR_0,
       enum ttusb_dec_interface VAR_1)
{
 int VAR_2 = 0;
 u8 VAR_3[] = { 0x05 };

 if (VAR_1 != VAR_0->interface) {
  switch (VAR_1) {
  case 129:
   VAR_2 = FUNC_1(VAR_0->udev, 0, 0);
   break;
  case 130:
   VAR_2 = FUNC_0(VAR_0, 0x80, sizeof(VAR_3),
       VAR_3, ((void*)0), ((void*)0));
   if (VAR_2)
    return VAR_2;
   VAR_2 = FUNC_1(VAR_0->udev, 0, 8);
   break;
  case 128:
   VAR_2 = FUNC_1(VAR_0->udev, 0, 1);
   break;
  }

  if (VAR_2)
   return VAR_2;

  VAR_0->interface = VAR_1;
 }

 return 0;
}
