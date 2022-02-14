
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int bridge; int sensor; int flags; int ag_cnt; int work; int quality; } ;
struct cam {int npkt; void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5,
   const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 struct cam *VAR_8;

 VAR_7->bridge = VAR_6->driver_info >> 16;
 VAR_7->sensor = VAR_6->driver_info >> 8;
 VAR_7->flags = VAR_6->driver_info;

 VAR_8 = &VAR_5->cam;
 if (VAR_7->sensor == VAR_1) {
  VAR_8->cam_mode = VAR_2;
  VAR_8->nmodes = FUNC_0(VAR_2);
 } else {
  VAR_8->cam_mode = VAR_4;
  VAR_8->nmodes = FUNC_0(VAR_4);
 }
 VAR_8->npkt = 24;

 VAR_7->ag_cnt = -1;
 VAR_7->quality = VAR_0;

 FUNC_1(&VAR_7->work, VAR_3);

 return 0;
}
