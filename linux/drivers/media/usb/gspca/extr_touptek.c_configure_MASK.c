
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {char* usb_buf; int usb_err; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;
 int FUNC_2 (struct gspca_dev*,char*,...) ;
 int FUNC_3 (int ,int ,int,int,int,int,char*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct gspca_dev*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_2)
{
 int VAR_3;
 char *VAR_4 = VAR_2->usb_buf;

 FUNC_1(VAR_2, VAR_0, "configure()\n\n");
 VAR_3 = FUNC_3(VAR_2->dev, FUNC_4(VAR_2->dev, 0),
        0x16, 0xC0, 0x0000, 0x0000, VAR_4, 2, 500);
 if (FUNC_6(VAR_2, VAR_4, VAR_3)) {
  FUNC_2(VAR_2, "failed key req\n");
  return -VAR_1;
 }
 VAR_3 = FUNC_3(VAR_2->dev, FUNC_5(VAR_2->dev, 0),
        0x01, 0x40, 0x0001, 0x000F, ((void*)0), 0, 500);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2, "failed to replay packet 176 w/ rc %d\n",
     VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2->dev, FUNC_5(VAR_2->dev, 0),
        0x01, 0x40, 0x0000, 0x000F, ((void*)0), 0, 500);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2, "failed to replay packet 178 w/ rc %d\n",
     VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2->dev, FUNC_5(VAR_2->dev, 0),
        0x01, 0x40, 0x0001, 0x000F, ((void*)0), 0, 500);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2, "failed to replay packet 180 w/ rc %d\n",
     VAR_3);
  return VAR_3;
 }
 VAR_2->usb_err = 0;
 FUNC_0(VAR_2);
 if (VAR_2->usb_err)
  return VAR_2->usb_err;


 VAR_3 = FUNC_3(VAR_2->dev, FUNC_5(VAR_2->dev, 0),
        0x01, 0x40, 0x0003, 0x000F, ((void*)0), 0, 500);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2, "failed to replay final packet w/ rc %d\n",
     VAR_3);
  return VAR_3;
 }

 FUNC_1(VAR_2, VAR_0, "Configure complete\n\n");
 return 0;
}
