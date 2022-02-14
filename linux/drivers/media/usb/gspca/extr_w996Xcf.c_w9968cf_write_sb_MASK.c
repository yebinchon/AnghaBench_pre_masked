
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int usb_err; int dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_4, u16 VAR_5)
{
 int VAR_6;

 if (VAR_4->gspca_dev.usb_err < 0)
  return;


 FUNC_1(150);



 VAR_6 = FUNC_2(VAR_4->gspca_dev.dev,
  FUNC_3(VAR_4->gspca_dev.dev, 0),
  0,
  VAR_0 | VAR_2 | VAR_1,
  VAR_5, 0x01, ((void*)0), 0, 500);

 FUNC_1(VAR_3);

 if (VAR_6 < 0) {
  FUNC_0("Write SB reg [01] %04x failed\n", VAR_5);
  VAR_4->gspca_dev.usb_err = VAR_6;
 }
}
