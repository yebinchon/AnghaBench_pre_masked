
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int idVendor; int idProduct; } ;
struct sd {int webcam; int ag_cnt; scalar_t__ bridge; } ;
struct TYPE_2__ {int needs_full_bandwidth; int nmodes; int * cam_mode; } ;
struct gspca_dev {int* usb_buf; int usb_err; TYPE_1__ cam; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 unsigned int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (char*,size_t,scalar_t__) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int * VAR_12 ;
 int VAR_13 ;
 scalar_t__* VAR_14 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_15,
   const struct usb_device_id *VAR_16)
{
 struct sd *VAR_17 = (struct sd *) VAR_15;

 if ((unsigned) VAR_13 >= VAR_7)
  VAR_13 = 0;
 VAR_17->webcam = VAR_13;
 VAR_15->cam.needs_full_bandwidth = 1;
 VAR_17->ag_cnt = -1;
 if (!FUNC_2(VAR_15, 0x0500, 0x55)) {
  VAR_17->bridge = VAR_2;
  if (VAR_17->webcam == VAR_5)
   VAR_17->webcam = VAR_6;
 } else if (!FUNC_2(VAR_15, 0x109b, 0xaa)) {
  VAR_17->bridge = VAR_1;
  if (VAR_17->webcam == VAR_5)
   VAR_17->webcam = 129;
 } else if (VAR_16->idVendor == 0x06a5 && VAR_16->idProduct == 0xd800) {
  FUNC_4(VAR_15, 0x0403, 1);
  FUNC_1(VAR_15, VAR_3, "et31x110 sensor type %02x\n",
     VAR_15->usb_buf[0]);
  switch (VAR_15->usb_buf[0] >> 1) {
  case 0x00:
   if (VAR_17->webcam == VAR_5)
    VAR_17->webcam = VAR_8;
   break;
  case 0x01:
   if (VAR_17->webcam == VAR_5)
    VAR_17->webcam = VAR_10;
   break;
  case 0x0a:
   if (VAR_17->webcam == VAR_5)
    VAR_17->webcam = VAR_9;
   break;
  }
 }
 if (VAR_14[VAR_17->webcam] != VAR_17->bridge) {
  FUNC_3("Bad webcam type %d for NW80%d\n",
         VAR_17->webcam, VAR_17->bridge);
  VAR_15->usb_err = -VAR_4;
  return VAR_15->usb_err;
 }
 FUNC_1(VAR_15, VAR_3, "Bridge nw80%d - type: %d\n",
    VAR_17->bridge, VAR_17->webcam);

 if (VAR_17->bridge == VAR_0) {
  switch (VAR_17->webcam) {
  case 131:
   VAR_15->cam.cam_mode = VAR_11;
   break;
  default:
   VAR_15->cam.cam_mode = &VAR_11[1];
   break;
  }
  VAR_15->cam.nmodes = 1;
 } else {
  VAR_15->cam.cam_mode = VAR_12;
  switch (VAR_17->webcam) {
  case 130:
  case 128:
  case 129:
   VAR_15->cam.nmodes = FUNC_0(VAR_12);
   break;
  default:
   VAR_15->cam.nmodes = 1;
   break;
  }
 }

 return VAR_15->usb_err;
}
