
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int hstart; int vstart; } ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int,int*) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u16 VAR_4;

 FUNC_1(VAR_2, 0x00, &VAR_4);
 if (VAR_2->usb_err < 0)
  return;


 switch (VAR_4) {
 case 0x8411:
 case 0x8421:
  FUNC_4("MT9M001 color sensor detected\n");
  break;
 case 0x8431:
  FUNC_4("MT9M001 mono sensor detected\n");
  break;
 default:
  FUNC_3("No MT9M001 chip detected, ID = %x\n\n", VAR_4);
  VAR_2->usb_err = -VAR_0;
  return;
 }

 FUNC_2(VAR_2, VAR_1, FUNC_0(VAR_1));
 if (VAR_2->usb_err < 0)
  FUNC_3("MT9M001 sensor initialization failed\n");

 VAR_3->hstart = 1;
 VAR_3->vstart = 1;
}
