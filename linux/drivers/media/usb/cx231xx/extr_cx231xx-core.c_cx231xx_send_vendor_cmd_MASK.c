
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int state; int udev; } ;
struct VENDOR_REQUEST_IN {int wLength; int direction; int bRequest; int wValue; int * pBuff; int wIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cx231xx*,int,int,int,int,int ,int *,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct cx231xx *VAR_7,
    struct VENDOR_REQUEST_IN *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 u8 *VAR_12;

 if (VAR_7->state & VAR_0)
  return -VAR_2;

 if ((VAR_8->wLength > VAR_4))
  return -VAR_1;

 if (VAR_8->direction)
  VAR_10 = FUNC_1(VAR_7->udev, 0);
 else
  VAR_10 = FUNC_2(VAR_7->udev, 0);





 if ((VAR_8->wLength > 4) && ((VAR_8->bRequest == 0x4) ||
     (VAR_8->bRequest == 0x5) ||
     (VAR_8->bRequest == 0x6) ||




     (VAR_8->bRequest == 0x2))) {
  VAR_11 = 0;
  VAR_12 = VAR_8->pBuff;


  VAR_11 = VAR_8->wLength;


  VAR_8->wValue = VAR_8->wValue & 0xFFFB;
  VAR_8->wValue = (VAR_8->wValue & 0xFFBD) | 0x2;
  VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_8->bRequest,
   VAR_8->direction | VAR_6 | VAR_5,
   VAR_8->wValue, VAR_8->wIndex, VAR_12,
   0x0004, VAR_3);
  VAR_11 = VAR_11 - 4;


  VAR_8->wValue = (VAR_8->wValue & 0xFFBD) | 0x42;
  while (VAR_11 - 4 > 0) {
   VAR_12 = VAR_12 + 4;
   VAR_9 = FUNC_0(VAR_7, VAR_10,
    VAR_8->bRequest,
    VAR_8->direction | VAR_6 | VAR_5,
    VAR_8->wValue, VAR_8->wIndex, VAR_12,
    0x0004, VAR_3);
   VAR_11 = VAR_11 - 4;
  }


  VAR_8->wValue = (VAR_8->wValue & 0xFFBD) | 0x40;
  VAR_12 = VAR_12 + 4;
  VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_8->bRequest,
   VAR_8->direction | VAR_6 | VAR_5,
   VAR_8->wValue, VAR_8->wIndex, VAR_12,
   VAR_11, VAR_3);
 } else {
  VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_8->bRequest,
    VAR_8->direction | VAR_6 | VAR_5,
    VAR_8->wValue, VAR_8->wIndex,
    VAR_8->pBuff, VAR_8->wLength, VAR_3);
 }

 return VAR_9;
}
