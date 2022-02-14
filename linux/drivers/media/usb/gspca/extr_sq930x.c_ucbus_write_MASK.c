
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ucbus_write_cmd {int bw_addr; int bw_data; } ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,...) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int,int,int,int,int *,int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_7,
   const struct ucbus_write_cmd *VAR_8,
   int VAR_9,
   int VAR_10)
{
 u8 *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14, VAR_15;

 if (VAR_7->usb_err < 0)
  return;

 if ((VAR_10 - 1) * 3 > VAR_3) {
  FUNC_1(VAR_7, "Bug: usb_buf overflow\n");
  VAR_7->usb_err = -VAR_1;
  return;
 }

 for (;;) {
  VAR_14 = VAR_9;
  if (VAR_14 > VAR_10)
   VAR_14 = VAR_10;
  VAR_9 -= VAR_14;

  VAR_12 = (VAR_8->bw_addr << 8) | VAR_2;
  VAR_13 = (VAR_8->bw_data << 8) | (VAR_8->bw_addr >> 8);

  VAR_11 = VAR_7->usb_buf;
  while (--VAR_14 > 0) {
   VAR_8++;
   *VAR_11++ = VAR_8->bw_addr;
   *VAR_11++ = VAR_8->bw_addr >> 8;
   *VAR_11++ = VAR_8->bw_data;
  }
  if (VAR_11 != VAR_7->usb_buf)
   FUNC_0(VAR_7, VAR_0, "ucbus v: %04x i: %04x %02x...%02x\n",
      VAR_12, VAR_13,
      VAR_7->usb_buf[0], VAR_11[-1]);
  else
   FUNC_0(VAR_7, VAR_0, "ucbus v: %04x i: %04x\n",
      VAR_12, VAR_13);
  VAR_15 = FUNC_4(VAR_7->dev,
    FUNC_5(VAR_7->dev, 0),
    0x0c,
      VAR_4 | VAR_6 | VAR_5,
    VAR_12, VAR_13,
    VAR_7->usb_buf, VAR_11 - VAR_7->usb_buf,
    500);
  if (VAR_15 < 0) {
   FUNC_3("ucbus_write failed %d\n", VAR_15);
   VAR_7->usb_err = VAR_15;
   return;
  }
  FUNC_2(30);
  if (VAR_9 <= 0)
   break;
  VAR_8++;
 }
}
