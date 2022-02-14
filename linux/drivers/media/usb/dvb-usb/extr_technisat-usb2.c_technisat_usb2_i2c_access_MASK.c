
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int,int (*) (char*)) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_7 (struct usb_device*,int) ;
 int FUNC_8 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_9(struct usb_device *VAR_5,
  u8 VAR_6, u8 *VAR_7, u8 VAR_8, u8 *VAR_9, u8 VAR_10)
{
 u8 *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_4(64, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_0("i2c-access: %02x, tx: ", VAR_6);
 FUNC_1(VAR_7, VAR_8, FUNC_0);
 FUNC_0(" ");

 if (VAR_8 > 62) {
  FUNC_2("i2c TX buffer can't exceed 62 bytes (dev 0x%02x)",
    VAR_6);
  VAR_8 = 62;
 }
 if (VAR_10 > 62) {
  FUNC_2("i2c RX buffer can't exceed 62 bytes (dev 0x%02x)",
    VAR_6);
  VAR_10 = 62;
 }

 VAR_11[0] = VAR_2;
 VAR_11[1] = VAR_6 << 1;

 if (VAR_9 != ((void*)0)) {
  VAR_11[0] |= VAR_10;
  VAR_11[1] |= 1;
 }

 FUNC_5(&VAR_11[2], VAR_7, VAR_8);
 VAR_12 = FUNC_6(VAR_5,
   FUNC_8(VAR_5, 0x01),
   VAR_11, 2 + VAR_8,
   ((void*)0), 1000);

 if (VAR_12 < 0) {
  FUNC_2("i2c-error: out failed %02x = %d", VAR_6, VAR_12);
  goto err;
 }

 VAR_12 = FUNC_6(VAR_5,
   FUNC_7(VAR_5, 0x01),
   VAR_11, 64, &VAR_13, 1000);
 if (VAR_12 < 0) {
  FUNC_2("i2c-error: in failed %02x = %d", VAR_6, VAR_12);
  goto err;
 }

 if (VAR_11[0] != VAR_4) {
  FUNC_2("i2c-error: %02x = %d", VAR_6, VAR_11[0]);

  if (!(VAR_11[0] == VAR_3 &&
    VAR_6 == 0x60
                                     ))
   goto err;
 }

 FUNC_0("status: %d, ", VAR_11[0]);

 if (VAR_9 != ((void*)0)) {
  FUNC_5(VAR_9, &VAR_11[2], VAR_10);

  FUNC_0("rx (%d): ", VAR_10);
  FUNC_1(VAR_9, VAR_10, FUNC_0);
 }

 FUNC_0("\n");

err:
 FUNC_3(VAR_11);
 return VAR_12;
}
