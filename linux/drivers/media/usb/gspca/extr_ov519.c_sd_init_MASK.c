
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int curr_mode; } ;
struct sd {int bridge; int sensor; TYPE_1__ gspca_dev; int sif; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {int usb_err; struct cam cam; } ;


 void* FUNC_0 (void*) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (struct sd*,int ,int ) ;
 int FUNC_3 (struct sd*,int,int,int) ;
 void* VAR_8 ;
 scalar_t__ FUNC_4 (struct sd*,int ) ;
 int FUNC_5 (int) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_6 (struct gspca_dev*) ;
 void* VAR_21 ;
 int FUNC_7 (struct gspca_dev*) ;
 void* VAR_22 ;
 int FUNC_8 (struct sd*) ;
 int FUNC_9 (struct sd*) ;
 int FUNC_10 (struct sd*) ;
 void* VAR_23 ;
 int FUNC_11 (struct sd*,int ) ;
 int FUNC_12 (struct sd*) ;
 int FUNC_13 (struct sd*) ;
 int FUNC_14 (struct sd*) ;
 int FUNC_15 (struct sd*) ;
 int FUNC_16 (struct sd*) ;
 int FUNC_17 (struct sd*) ;
 int FUNC_18 (struct sd*) ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int FUNC_19 (struct sd*,int ,int) ;
 int FUNC_20 (struct gspca_dev*) ;
 int FUNC_21 (struct sd*) ;
 int FUNC_22 (struct sd*) ;
 void* VAR_27 ;
 int FUNC_23 (struct sd*,void*,void*) ;
 int FUNC_24 (struct sd*,void*,void*) ;

__attribute__((used)) static int FUNC_25(struct gspca_dev *VAR_28)
{
 struct sd *VAR_29 = (struct sd *) VAR_28;
 struct cam *VAR_30 = &VAR_28->cam;

 switch (VAR_29->bridge) {
 case 148:
 case 147:
  FUNC_6(VAR_28);
  break;
 case 146:
 case 145:
  FUNC_7(VAR_28);
  break;
 case 144:
  FUNC_8(VAR_29);
  break;
 case 143:
  FUNC_18(VAR_29);
  break;
 case 142:
  FUNC_21(VAR_29);
  break;
 }




 VAR_29->sensor = -1;


 if (FUNC_4(VAR_29, VAR_5) >= 0) {
  FUNC_15(VAR_29);


 } else if (FUNC_4(VAR_29, VAR_2) >= 0) {
  FUNC_14(VAR_29);


 } else if (FUNC_4(VAR_29, VAR_6) >= 0) {
  FUNC_16(VAR_29);


 } else if (FUNC_4(VAR_29, VAR_7) >= 0) {
  FUNC_17(VAR_29);
 } else {
  FUNC_1(VAR_28, "Can't determine sensor slave IDs\n");
  goto error;
 }

 if (VAR_29->sensor < 0)
  goto error;

 FUNC_11(VAR_29, 0);

 switch (VAR_29->bridge) {
 case 148:
 case 147:
  if (VAR_29->sif) {
   VAR_30->cam_mode = VAR_21;
   VAR_30->nmodes = FUNC_0(VAR_21);
  }
  break;
 case 146:
 case 145:
  if (VAR_29->sif) {
   VAR_30->cam_mode = VAR_22;
   VAR_30->nmodes = FUNC_0(VAR_22);
  }
  break;
 case 144:
  if (VAR_29->sif) {
   VAR_30->cam_mode = VAR_23;
   VAR_30->nmodes = FUNC_0(VAR_23);
  }
  break;
 case 143:
  switch (VAR_29->sensor) {
  case 141:
  case 140:
   VAR_30->cam_mode = VAR_24;
   VAR_30->nmodes = FUNC_0(VAR_24);
   break;
  case 139:
   VAR_30->cam_mode = VAR_25;
   VAR_30->nmodes = FUNC_0(VAR_25);
   break;
  case 128:
   VAR_30->cam_mode = VAR_26;
   VAR_30->nmodes = FUNC_0(VAR_26);
   break;
  default:
   if (VAR_29->sif) {
    VAR_30->cam_mode = VAR_23;
    VAR_30->nmodes = FUNC_0(VAR_23);
   }
   break;
  }
  break;
 case 142:
  if (VAR_29->sif)
   VAR_30->nmodes = FUNC_0(VAR_27) - 1;


  FUNC_22(VAR_29);
  break;
 }


 switch (VAR_29->sensor) {
 case 141:
  FUNC_23(VAR_29, VAR_9, FUNC_0(VAR_9));


  FUNC_3(VAR_29, 0x13, 0x27, 0x27);
  break;
 case 140:
  FUNC_23(VAR_29, VAR_10, FUNC_0(VAR_10));


  FUNC_3(VAR_29, 0x13, 0x05, 0x05);
  break;
 case 139:
  FUNC_23(VAR_29, VAR_11, FUNC_0(VAR_11));


  FUNC_3(VAR_29, 0x13, 0x27, 0x27);
  break;
 case 138:
  FUNC_23(VAR_29, VAR_12, FUNC_0(VAR_12));
  break;
 case 137:
 case 136:
  FUNC_23(VAR_29, VAR_13, FUNC_0(VAR_13));
  break;
 default:


  FUNC_23(VAR_29, VAR_14, FUNC_0(VAR_14));
  FUNC_3(VAR_29, 0x0e, 0x00, 0x40);
  break;
 case 135:
 case 134:
  FUNC_23(VAR_29, VAR_15, FUNC_0(VAR_15));
  break;
 case 133:
 case 132:
  FUNC_23(VAR_29, VAR_16, FUNC_0(VAR_16));
  break;
 case 131:
  FUNC_2(VAR_29, VAR_4, VAR_3);
  FUNC_5(14);
  FUNC_19(VAR_29, VAR_1, 0x23);
  FUNC_24(VAR_29, VAR_8,
    FUNC_0(VAR_8));
  FUNC_23(VAR_29, VAR_17, FUNC_0(VAR_17));
  VAR_29->gspca_dev.curr_mode = 1;
  FUNC_10(VAR_29);
  FUNC_9(VAR_29);
  FUNC_20(VAR_28);
  FUNC_12(VAR_29);
  FUNC_13(VAR_29);
  FUNC_11(VAR_29, 0);
  break;
 case 130:
  FUNC_23(VAR_29, VAR_18, FUNC_0(VAR_18));
  break;
 case 129:
  FUNC_23(VAR_29, VAR_19, FUNC_0(VAR_19));
  break;
 case 128:
  FUNC_23(VAR_29, VAR_20, FUNC_0(VAR_20));



  break;
 }
 return VAR_28->usb_err;
error:
 FUNC_1(VAR_28, "OV519 Config failed\n");
 return -VAR_0;
}
