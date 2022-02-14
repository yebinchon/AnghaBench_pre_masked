
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {char* usb_buf; int usb_err; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,char*,int,int,...) ;
 int FUNC_2 (int ,int ,int,int,int,int,char*,int,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct gspca_dev*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_2, u16 VAR_3, u16 VAR_4)
{
 char *VAR_5 = VAR_2->usb_buf;
 int VAR_6;

 FUNC_0(VAR_2, VAR_0,
    "reg_w bReq=0x0B, bReqT=0xC0, wVal=0x%04X, wInd=0x%04X\n\n",
    VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_2->dev, FUNC_3(VAR_2->dev, 0),
  0x0B, 0xC0, VAR_3, VAR_4, VAR_5, 1, 500);
 FUNC_0(VAR_2, VAR_0, "rc=%d, ret={0x%02x}\n", VAR_6, (int)VAR_5[0]);
 if (VAR_6 < 0) {
  FUNC_1(VAR_2, "Failed reg_w(0x0B, 0xC0, 0x%04X, 0x%04X) w/ rc %d\n",
     VAR_3, VAR_4, VAR_6);
  VAR_2->usb_err = VAR_6;
  return;
 }
 if (FUNC_4(VAR_2, VAR_5, VAR_6)) {
  FUNC_1(VAR_2, "Bad reply to reg_w(0x0B, 0xC0, 0x%04X, 0x%04X\n",
     VAR_3, VAR_4);
  VAR_2->usb_err = -VAR_1;
 }
}
