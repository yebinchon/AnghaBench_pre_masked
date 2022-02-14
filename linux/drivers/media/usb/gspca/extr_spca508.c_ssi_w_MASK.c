
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {scalar_t__* usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_0,
  u16 VAR_1, u16 VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_3(VAR_0, 0x8802, VAR_1 >> 8);
 if (VAR_3 < 0)
  goto out;
 VAR_3 = FUNC_3(VAR_0, 0x8801, VAR_1 & 0x00ff);
 if (VAR_3 < 0)
  goto out;
 if ((VAR_1 & 0xff00) == 0x1000) {
  VAR_3 = FUNC_3(VAR_0, 0x8805, VAR_2 & 0x00ff);
  if (VAR_3 < 0)
   goto out;
  VAR_2 >>= 8;
 }
 VAR_3 = FUNC_3(VAR_0, 0x8800, VAR_2);
 if (VAR_3 < 0)
  goto out;


 VAR_4 = 10;
 for (;;) {
  VAR_3 = FUNC_2(VAR_0, 0x8803);
  if (VAR_3 < 0)
   break;
  if (VAR_0->usb_buf[0] == 0)
   break;
  if (--VAR_4 <= 0) {
   FUNC_0(VAR_0, "ssi_w busy %02x\n",
      VAR_0->usb_buf[0]);
   VAR_3 = -1;
   break;
  }
  FUNC_1(8);
 }

out:
 return VAR_3;
}
