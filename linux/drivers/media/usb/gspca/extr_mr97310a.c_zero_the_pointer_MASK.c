
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,int,int ) ;
 int FUNC_1 (struct gspca_dev*,char*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_0)
{
 __u8 *VAR_1 = VAR_0->usb_buf;
 int VAR_2;
 u8 VAR_3 = 0;
 int VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_0, 0x21, 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1[0] = 0x19;
 VAR_1[1] = 0x51;
 VAR_2 = FUNC_3(VAR_0, 2);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x21, 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1[0] = 0x19;
 VAR_1[1] = 0xba;
 VAR_2 = FUNC_3(VAR_0, 2);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x21, 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1[0] = 0x19;
 VAR_1[1] = 0x00;
 VAR_2 = FUNC_3(VAR_0, 2);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x21, 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1[0] = 0x19;
 VAR_1[1] = 0x00;
 VAR_2 = FUNC_3(VAR_0, 2);
 if (VAR_2 < 0)
  return VAR_2;

 while (VAR_3 != 0x0a && VAR_4 < 256) {
  VAR_2 = FUNC_0(VAR_0, 0x21, 0);
  VAR_3 = VAR_1[0];
  VAR_4++;
  if (VAR_2 < 0)
   return VAR_2;
 }
 if (VAR_3 != 0x0a)
  FUNC_1(VAR_0, "status is %02x\n", VAR_3);

 VAR_4 = 0;
 while (VAR_4 < 4) {
  VAR_1[0] = 0x19;
  VAR_1[1] = 0x00;
  VAR_2 = FUNC_3(VAR_0, 2);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_2 = FUNC_0(VAR_0, 0x21, 0);
  VAR_3 = VAR_1[0];
  VAR_4++;
  if (VAR_2 < 0)
   return VAR_2;
 }

 VAR_1[0] = 0x19;
 VAR_2 = FUNC_3(VAR_0, 1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, 16);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
