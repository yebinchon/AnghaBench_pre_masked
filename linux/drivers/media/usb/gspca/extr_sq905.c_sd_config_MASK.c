
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int work_struct; } ;
struct cam {int bulk; int bulk_size; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1,
  const struct usb_device_id *VAR_2)
{
 struct cam *VAR_3 = &VAR_1->cam;
 struct sd *VAR_4 = (struct sd *) VAR_1;


 VAR_3->bulk = 1;
 VAR_3->bulk_size = 64;

 FUNC_0(&VAR_4->work_struct, VAR_0);

 return 0;
}
