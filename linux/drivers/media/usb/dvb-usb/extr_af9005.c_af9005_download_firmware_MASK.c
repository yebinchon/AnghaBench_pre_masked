
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_device*,int ,int*,int*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int,int (*) (char*)) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int*,scalar_t__,int) ;
 int FUNC_7 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_8 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_9(struct usb_device *VAR_7, const struct firmware *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;

 u8 *VAR_13;
 u8 VAR_14;

 VAR_13 = FUNC_5(VAR_3 + 2, VAR_6);
 if (!VAR_13)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_7, VAR_4, &VAR_14, VAR_13,
     VAR_3 + 2);
 if (VAR_11)
  goto err;
 if (VAR_14 != 0x01) {
  FUNC_3("before downloading firmware, FW_CONFIG expected 0x01, received 0x%x", VAR_14);
  VAR_11 = -VAR_0;
  goto err;
 }
 VAR_10 = VAR_8->size / VAR_3;
 VAR_13[0] = (u8) (VAR_3 & 0xff);
 VAR_13[1] = (u8) ((VAR_3 >> 8) & 0xff);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_6(&VAR_13[2], VAR_8->data + VAR_9 * VAR_3,
         VAR_3);
  FUNC_1(">>> ");
  FUNC_2(VAR_13, VAR_3 + 2, FUNC_1);
  VAR_11 = FUNC_7(VAR_7,
       FUNC_8(VAR_7, 0x02),
       VAR_13, VAR_3 + 2, &VAR_12, 1000);
  if (VAR_11) {
   FUNC_3("firmware download failed at packet %d with code %d", VAR_9, VAR_11);
   goto err;
  }
 }
 VAR_11 = FUNC_0(VAR_7, VAR_5, &VAR_14,
     VAR_13, VAR_3 + 2);
 if (VAR_11)
  goto err;
 if (VAR_14 != (u8) (VAR_10 & 0xff)) {
  FUNC_3("after downloading firmware, FW_CONFIRM expected 0x%x, received 0x%x", VAR_10 & 0xff, VAR_14);
  VAR_11 = -VAR_0;
  goto err;
 }
 VAR_11 = FUNC_0(VAR_7, VAR_2, &VAR_14, VAR_13,
     VAR_3 + 2);
 if (VAR_11)
  goto err;
 VAR_11 = FUNC_0(VAR_7, VAR_4, &VAR_14, VAR_13,
     VAR_3 + 2);
 if (VAR_11)
  goto err;
 if (VAR_14 != 0x02) {
  FUNC_3("after downloading firmware, FW_CONFIG expected 0x02, received 0x%x", VAR_14);
  VAR_11 = -VAR_0;
  goto err;
 }

err:
 FUNC_4(VAR_13);
 return VAR_11;

}
