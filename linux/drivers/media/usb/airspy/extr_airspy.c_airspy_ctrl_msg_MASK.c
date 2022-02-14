
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct airspy {int* buf; int dev; int udev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ,int ,int*,int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int*,int*,int ) ;
 int FUNC_3 (int ,unsigned int,int,int,int ,int ,int*,int ,int) ;
 unsigned int FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct airspy *VAR_4, u8 VAR_5, u16 VAR_6, u16 VAR_7,
  u8 *VAR_8, u16 VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 u8 VAR_12;

 switch (VAR_5) {
 case 135:
 case 134:
  VAR_11 = FUNC_5(VAR_4->udev, 0);
  VAR_12 = (VAR_3 | VAR_2);
  break;
 case 137:
 case 128:
 case 136:
 case 132:
 case 130:
 case 129:
 case 133:
 case 131:
  VAR_11 = FUNC_4(VAR_4->udev, 0);
  VAR_12 = (VAR_3 | VAR_1);
  break;
 default:
  FUNC_1(VAR_4->dev, "Unknown command %02x\n", VAR_5);
  VAR_10 = -VAR_0;
  goto err;
 }


 if (!(VAR_12 & VAR_1))
  FUNC_2(VAR_4->buf, VAR_8, VAR_9);

 VAR_10 = FUNC_3(VAR_4->udev, VAR_11, VAR_5, VAR_12, VAR_6,
   VAR_7, VAR_4->buf, VAR_9, 1000);
 FUNC_0(VAR_4->dev, VAR_5, VAR_12, VAR_6,
   VAR_7, VAR_4->buf, VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_4->dev, "usb_control_msg() failed %d request %02x\n",
    VAR_10, VAR_5);
  goto err;
 }


 if (VAR_12 & VAR_1)
  FUNC_2(VAR_8, VAR_4->buf, VAR_9);

 return 0;
err:
 return VAR_10;
}
