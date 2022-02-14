
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int hstart; int vstart; } ;
struct gspca_dev {int usb_err; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int,int*) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_2)
{
 u16 VAR_3;
 struct sd *VAR_4 = (struct sd *) VAR_2;

 FUNC_1(VAR_2, 0x1c, &VAR_3);
 if (VAR_2->usb_err < 0)
  return;

 if (VAR_3 != 0x7fa2) {
  FUNC_5("sensor id for ov9650 doesn't match (0x%04x)\n", VAR_3);
  VAR_2->usb_err = -VAR_0;
  return;
 }

 FUNC_2(VAR_2, 0x12, 0x80);
 FUNC_4(200);
 FUNC_3(VAR_2, VAR_1, FUNC_0(VAR_1));
 if (VAR_2->usb_err < 0)
  FUNC_5("OV9650 sensor initialization failed\n");
 VAR_4->hstart = 1;
 VAR_4->vstart = 7;
}
