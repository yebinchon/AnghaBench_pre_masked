
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_device_id {int dummy; } ;
struct sd {int resetlevel; int has_brightness; TYPE_1__* fmts; } ;
struct cam {int nmodes; int bulk; int bulk_nurbs; int bulk_size; TYPE_1__* cam_mode; } ;
struct gspca_dev {int* usb_buf; int usb_err; int dev; struct cam cam; } ;
struct TYPE_2__ {int width; int height; int priv; int bytesperline; int sizeimage; int pixelformat; int colorspace; int field; } ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;
 int FUNC_3 (struct gspca_dev*,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_11,
   const struct usb_device_id *VAR_12)
{
 struct sd *VAR_13 = (struct sd *)VAR_11;
 struct cam *VAR_14 = &VAR_11->cam;
 u8 *VAR_15 = VAR_11->usb_buf;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19[VAR_2], VAR_20[VAR_2];


 FUNC_2(VAR_11, VAR_5, 1);
 if (VAR_11->usb_err) {


  FUNC_4(VAR_11->dev);
  VAR_11->usb_err = 0;
  FUNC_2(VAR_11, VAR_5, 0);
 }


 FUNC_3(VAR_11, VAR_6, 0, 0);
 if (VAR_11->usb_err)
  return VAR_11->usb_err;

 if (VAR_15[1] != 0x41) {
  FUNC_0("Wrong descriptor type\n");
  return -VAR_1;
 }

 if (!(VAR_15[2] & VAR_3)) {
  FUNC_0("Bayer format not supported!\n");
  return -VAR_1;
 }

 if (VAR_15[3])
  FUNC_1("ExtraFeatures: %d\n", VAR_15[3]);

 VAR_18 = VAR_15[4] | (VAR_15[5] << 8);
 if (VAR_18 > VAR_2) {
  FUNC_0("Too many frame sizes\n");
  return -VAR_1;
 }

 for (VAR_16 = 0; VAR_16 < VAR_18 ; VAR_16++) {
  VAR_19[VAR_16] = VAR_15[6 + VAR_16 * 4 + 0] | (VAR_15[6 + VAR_16 * 4 + 1] << 8);
  VAR_20[VAR_16] = VAR_15[6 + VAR_16 * 4 + 2] | (VAR_15[6 + VAR_16 * 4 + 3] << 8);
 }

 for (VAR_16 = 0; VAR_16 < VAR_18 ; VAR_16++) {
  VAR_13->fmts[VAR_16].width = VAR_19[VAR_16];
  VAR_13->fmts[VAR_16].height = VAR_20[VAR_16];
  VAR_13->fmts[VAR_16].field = VAR_8;
  VAR_13->fmts[VAR_16].colorspace = VAR_7;
  VAR_13->fmts[VAR_16].priv = 1;


  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
   if (VAR_19[VAR_17] / 2 == VAR_19[VAR_16] &&
       VAR_20[VAR_17] / 2 == VAR_20[VAR_16]) {
    VAR_13->fmts[VAR_16].priv = 2;
    break;
   }
  }


  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
   if (VAR_19[VAR_17] / 4 == VAR_19[VAR_16] &&
       VAR_20[VAR_17] / 4 == VAR_20[VAR_16]) {
    VAR_13->fmts[VAR_16].priv = 4;
    break;
   }
  }

  if (VAR_13->fmts[VAR_16].priv == 1) {

   VAR_13->fmts[VAR_16].pixelformat = VAR_9;
   VAR_13->fmts[VAR_16].bytesperline = VAR_19[VAR_16];
   VAR_13->fmts[VAR_16].sizeimage = VAR_19[VAR_16] * VAR_20[VAR_16];
   FUNC_1("Frame size: %dx%d bayer\n",
    VAR_19[VAR_16], VAR_20[VAR_16]);
  } else {

   VAR_13->fmts[VAR_16].pixelformat = VAR_10;
   VAR_13->fmts[VAR_16].bytesperline = 0;
   VAR_13->fmts[VAR_16].sizeimage = VAR_19[VAR_16] * VAR_20[VAR_16] * 3;
   FUNC_1("Frame size: %dx%d 1/%dth janggu\n",
    VAR_19[VAR_16], VAR_20[VAR_16],
    VAR_13->fmts[VAR_16].priv * VAR_13->fmts[VAR_16].priv);
  }
 }

 VAR_14->cam_mode = VAR_13->fmts;
 VAR_14->nmodes = VAR_18;
 VAR_14->bulk = 1;
 VAR_14->bulk_size = VAR_0;
 VAR_14->bulk_nurbs = 4;
 VAR_13->resetlevel = 0x2d;


 FUNC_2(VAR_11, VAR_4, 1);
 VAR_13->has_brightness = !!VAR_11->usb_err;
 VAR_11->usb_err = 0;

 return 0;
}
