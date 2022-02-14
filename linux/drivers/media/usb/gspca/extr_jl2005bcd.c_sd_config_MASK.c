
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct sd {int* firmware_id; int block_size; int work_struct; } ;
struct cam {int bulk_size; int bulk; void* nmodes; void* cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gspca_dev*) ;
 void* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct cam *VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_3;

 VAR_5 = &VAR_3->cam;

 VAR_5->bulk_size = 64;
 VAR_5->bulk = 1;

 FUNC_2(VAR_3);
 if ((VAR_6->firmware_id[0] & 0xf0) == 0x40) {
  VAR_5->cam_mode = VAR_0;
  VAR_5->nmodes = FUNC_0(VAR_0);
  VAR_6->block_size = 0x80;
 } else {
  VAR_5->cam_mode = VAR_2;
  VAR_5->nmodes = FUNC_0(VAR_2);
  VAR_6->block_size = 0x200;
 }

 FUNC_1(&VAR_6->work_struct, VAR_1);

 return 0;
}
