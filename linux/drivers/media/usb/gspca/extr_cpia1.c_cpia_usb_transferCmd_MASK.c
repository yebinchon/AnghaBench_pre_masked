
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gspca_dev*,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,unsigned int,int,int,int,int,int ,int,int) ;
 unsigned int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_7, u8 *VAR_8)
{
 u8 VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12 = VAR_8[6] | (VAR_8[7] << 8);

 int VAR_13 = 3;

 if (VAR_8[0] == VAR_0) {
  VAR_10 = FUNC_3(VAR_7->dev, 0);
  VAR_9 = VAR_4 | VAR_6 | VAR_5;
 } else if (VAR_8[0] == VAR_1) {
  VAR_10 = FUNC_4(VAR_7->dev, 0);
  VAR_9 = VAR_6 | VAR_5;
 } else {
  FUNC_0(VAR_7, "Unexpected first byte of command: %x\n",
     VAR_8[0]);
  return -VAR_2;
 }

retry:
 VAR_11 = FUNC_2(VAR_7->dev, VAR_10,
         VAR_8[1],
         VAR_9,
         VAR_8[2] | (VAR_8[3] << 8),
         VAR_8[4] | (VAR_8[5] << 8),
         VAR_7->usb_buf, VAR_12, 1000);

 if (VAR_11 < 0)
  FUNC_1("usb_control_msg %02x, error %d\n", VAR_8[1], VAR_11);

 if (VAR_11 == -VAR_3 && VAR_13 > 0) {
  VAR_13--;
  goto retry;
 }

 return (VAR_11 < 0) ? VAR_11 : 0;
}
