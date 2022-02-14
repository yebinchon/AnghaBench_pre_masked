
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int dummy; } ;
struct cam {scalar_t__ nmodes; int * cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1,
      const struct usb_device_id *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 struct cam *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_1->cam;

 if (VAR_0)
  FUNC_1(VAR_3);


 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  goto fail;

 return 0;

fail:
 FUNC_0(VAR_1, "ALi m5602 webcam failed\n");
 VAR_4->cam_mode = ((void*)0);
 VAR_4->nmodes = 0;

 return VAR_5;
}
