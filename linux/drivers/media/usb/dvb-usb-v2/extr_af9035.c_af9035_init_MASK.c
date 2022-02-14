
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_interface {int dev; } ;
struct state {int dual_mode; } ;
struct reg_val_mask {int member_0; int member_1; int member_2; int mask; int val; int reg; } ;
struct dvb_usb_device {TYPE_1__* udev; struct usb_interface* intf; } ;
struct TYPE_2__ {int speed; } ;


 int FUNC_0 (struct reg_val_mask*) ;
 int VAR_0 ;
 int FUNC_1 (struct dvb_usb_device*,int ,int ,int ) ;
 struct state* FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1)
{
 struct state *VAR_2 = FUNC_2(VAR_1);
 struct usb_interface *VAR_3 = VAR_1->intf;
 int VAR_4, VAR_5;
 u16 VAR_6 = (VAR_1->udev->speed == VAR_0 ? 5 : 87) * 188 / 4;
 u8 VAR_7 = (VAR_1->udev->speed == VAR_0 ? 64 : 512) / 4;
 struct reg_val_mask VAR_8[] = {
  { 0x80f99d, 0x01, 0x01 },
  { 0x80f9a4, 0x01, 0x01 },
  { 0x00dd11, 0x00, 0x20 },
  { 0x00dd11, 0x00, 0x40 },
  { 0x00dd13, 0x00, 0x20 },
  { 0x00dd13, 0x00, 0x40 },
  { 0x00dd11, 0x20, 0x20 },
  { 0x00dd88, (VAR_6 >> 0) & 0xff, 0xff},
  { 0x00dd89, (VAR_6 >> 8) & 0xff, 0xff},
  { 0x00dd0c, VAR_7, 0xff},
  { 0x00dd11, VAR_2->dual_mode << 6, 0x40 },
  { 0x00dd8a, (VAR_6 >> 0) & 0xff, 0xff},
  { 0x00dd8b, (VAR_6 >> 8) & 0xff, 0xff},
  { 0x00dd0d, VAR_7, 0xff },
  { 0x80f9a3, VAR_2->dual_mode, 0x01 },
  { 0x80f9cd, VAR_2->dual_mode, 0x01 },
  { 0x80f99d, 0x00, 0x01 },
  { 0x80f9a4, 0x00, 0x01 },
 };

 FUNC_3(&VAR_3->dev, "USB speed=%d frame_size=%04x packet_size=%02x\n",
  VAR_1->udev->speed, VAR_6, VAR_7);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_8); VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, VAR_8[VAR_5].reg, VAR_8[VAR_5].val,
    VAR_8[VAR_5].mask);
  if (VAR_4 < 0)
   goto err;
 }

 return 0;

err:
 FUNC_3(&VAR_3->dev, "failed=%d\n", VAR_4);

 return VAR_4;
}
