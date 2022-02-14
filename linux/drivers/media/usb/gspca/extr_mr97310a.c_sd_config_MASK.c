
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; } ;
struct sd {int do_lcd_stop; int sensor_type; int adj_colors; int cam_type; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int VAR_4 ;
 int FUNC_2 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int VAR_5 ;
 int FUNC_6 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_6;
 struct cam *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_6->cam;
 VAR_9->cam_mode = VAR_5;
 VAR_9->nmodes = FUNC_0(VAR_5);
 VAR_8->do_lcd_stop = 0;
 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_6, 0x07, 1);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7->idProduct == 0x0110 || VAR_7->idProduct == 0x010e) {
  VAR_8->cam_type = VAR_0;
  VAR_9->nmodes--;
  switch (VAR_6->usb_buf[0]) {
  case 2:
   VAR_8->sensor_type = 0;
   break;
  case 3:
   VAR_8->sensor_type = 1;
   break;
  default:
   FUNC_3("Unknown CIF Sensor id : %02x\n",
          VAR_6->usb_buf[1]);
   return -VAR_3;
  }
  FUNC_2(VAR_6, VAR_2, "MR97310A CIF camera detected, sensor: %d\n",
     VAR_8->sensor_type);
 } else {
  VAR_8->cam_type = VAR_1;
  VAR_8->sensor_type = 1;
  VAR_8->do_lcd_stop = 0;
  VAR_8->adj_colors = 0;
  if (VAR_6->usb_buf[0] == 0x01) {
   VAR_8->sensor_type = 2;
  } else if ((VAR_6->usb_buf[0] != 0x03) &&
     (VAR_6->usb_buf[0] != 0x04)) {
   FUNC_3("Unknown VGA Sensor id Byte 0: %02x\n",
          VAR_6->usb_buf[0]);
   FUNC_3("Defaults assumed, may not work\n");
   FUNC_3("Please report this\n");
  }

  if ((VAR_6->usb_buf[0] == 0x03) &&
     (VAR_6->usb_buf[1] == 0x50))
   VAR_8->adj_colors = 1;
  if (VAR_6->usb_buf[0] == 0x04) {
   VAR_8->do_lcd_stop = 1;
   switch (VAR_6->usb_buf[1]) {
   case 0x50:
    VAR_8->sensor_type = 0;
    FUNC_2(VAR_6, VAR_2, "sensor_type corrected to 0\n");
    break;
   case 0x20:

    break;
   default:
    FUNC_3("Unknown VGA Sensor id Byte 1: %02x\n",
           VAR_6->usb_buf[1]);
    FUNC_3("Defaults assumed, may not work\n");
    FUNC_3("Please report this\n");
   }
  }
  FUNC_2(VAR_6, VAR_2, "MR97310A VGA camera detected, sensor: %d\n",
     VAR_8->sensor_type);
 }

 FUNC_4(VAR_6);

 if (VAR_4 != -1) {
  VAR_8->sensor_type = !!VAR_4;
  FUNC_2(VAR_6, VAR_2, "Forcing sensor type to: %d\n",
     VAR_8->sensor_type);
 }

 return 0;
}
