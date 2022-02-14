
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ driver_info; } ;
struct sd {scalar_t__ subtype; } ;
struct cam {void* nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2,
   const struct usb_device_id *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 struct cam *VAR_5;

 VAR_5 = &VAR_2->cam;
 VAR_5->cam_mode = VAR_1;
 VAR_4->subtype = VAR_3->driver_info;
 if (VAR_4->subtype != VAR_0)
  VAR_5->nmodes = FUNC_0(VAR_1);
 else
  VAR_5->nmodes = FUNC_0(VAR_1) - 1;

 return 0;
}
