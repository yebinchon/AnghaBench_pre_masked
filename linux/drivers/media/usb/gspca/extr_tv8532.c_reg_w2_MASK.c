
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int* usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int ,int,int*,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3,
    u16 VAR_4, u16 VAR_5)
{
 VAR_3->usb_buf[0] = VAR_5;
 VAR_3->usb_buf[1] = VAR_5 >> 8;
 FUNC_0(VAR_3->dev,
   FUNC_1(VAR_3->dev, 0),
   0x02,
   VAR_0 | VAR_2 | VAR_1,
   0,
   VAR_4, VAR_3->usb_buf, 2, 500);
}
