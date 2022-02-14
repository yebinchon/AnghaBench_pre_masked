
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct mt7601u_dev {int hw; int stat_wq; int state; int dev; int vend_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 struct mt7601u_dev* FUNC_6 (int *) ;
 int FUNC_7 (struct usb_interface*,struct mt7601u_dev*) ;
 int FUNC_8 (struct mt7601u_dev*) ;
 int FUNC_9 (struct mt7601u_dev*) ;
 int FUNC_10 (struct mt7601u_dev*) ;
 int FUNC_11 (struct mt7601u_dev*,int ) ;
 int FUNC_12 (struct mt7601u_dev*) ;
 int FUNC_13 (int ,int *) ;
 struct usb_device* FUNC_14 (struct usb_device*) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*) ;
 int FUNC_17 (struct usb_interface*,struct mt7601u_dev*) ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_9,
    const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11 = FUNC_5(VAR_9);
 struct mt7601u_dev *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15;

 VAR_12 = FUNC_6(&VAR_9->dev);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_14(VAR_11);
 FUNC_16(VAR_11);

 FUNC_17(VAR_9, VAR_12);

 VAR_12->vend_buf = FUNC_3(VAR_12->dev, VAR_8, VAR_2);
 if (!VAR_12->vend_buf) {
  VAR_15 = -VAR_1;
  goto err;
 }

 VAR_15 = FUNC_7(VAR_9, VAR_12);
 if (VAR_15)
  goto err;
 VAR_15 = FUNC_12(VAR_12);
 if (VAR_15)
  goto err;

 VAR_13 = FUNC_11(VAR_12, VAR_4);
 VAR_14 = FUNC_11(VAR_12, VAR_7);
 FUNC_1(VAR_12->dev, "ASIC revision: %08x MAC revision: %08x\n",
   VAR_13, VAR_14);
 if ((VAR_13 >> 16) != 0x7601) {
  VAR_15 = -VAR_0;
  goto err;
 }


 if (!(FUNC_11(VAR_12, VAR_5) & VAR_6))
  FUNC_2(VAR_12->dev, "Warning: eFUSE not present\n");

 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15)
  goto err;
 VAR_15 = FUNC_10(VAR_12);
 if (VAR_15)
  goto err_hw;

 FUNC_13(VAR_3, &VAR_12->state);

 return 0;
err_hw:
 FUNC_8(VAR_12);
err:
 FUNC_17(VAR_9, ((void*)0));
 FUNC_15(FUNC_5(VAR_9));

 FUNC_0(VAR_12->stat_wq);
 FUNC_4(VAR_12->hw);
 return VAR_15;
}
