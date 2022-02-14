
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {scalar_t__ driver_info; } ;
struct sd {scalar_t__ bridge; int framerate; } ;
struct TYPE_2__ {int mode_framerates; int nmodes; int cam_mode; } ;
struct gspca_dev {TYPE_1__ cam; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_5,
       const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;

 VAR_7->bridge = VAR_6->driver_info;

 VAR_5->cam.cam_mode = VAR_4;
 VAR_5->cam.nmodes = FUNC_0(VAR_4);
 VAR_5->cam.mode_framerates = VAR_7->bridge == VAR_0 ?
   VAR_2 : VAR_3;

 VAR_7->framerate = VAR_1;
 return 0;
}
