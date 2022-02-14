
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int idVendor; int idProduct; scalar_t__ driver_info; } ;
struct sd {scalar_t__ chip_revision; int expo12a; } ;
struct cam {int needs_full_bandwidth; void* nmodes; void* cam_mode; } ;
struct gspca_dev {int* usb_buf; struct cam cam; } ;
typedef int __u8 ;
typedef int __u16 ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_6;
 struct cam *VAR_9;
 __u16 VAR_10, VAR_11;
 __u8 VAR_12, VAR_13;





 FUNC_2(VAR_6, 0x8104, 1);
 VAR_12 = VAR_6->usb_buf[0];
 FUNC_2(VAR_6, 0x8105, 1);
 VAR_13 = VAR_6->usb_buf[0];
 VAR_10 = (VAR_13 << 8) | VAR_12;
 FUNC_2(VAR_6, 0x8106, 1);
 VAR_12 = VAR_6->usb_buf[0];
 FUNC_2(VAR_6, 0x8107, 1);
 VAR_13 = VAR_6->usb_buf[0];
 VAR_11 = (VAR_13 << 8) | VAR_12;
 if (VAR_10 != VAR_7->idVendor || VAR_11 != VAR_7->idProduct) {
  FUNC_1(VAR_6, VAR_0, "Bad vendor / product from device\n");
  return -VAR_1;
 }

 VAR_9 = &VAR_6->cam;
 VAR_9->needs_full_bandwidth = 1;

 VAR_8->chip_revision = VAR_7->driver_info;
 if (VAR_8->chip_revision == VAR_3) {
  VAR_9->cam_mode = VAR_4;
  VAR_9->nmodes = FUNC_0(VAR_4);
 } else {
  VAR_9->cam_mode = VAR_5;
  VAR_9->nmodes = FUNC_0(VAR_5);
 }
 VAR_8->expo12a = VAR_2;
 return 0;
}
