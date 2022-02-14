
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sd {int sensor; } ;
struct TYPE_2__ {int bulk; int bulk_size; int bulk_nurbs; void* nmodes; void* cam_mode; } ;
struct gspca_dev {int usb_err; TYPE_1__ cam; int vdev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_2 (int) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (struct gspca_dev*,void*,void*) ;
 int FUNC_6 (struct gspca_dev*,int) ;
 int FUNC_7 (struct gspca_dev*,void*,void*) ;
 int FUNC_8 (struct gspca_dev*,int,int) ;
 int FUNC_9 (struct gspca_dev*,int ) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct gspca_dev *VAR_18)
{
 struct sd *VAR_19 = (struct sd *) VAR_18;
 u16 VAR_20;


 FUNC_4(VAR_18, 0xe7, 0x3a);
 FUNC_4(VAR_18, 0xe0, 0x08);
 FUNC_2(100);


 FUNC_4(VAR_18, VAR_2, 0x60);


 FUNC_8(VAR_18, 0x12, 0x80);
 FUNC_2(10);


 FUNC_6(VAR_18, 0x0a);
 VAR_20 = FUNC_6(VAR_18, 0x0a) << 8;
 FUNC_6(VAR_18, 0x0b);
 VAR_20 |= FUNC_6(VAR_18, 0x0b);
 FUNC_1(VAR_18, VAR_0, "Sensor ID: %04x\n", VAR_20);


 if ((VAR_20 & 0xfff0) == 0x9650) {
  VAR_19->sensor = VAR_5;

  VAR_18->cam.cam_mode = VAR_15;
  VAR_18->cam.nmodes = FUNC_0(VAR_15);

  FUNC_5(VAR_18, VAR_7,
    FUNC_0(VAR_7));
  FUNC_7(VAR_18, VAR_13,
    FUNC_0(VAR_13));
  FUNC_5(VAR_18, VAR_8,
    FUNC_0(VAR_8));
  FUNC_7(VAR_18, VAR_14,
    FUNC_0(VAR_14));
  FUNC_4(VAR_18, 0xe0, 0x00);
  FUNC_4(VAR_18, 0xe0, 0x01);
  FUNC_9(VAR_18, 0);
  FUNC_4(VAR_18, 0xe0, 0x00);
 } else if ((VAR_20 & 0xfff0) == 0x9710) {
  const char *VAR_21;
  int VAR_22;

  VAR_19->sensor = VAR_6;

  VAR_18->cam.cam_mode = VAR_17;
  VAR_18->cam.nmodes = FUNC_0(VAR_17);

  VAR_18->cam.bulk = 1;
  VAR_18->cam.bulk_size = 16384;
  VAR_18->cam.bulk_nurbs = 2;

  FUNC_7(VAR_18, VAR_16,
    FUNC_0(VAR_16));



  FUNC_4(VAR_18, 0x1c, 0x00);

  FUNC_4(VAR_18, 0x1d, 0x00);





  VAR_21 = FUNC_11(&VAR_18->vdev);
  VAR_22 = FUNC_10(VAR_21) - 1;
  if (VAR_21[VAR_22] == '0')
   FUNC_4(VAR_18, 0x56, 0x1f);
  else
   FUNC_4(VAR_18, 0x56, 0x17);
 } else if ((VAR_20 & 0xfff0) == 0x5620) {
  VAR_19->sensor = VAR_4;
  VAR_18->cam.cam_mode = VAR_12;
  VAR_18->cam.nmodes = FUNC_0(VAR_12);

  FUNC_5(VAR_18, VAR_10,
    FUNC_0(VAR_10));
  FUNC_7(VAR_18, VAR_11,
    FUNC_0(VAR_11));
  FUNC_4(VAR_18, 0xe0, 0x00);
 } else if ((VAR_20 & 0xfff0) == 0x3610) {
  VAR_19->sensor = VAR_3;
  VAR_18->cam.cam_mode = VAR_9;
  VAR_18->cam.nmodes = FUNC_0(VAR_9);
  FUNC_4(VAR_18, 0xe7, 0x3a);
  FUNC_4(VAR_18, 0xf1, 0x60);
  FUNC_8(VAR_18, 0x12, 0x80);
 } else {
  FUNC_3("Unknown sensor %04x", VAR_20);
  return -VAR_1;
 }

 return VAR_18->usb_err;
}
