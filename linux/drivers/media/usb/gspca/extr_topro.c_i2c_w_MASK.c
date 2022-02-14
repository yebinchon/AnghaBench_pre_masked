
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; } ;
struct gspca_dev {scalar_t__* usb_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;

 FUNC_2(VAR_4, VAR_1, 0x00);
 FUNC_2(VAR_4, VAR_3, VAR_5);
 FUNC_2(VAR_4, VAR_2, VAR_6);
 FUNC_2(VAR_4, VAR_1, 0x01);
 if (VAR_7->bridge == VAR_0)
  return 0;
 FUNC_0(5);
 FUNC_1(VAR_4, VAR_1);
 if (VAR_4->usb_buf[0] == 0)
  return 0;
 FUNC_2(VAR_4, VAR_1, 0x00);
 return -1;
}
