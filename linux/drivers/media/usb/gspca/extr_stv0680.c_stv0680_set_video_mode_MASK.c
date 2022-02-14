
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {scalar_t__ current_mode; } ;
struct gspca_dev {scalar_t__* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_1, u8 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 if (VAR_3->current_mode == VAR_2)
  return 0;

 FUNC_1(VAR_1->usb_buf, 0, 8);
 VAR_1->usb_buf[0] = VAR_2;

 if (FUNC_4(VAR_1, 3, 0x07, 0x0100, 0x08) != 0x08) {
  FUNC_0(VAR_1, "Set_Camera_Mode failed\n");
  return FUNC_3(VAR_1, -VAR_0);
 }


 if (FUNC_2(VAR_1) != VAR_2) {
  FUNC_0(VAR_1, "Error setting camera video mode!\n");
  return -VAR_0;
 }

 VAR_3->current_mode = VAR_2;

 return 0;
}
