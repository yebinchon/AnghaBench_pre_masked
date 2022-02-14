
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int* usb_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_5, u8 VAR_6, int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;
 int VAR_9;

 FUNC_2(VAR_5, VAR_3, VAR_6);
 FUNC_2(VAR_5, VAR_1, 0x02);
 FUNC_0(5);
 FUNC_1(VAR_5, VAR_2);
 VAR_9 = VAR_5->usb_buf[0];
 if (VAR_8->bridge == VAR_0)
  return VAR_9;
 if (VAR_7 > 1) {
  FUNC_1(VAR_5, VAR_4);
  VAR_9 |= (VAR_5->usb_buf[0] << 8);
 }
 FUNC_1(VAR_5, VAR_1);
 if (VAR_5->usb_buf[0] == 0)
  return VAR_9;
 FUNC_2(VAR_5, VAR_1, 0x00);
 return -1;
}
