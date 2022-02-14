
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_3__* endpoint; } ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_10__ {size_t curr_mode; int alt; int iface; int dev; struct cam cam; } ;
struct sd {TYPE_5__ gspca_dev; TYPE_4__* sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_9__ {int* max_packet_size; } ;
struct TYPE_7__ {int wMaxPacketSize; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;
struct TYPE_6__ {int priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sd*,int ,int) ;
 int FUNC_4 (struct sd*,int ,int) ;
 struct usb_host_interface* FUNC_5 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sd *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 struct usb_host_interface *VAR_17;
 struct usb_interface *VAR_18;
 struct gspca_dev *VAR_19 = (struct gspca_dev *)VAR_13;
 struct cam *VAR_20 = &VAR_13->gspca_dev.cam;
 u32 VAR_21 = VAR_20->cam_mode[VAR_13->gspca_dev.curr_mode].priv;

 VAR_18 = FUNC_6(VAR_13->gspca_dev.dev, VAR_13->gspca_dev.iface);
 VAR_17 = FUNC_5(VAR_18, VAR_13->gspca_dev.alt);
 if (!VAR_17)
  return -VAR_1;
 VAR_15 = FUNC_2(VAR_17->endpoint[0].desc.wMaxPacketSize);


 VAR_16 = VAR_13->sensor->max_packet_size[VAR_13->gspca_dev.curr_mode];
 if (VAR_15 < VAR_16)
  FUNC_4(VAR_13, VAR_7, FUNC_0(4)|FUNC_0(3)|FUNC_0(1));
 else
  FUNC_4(VAR_13, VAR_7, FUNC_0(5)|FUNC_0(3)|FUNC_0(1));


 if (VAR_21 & VAR_2) {
  FUNC_4(VAR_13, VAR_8, 30);
  FUNC_4(VAR_13, VAR_5, 20);
  FUNC_4(VAR_13, VAR_9, 240 - 1);
  FUNC_4(VAR_13, VAR_6, 320 - 1);
 } else {
  FUNC_4(VAR_13, VAR_8, 8);
  FUNC_4(VAR_13, VAR_5, 4);
  FUNC_4(VAR_13, VAR_9, 288 - 1);
  FUNC_4(VAR_13, VAR_6, 352 - 1);
 }

 if (VAR_21 & VAR_3) {
  FUNC_3(VAR_13, VAR_12, 0x02);
  FUNC_3(VAR_13, VAR_11, 0x06);

  FUNC_3(VAR_13, VAR_10, 0x10);
 } else {
  FUNC_3(VAR_13, VAR_12, 0x01);
  FUNC_3(VAR_13, VAR_11, 0x0a);

  FUNC_3(VAR_13, VAR_10, 0x20);
 }

 VAR_14 = FUNC_4(VAR_13, VAR_4, FUNC_0(5)|FUNC_0(3)|FUNC_0(1));
 FUNC_1(VAR_19, VAR_0, "Started stream, status: %d\n", VAR_14);

 return (VAR_14 < 0) ? VAR_14 : 0;
}
