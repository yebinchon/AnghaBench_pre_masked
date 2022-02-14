
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_7; int member_8; int member_11; int member_10; int member_9; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; } ;
typedef TYPE_1__ u8 ;
struct gspca_dev {int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_5,
  int VAR_6)
{
 static u8 VAR_7[2][12] = {
  {0xc6, 0, 0, 0, 0, 0, 0, 0, 0x20, 0, 0, 0},
  {0xd3, 0, 0, 0, 0, 0, 0, 0x01, 0, 0, 0, 0},
 };

 FUNC_0(VAR_5->usb_buf, VAR_7[VAR_6], 12);
 return FUNC_1(VAR_5->dev,
   FUNC_2(VAR_5->dev, 0),
   VAR_3,
   VAR_1 | VAR_4 |
   VAR_2, 0, 0, VAR_5->usb_buf,
   12, VAR_0);
}
