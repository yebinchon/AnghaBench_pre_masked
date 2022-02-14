
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ driver_info; } ;
struct sd {scalar_t__ subtype; } ;
struct cam {void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 struct cam *VAR_6;

 VAR_6 = &VAR_3->cam;
 VAR_5->subtype = VAR_4->driver_info;
 if (VAR_5->subtype != VAR_0) {
  VAR_6->cam_mode = VAR_2;
  VAR_6->nmodes = FUNC_0(VAR_2);
 } else {
  VAR_6->cam_mode = VAR_1;
  VAR_6->nmodes = FUNC_0(VAR_1);
 }
 return 0;
}
