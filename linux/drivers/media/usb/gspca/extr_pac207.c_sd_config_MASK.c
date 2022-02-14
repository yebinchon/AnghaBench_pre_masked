
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device_id {int idVendor; int idProduct; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct cam *VAR_5;
 u8 VAR_6[2];

 VAR_6[0] = FUNC_2(VAR_3, 0x0000);
 VAR_6[1] = FUNC_2(VAR_3, 0x0001);
 VAR_6[0] = ((VAR_6[0] & 0x0f) << 4) | ((VAR_6[1] & 0xf0) >> 4);
 VAR_6[1] = VAR_6[1] & 0x0f;
 FUNC_1(VAR_3, VAR_0, "Pixart Sensor ID 0x%02X Chips ID 0x%02X\n",
    VAR_6[0], VAR_6[1]);

 if (VAR_6[0] != 0x27) {
  FUNC_1(VAR_3, VAR_0, "Error invalid sensor ID!\n");
  return -VAR_1;
 }

 FUNC_1(VAR_3, VAR_0,
    "Pixart PAC207BCA Image Processor and Control Chip detected (vid/pid 0x%04X:0x%04X)\n",
    VAR_4->idVendor, VAR_4->idProduct);

 VAR_5 = &VAR_3->cam;
 VAR_5->cam_mode = VAR_2;
 VAR_5->nmodes = FUNC_0(VAR_2);

 return 0;
}
