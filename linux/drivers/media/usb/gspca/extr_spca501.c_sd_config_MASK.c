
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; } ;
struct sd {int subtype; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1,
   const struct usb_device_id *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 struct cam *VAR_4;

 VAR_4 = &VAR_1->cam;
 VAR_4->cam_mode = VAR_0;
 VAR_4->nmodes = FUNC_0(VAR_0);
 VAR_3->subtype = VAR_2->driver_info;

 return 0;
}
