
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device_id {size_t driver_info; } ;
struct sd {size_t subtype; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,...) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int VAR_1 ;





 int FUNC_3 (struct gspca_dev*,int const**) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_2,
   const struct usb_device_id *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 struct cam *VAR_5;
 const u16 (*VAR_6)[2];
 static const u16 (*(VAR_7[]))[2] = {
  129,
  130,
  131,
  128,
  128,
  132,
 };
 int VAR_8, VAR_9;





 VAR_8 = FUNC_2(VAR_2, 0x8104);
 VAR_9 = FUNC_2(VAR_2, 0x8105);
 FUNC_1(VAR_2, VAR_0, "Webcam Vendor ID: 0x%02x%02x\n",
    VAR_9, VAR_8);

 VAR_8 = FUNC_2(VAR_2, 0x8106);
 VAR_9 = FUNC_2(VAR_2, 0x8107);
 FUNC_1(VAR_2, VAR_0, "Webcam Product ID: 0x%02x%02x\n",
    VAR_9, VAR_8);

 VAR_8 = FUNC_2(VAR_2, 0x8621);
 FUNC_1(VAR_2, VAR_0, "Window 1 average luminance: %d\n",
    VAR_8);

 VAR_5 = &VAR_2->cam;
 VAR_5->cam_mode = VAR_1;
 VAR_5->nmodes = FUNC_0(VAR_1);

 VAR_4->subtype = VAR_3->driver_info;

 VAR_6 = VAR_7[VAR_4->subtype];
 return FUNC_3(VAR_2, VAR_6);
}
