
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idProduct; int idVendor; } ;
struct sd {int work_struct; } ;
struct cam {int nmodes; int bulk_size; int bulk; int cam_mode; } ;
struct gspca_dev {scalar_t__* usb_buf; struct cam cam; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,scalar_t__,int,...) ;
 int FUNC_2 (struct gspca_dev*,char*) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct gspca_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_4,
  const struct usb_device_id *VAR_5)
{
 struct cam *VAR_6 = &VAR_4->cam;
 struct sd *VAR_7 = (struct sd *) VAR_4;
 int VAR_8;

 FUNC_1(VAR_4, VAR_0,
    "SQ9050 camera detected (vid/pid 0x%04X:0x%04X)\n",
    VAR_5->idVendor, VAR_5->idProduct);

 VAR_8 = FUNC_3(VAR_4, VAR_1, 0);
 if (VAR_8 < 0) {
  FUNC_2(VAR_4, "Get version command failed\n");
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_4, 0xf5, 0, 20);
 if (VAR_8 < 0) {
  FUNC_2(VAR_4, "Reading version command failed\n");
  return VAR_8;
 }

 FUNC_1(VAR_4, VAR_0,
    "SQ9050 ID string: %02x - %*ph\n",
    VAR_4->usb_buf[3], 6, VAR_4->usb_buf + 14);

 VAR_6->cam_mode = VAR_3;
 VAR_6->nmodes = 2;
 if (VAR_4->usb_buf[15] == 0)
  VAR_6->nmodes = 1;

 VAR_6->bulk_size = 32;
 VAR_6->bulk = 1;
 FUNC_0(&VAR_7->work_struct, VAR_2);
 return 0;
}
