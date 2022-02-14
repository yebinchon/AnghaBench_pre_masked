
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fpix {int work_struct; } ;
struct usb_device_id {int dummy; } ;
struct cam {int nmodes; int bulk; int bulk_size; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_3,
  const struct usb_device_id *VAR_4)
{
 struct usb_fpix *VAR_5 = (struct usb_fpix *) VAR_3;
 struct cam *VAR_6 = &VAR_3->cam;

 VAR_6->cam_mode = VAR_2;
 VAR_6->nmodes = 1;
 VAR_6->bulk = 1;
 VAR_6->bulk_size = VAR_0;

 FUNC_0(&VAR_5->work_struct, VAR_1);

 return 0;
}
