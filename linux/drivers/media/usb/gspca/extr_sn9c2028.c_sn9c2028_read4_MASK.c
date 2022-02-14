
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_6, u8 *VAR_7)
{
 int VAR_8;
 VAR_8 = FUNC_3(VAR_6->dev,
   FUNC_4(VAR_6->dev, 0),
   VAR_4,
   VAR_2 | VAR_5 | VAR_3,
   4, 0, VAR_6->usb_buf, 4, 500);
 if (VAR_8 != 4) {
  FUNC_2("read4 error %d\n", VAR_8);
  return (VAR_8 < 0) ? VAR_8 : -VAR_1;
 }
 FUNC_1(VAR_7, VAR_6->usb_buf, 4);
 FUNC_0(VAR_6, VAR_0, "read4 response %02x%02x%02x%02x\n",
    VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3]);
 return VAR_8;
}
