
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct mt76_dev {int dev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int ,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct usb_device* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,unsigned int,int,int,int ,int ,void*,size_t,int ) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;
 unsigned int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct mt76_dev *VAR_6, u8 VAR_7,
      u8 VAR_8, u16 VAR_9, u16 VAR_10,
      void *VAR_11, size_t VAR_12)
{
 struct usb_device *VAR_13 = FUNC_3(VAR_6->dev);
 unsigned int VAR_14;
 int VAR_15, VAR_16;

 VAR_14 = (VAR_8 & VAR_5) ? FUNC_5(VAR_13, 0)
           : FUNC_6(VAR_13, 0);
 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (FUNC_2(VAR_2, &VAR_6->state))
   return -VAR_0;

  VAR_16 = FUNC_4(VAR_13, VAR_14, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_11, VAR_12, VAR_4);
  if (VAR_16 == -VAR_1)
   FUNC_1(VAR_2, &VAR_6->state);
  if (VAR_16 >= 0 || VAR_16 == -VAR_1)
   return VAR_16;
  FUNC_7(5000, 10000);
 }

 FUNC_0(VAR_6->dev, "vendor request req:%02x off:%04x failed:%d\n",
  VAR_7, VAR_10, VAR_16);
 return VAR_16;
}
