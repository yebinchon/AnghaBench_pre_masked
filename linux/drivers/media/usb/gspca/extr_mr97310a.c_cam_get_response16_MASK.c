
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int * usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1, u8 VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_1->usb_buf[0] = VAR_2;
 VAR_4 = FUNC_2(VAR_1, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, 16);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3)
  FUNC_0(VAR_1, VAR_0, "Register: %02x reads %02x%02x%02x\n",
     VAR_2,
     VAR_1->usb_buf[0],
     VAR_1->usb_buf[1],
     VAR_1->usb_buf[2]);

 return 0;
}
