
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; int dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int*,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3,
   __u16 VAR_4,
   __u16 VAR_5,
   __u16 VAR_6)
{
 int VAR_7;

 VAR_3->usb_buf[1] = 0;
 VAR_7 = FUNC_1(VAR_3->dev,
   FUNC_2(VAR_3->dev, 0),
   VAR_4,
   VAR_0 | VAR_2 | VAR_1,
   0,
   VAR_5,
   VAR_3->usb_buf, VAR_6,
   500);
 if (VAR_7 < 0) {
  FUNC_0("reg_r_12 err %d\n", VAR_7);
  return VAR_7;
 }
 return (VAR_3->usb_buf[1] << 8) + VAR_3->usb_buf[0];
}
