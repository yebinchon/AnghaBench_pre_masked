
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct TYPE_4__ {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int,int*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int,int,int,int*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_7, u8 VAR_8, u8 VAR_9,
     u8 *VAR_10, u16 VAR_11, u8 *VAR_12, u16 VAR_13)
{
 int VAR_14;
 u16 VAR_15;
 u8 *VAR_16;





 VAR_16 = FUNC_3(6, VAR_3);
 if (!VAR_16)
  return -VAR_2;

 switch (VAR_11) {
 case 1:
  VAR_15 = VAR_10[0] << 8;
  break;
 case 2:
  VAR_15 = VAR_10[0] << 8;
  VAR_15 += VAR_10[1];
  break;
 default:
  FUNC_0(&VAR_7->udev->dev, "%s: wlen=%d, aborting\n",
    VAR_4, VAR_11);
  VAR_14 = -VAR_1;
  goto error;
 }

 VAR_14 = FUNC_4(VAR_7->udev, FUNC_5(VAR_7->udev, 0), VAR_8,
         VAR_6|VAR_5, VAR_9 << 1, VAR_15,
         VAR_16, 6, VAR_0);

 FUNC_1(VAR_7->udev, VAR_8,
   (VAR_6|VAR_5), VAR_9 << 1, VAR_15,
   VAR_16, 6);

 if (VAR_14 < 0)
  goto error;

 switch (VAR_8) {
 case 129:
 case 128:

  VAR_12[0] = VAR_16[4];
 }
error:
 FUNC_2(VAR_16);
 return VAR_14;
}
