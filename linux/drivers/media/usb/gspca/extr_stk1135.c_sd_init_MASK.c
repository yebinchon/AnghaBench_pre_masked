
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int sensor_page; } ;
struct gspca_dev {int usb_err; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5)
{
 u16 VAR_6;
 char *VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_5;


 FUNC_1(VAR_5, VAR_1 + 2, 0x78);

 FUNC_1(VAR_5, VAR_1, (1 << 5));

 FUNC_1(VAR_5, VAR_1 + 3, 0x80);

 FUNC_1(VAR_5, VAR_2 + 1, 0x00);
 FUNC_1(VAR_5, VAR_2 + 3, 0x03);

 FUNC_1(VAR_5, VAR_3 + 1, 0x00);
 FUNC_1(VAR_5, VAR_3 + 3, 0x02);


 FUNC_1(VAR_5, VAR_4, 0x80);
 FUNC_1(VAR_5, VAR_4, 0x00);

 FUNC_1(VAR_5, VAR_4 + 3, 0xba);

 FUNC_1(VAR_5, VAR_0 + 3, 0x00);

 FUNC_4(VAR_5);


 VAR_8->sensor_page = 0xff;
 VAR_6 = FUNC_2(VAR_5, 0x000);

 switch (VAR_6) {
 case 0x148c:
  VAR_7 = "MT9M112";
  break;
 default:
  VAR_7 = "unknown";
 }
 FUNC_0("Detected sensor type %s (0x%x)\n", VAR_7, VAR_6);

 FUNC_3(VAR_5);

 return VAR_5->usb_err;
}
