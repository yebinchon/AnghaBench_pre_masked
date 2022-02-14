
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int driver_info; } ;
struct sd {int sensor; int bridge; } ;
struct cam {int npkt; void* nmodes; void* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;
struct TYPE_2__ {int flags; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int) ;
 TYPE_1__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5,
   const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 struct cam *VAR_8;

 FUNC_1(VAR_5, 0x00);
 if (VAR_5->usb_buf[0] != 0x10)
  return -VAR_0;


 VAR_7->sensor = VAR_6->driver_info >> 8;
 VAR_7->bridge = VAR_6->driver_info & 0xff;

 VAR_8 = &VAR_5->cam;
 if (!(VAR_2[VAR_7->sensor].flags & VAR_1)) {
  VAR_8->cam_mode = VAR_4;
  VAR_8->nmodes = FUNC_0(VAR_4);
 } else {
  VAR_8->cam_mode = VAR_3;
  VAR_8->nmodes = FUNC_0(VAR_3);
 }
 VAR_8->npkt = 36;

 return 0;
}
