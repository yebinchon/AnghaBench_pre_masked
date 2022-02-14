
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int ,unsigned int,int,int,int ,int ,int ,int,int) ;
 unsigned int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_5, int VAR_6, u8 VAR_7, u16 VAR_8,
         int VAR_9)
{
 int VAR_10 = -1;
 u8 VAR_11 = 0;
 unsigned int VAR_12 = 0;

 switch (VAR_6) {
 case 0:
  VAR_11 = VAR_0 | VAR_4 | VAR_3;
  VAR_12 = FUNC_2(VAR_5->dev, 0);
  break;
 case 1:
  VAR_11 = VAR_1 | VAR_4 | VAR_3;
  VAR_12 = FUNC_3(VAR_5->dev, 0);
  break;
 case 2:
  VAR_11 = VAR_0 | VAR_2;
  VAR_12 = FUNC_2(VAR_5->dev, 0);
  break;
 case 3:
  VAR_11 = VAR_1 | VAR_4 | VAR_2;
  VAR_12 = FUNC_3(VAR_5->dev, 0);
  break;
 }

 VAR_10 = FUNC_1(VAR_5->dev, VAR_12,
         VAR_7, VAR_11,
         VAR_8, 0, VAR_5->usb_buf, VAR_9, 500);

 if ((VAR_10 < 0) && (VAR_7 != 0x0a))
  FUNC_0("usb_control_msg error %i, request = 0x%x, error = %i\n",
         VAR_6, VAR_7, VAR_10);

 return VAR_10;
}
