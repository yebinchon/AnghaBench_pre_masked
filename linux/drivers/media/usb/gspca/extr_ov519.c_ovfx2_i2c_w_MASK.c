
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int usb_err; int dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct gspca_dev*,char*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct gspca_dev *VAR_7 = (struct gspca_dev *)VAR_4;
 int VAR_8;

 if (VAR_4->gspca_dev.usb_err < 0)
  return;

 VAR_8 = FUNC_2(VAR_4->gspca_dev.dev,
   FUNC_3(VAR_4->gspca_dev.dev, 0),
   0x02,
   VAR_1 | VAR_3 | VAR_2,
   (u16) VAR_6, (u16) VAR_5, ((void*)0), 0, 500);

 if (VAR_8 < 0) {
  FUNC_1(VAR_7, "ovfx2_i2c_w %02x failed %d\n", VAR_5, VAR_8);
  VAR_4->gspca_dev.usb_err = VAR_8;
 }

 FUNC_0(VAR_7, VAR_0, "ovfx2_i2c_w %02x %02x\n", VAR_5, VAR_6);
}
