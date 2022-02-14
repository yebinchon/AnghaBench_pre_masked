
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ usb_err; } ;
struct sd {int sensor_addr; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,char*,int) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int*) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct sd*) ;
 int FUNC_6 (struct sd*,int) ;
 int FUNC_7 (struct sd*) ;
 int FUNC_8 (struct sd*,int) ;

__attribute__((used)) static int FUNC_9(struct sd *VAR_1, u8 VAR_2)
{
 struct gspca_dev *VAR_3 = (struct gspca_dev *)VAR_1;
 int VAR_4 = 0;
 u8 VAR_5;


 FUNC_8(VAR_1, 0x0013);

 FUNC_4(VAR_1);
 FUNC_6(VAR_1, VAR_1->sensor_addr);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1, VAR_2);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_6(VAR_1, VAR_1->sensor_addr + 1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, &VAR_5);



 FUNC_7(VAR_1);
 FUNC_5(VAR_1);


 FUNC_8(VAR_1, 0x0030);

 if (VAR_1->gspca_dev.usb_err >= 0) {
  VAR_4 = VAR_5;
  FUNC_0(VAR_3, VAR_0, "i2c [0x%02X] -> 0x%02X\n",
     VAR_2, VAR_5);
 } else
  FUNC_1(VAR_3, "i2c read [0x%02x] failed\n", VAR_2);

 return VAR_4;
}
