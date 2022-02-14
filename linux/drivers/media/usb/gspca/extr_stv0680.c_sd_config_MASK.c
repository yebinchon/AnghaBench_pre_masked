
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct sd {int video_mode; int current_mode; int orig_mode; TYPE_1__ mode; } ;
struct cam {int bulk; int bulk_nurbs; int bulk_size; int nmodes; TYPE_1__* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int) ;
 int FUNC_7 (struct gspca_dev*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct gspca_dev *VAR_6,
   const struct usb_device_id *VAR_7)
{
 int VAR_8;
 struct sd *VAR_9 = (struct sd *) VAR_6;
 struct cam *VAR_10 = &VAR_6->cam;



 FUNC_2(1000);


 if (FUNC_7(VAR_6, 0, 0x88, 0x5678, 0x02) != 0x02 ||
     VAR_6->usb_buf[0] != 0x56 || VAR_6->usb_buf[1] != 0x78) {
  FUNC_1(VAR_6, "STV(e): camera ping failed!!\n");
  return FUNC_5(VAR_6, -VAR_2);
 }


 if (FUNC_7(VAR_6, 2, 0x06, 0x0200, 0x09) != 0x09)
  return FUNC_5(VAR_6, -VAR_2);

 if (FUNC_7(VAR_6, 2, 0x06, 0x0200, 0x22) != 0x22 ||
     VAR_6->usb_buf[7] != 0xa0 || VAR_6->usb_buf[8] != 0x23) {
  FUNC_1(VAR_6, "Could not get descriptor 0200\n");
  return FUNC_5(VAR_6, -VAR_2);
 }
 if (FUNC_7(VAR_6, 0, 0x8a, 0, 0x02) != 0x02)
  return FUNC_5(VAR_6, -VAR_2);
 if (FUNC_7(VAR_6, 0, 0x8b, 0, 0x24) != 0x24)
  return FUNC_5(VAR_6, -VAR_2);
 if (FUNC_7(VAR_6, 0, 0x85, 0, 0x10) != 0x10)
  return FUNC_5(VAR_6, -VAR_2);

 if (!(VAR_6->usb_buf[7] & 0x09)) {
  FUNC_1(VAR_6, "Camera supports neither CIF nor QVGA mode\n");
  return -VAR_2;
 }
 if (VAR_6->usb_buf[7] & 0x01)
  FUNC_0(VAR_6, VAR_0, "Camera supports CIF mode\n");
 if (VAR_6->usb_buf[7] & 0x02)
  FUNC_0(VAR_6, VAR_0, "Camera supports VGA mode\n");
 if (VAR_6->usb_buf[7] & 0x04)
  FUNC_0(VAR_6, VAR_0, "Camera supports QCIF mode\n");
 if (VAR_6->usb_buf[7] & 0x08)
  FUNC_0(VAR_6, VAR_0, "Camera supports QVGA mode\n");

 if (VAR_6->usb_buf[7] & 0x01)
  VAR_9->video_mode = 0x00;
 else
  VAR_9->video_mode = 0x03;


 FUNC_0(VAR_6, VAR_0, "Firmware rev is %i.%i\n",
    VAR_6->usb_buf[0], VAR_6->usb_buf[1]);
 FUNC_0(VAR_6, VAR_0, "ASIC rev is %i.%i",
    VAR_6->usb_buf[2], VAR_6->usb_buf[3]);
 FUNC_0(VAR_6, VAR_0, "Sensor ID is %i",
    (VAR_6->usb_buf[4]*16) + (VAR_6->usb_buf[5]>>4));


 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_9->current_mode = VAR_9->orig_mode = VAR_8;

 VAR_8 = FUNC_6(VAR_6, VAR_9->video_mode);
 if (VAR_8 < 0)
  return VAR_8;


 if (FUNC_7(VAR_6, 0, 0x8f, 0, 0x10) != 0x10)
  return FUNC_5(VAR_6, -VAR_1);

 VAR_10->bulk = 1;
 VAR_10->bulk_nurbs = 1;
 VAR_10->bulk_size = (VAR_6->usb_buf[0] << 24) |
    (VAR_6->usb_buf[1] << 16) |
    (VAR_6->usb_buf[2] << 8) |
    (VAR_6->usb_buf[3]);
 VAR_9->mode.width = (VAR_6->usb_buf[4] << 8) |
    (VAR_6->usb_buf[5]);
 VAR_9->mode.height = (VAR_6->usb_buf[6] << 8) |
     (VAR_6->usb_buf[7]);
 VAR_9->mode.pixelformat = VAR_5;
 VAR_9->mode.field = VAR_4;
 VAR_9->mode.bytesperline = VAR_9->mode.width;
 VAR_9->mode.sizeimage = VAR_10->bulk_size;
 VAR_9->mode.colorspace = VAR_3;



 VAR_10->cam_mode = &VAR_9->mode;
 VAR_10->nmodes = 1;


 VAR_8 = FUNC_6(VAR_6, VAR_9->orig_mode);
 if (VAR_8 < 0)
  return VAR_8;

 if (FUNC_7(VAR_6, 2, 0x06, 0x0100, 0x12) != 0x12 ||
     VAR_6->usb_buf[8] != 0x53 || VAR_6->usb_buf[9] != 0x05) {
  FUNC_3("Could not get descriptor 0100\n");
  return FUNC_5(VAR_6, -VAR_1);
 }

 return 0;
}
