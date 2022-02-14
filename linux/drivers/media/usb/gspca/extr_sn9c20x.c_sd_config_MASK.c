
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int sensor; int i2c_addr; int flags; int i2c_intf; int exposure_step; int work; scalar_t__ older_step; scalar_t__ old_step; } ;
struct cam {int needs_full_bandwidth; void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;






 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_4,
   const struct usb_device_id *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;
 struct cam *VAR_7;

 VAR_7 = &VAR_4->cam;
 VAR_7->needs_full_bandwidth = 1;

 VAR_6->sensor = VAR_5->driver_info >> 8;
 VAR_6->i2c_addr = VAR_5->driver_info;
 VAR_6->flags = VAR_5->driver_info >> 16;
 VAR_6->i2c_intf = 0x80;

 switch (VAR_6->sensor) {
 case 130:
 case 131:
 case 129:
 case 128:
  VAR_7->cam_mode = VAR_2;
  VAR_7->nmodes = FUNC_0(VAR_2);
  break;
 case 132:
  VAR_7->cam_mode = VAR_0;
  VAR_7->nmodes = FUNC_0(VAR_0);
  break;
 case 133:
  VAR_6->i2c_intf = 0x81;

 default:
  VAR_7->cam_mode = VAR_3;
  VAR_7->nmodes = FUNC_0(VAR_3);
  break;
 }

 VAR_6->old_step = 0;
 VAR_6->older_step = 0;
 VAR_6->exposure_step = 16;

 FUNC_1(&VAR_6->work, VAR_1);

 return 0;
}
