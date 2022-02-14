
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int bulk; int bulk_nurbs; int bulk_size; int nmodes; int cam_mode; } ;
struct gspca_dev {TYPE_1__ cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2,
  const struct usb_device_id *VAR_3)
{
 VAR_2->cam.cam_mode = VAR_1;
 VAR_2->cam.nmodes = FUNC_0(VAR_1);

 VAR_2->cam.bulk = 1;
 VAR_2->cam.bulk_nurbs = 1;
 VAR_2->cam.bulk_size = VAR_0*512;

 return 0;
}
