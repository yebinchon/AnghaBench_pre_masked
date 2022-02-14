
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int work_struct; } ;
struct cam {int bulk; int bulk_size; int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2,
  const struct usb_device_id *VAR_3)
{
 struct cam *VAR_4 = &VAR_2->cam;
 struct sd *VAR_5 = (struct sd *)VAR_2;


 VAR_4->bulk = 1;
 VAR_4->bulk_size = 64;
 VAR_4->cam_mode = VAR_1;
 VAR_4->nmodes = FUNC_0(VAR_1);

 FUNC_1(&VAR_5->work_struct, VAR_0);

 return 0;
}
