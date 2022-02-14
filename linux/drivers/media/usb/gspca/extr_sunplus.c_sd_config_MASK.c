
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int bridge; int subtype; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (struct gspca_dev*,int,int ,int) ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_7,
   const struct usb_device_id *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_7;
 struct cam *VAR_10;

 VAR_10 = &VAR_7->cam;

 VAR_9->bridge = VAR_8->driver_info >> 8;
 VAR_9->subtype = VAR_8->driver_info;

 if (VAR_9->subtype == VAR_0) {



  FUNC_1(VAR_7, 0x20, 0, 1);
  switch (VAR_7->usb_buf[0]) {
  case 1:
   break;
  case 2:
   VAR_9->bridge = VAR_1;
   VAR_9->subtype = 0;
   break;
  default:
   return -VAR_2;
  }
 }

 switch (VAR_9->bridge) {
 default:



  VAR_10->cam_mode = VAR_5;
  VAR_10->nmodes = FUNC_0(VAR_5);
  break;
 case 128:
  VAR_10->cam_mode = VAR_4;
  if (VAR_9->subtype == VAR_3)
   VAR_10->nmodes = FUNC_0(VAR_4) - 1;
  else
   VAR_10->nmodes = FUNC_0(VAR_4);
  break;
 case 129:
  VAR_10->cam_mode = VAR_6;
  VAR_10->nmodes = FUNC_0(VAR_6);
  break;
 }
 return 0;
}
