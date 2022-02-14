
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int* FUNC_3 (int*,int,int ) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int,int,int,int*,int,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_8, u8 VAR_9,
    u8 *VAR_10, u16 VAR_11, u8 *VAR_12, u16 VAR_13)
{
 u16 VAR_14;
 u16 VAR_15 = VAR_9 << (8 + 1);
 int VAR_16 = (VAR_12 == ((void*)0) || VAR_13 == 0);
 u8 VAR_17, VAR_18;
 u8 *VAR_19;
 int VAR_20;

 if (VAR_16) {
  VAR_17 = VAR_5;
  VAR_18 = VAR_6;
  VAR_19 = FUNC_3(VAR_10, VAR_11, VAR_2);
 } else {
  VAR_17 = VAR_4;
  VAR_18 = VAR_3;
  VAR_19 = FUNC_2(VAR_13, VAR_2);
 }
 if (!VAR_19)
  return -VAR_1;

 switch (VAR_11) {
 case 1:
  VAR_14 = VAR_10[0];
  break;
 case 2:
  VAR_14 = VAR_10[0];
  VAR_15 = VAR_15 + VAR_10[1];
  break;
 default:
  FUNC_0(&VAR_8->udev->dev, "%s: wlen=%d, aborting\n",
    VAR_7, VAR_11);
  FUNC_1(VAR_19);
  return -VAR_0;
 }

 FUNC_7(1000, 2000);

 VAR_20 = FUNC_5(VAR_8->udev, FUNC_6(VAR_8->udev, 0), VAR_17, VAR_18,
         VAR_15, VAR_14, VAR_19, VAR_13, 2000);

 if (!VAR_16 && VAR_20 > 0)
  FUNC_4(VAR_12, VAR_19, VAR_13);

 FUNC_1(VAR_19);
 return VAR_20;
}
