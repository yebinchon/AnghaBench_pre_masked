
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_4 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_4, u32 VAR_5)
{
 int VAR_6 = 0, VAR_7;
 u8 *VAR_8;

 VAR_8 = FUNC_2(8, VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8[0] = VAR_3;
 VAR_8[1] = 0;
 VAR_8[2] = 0;
 VAR_8[3] = 0;
 VAR_8[4] = (VAR_5 >> 24) & 0xff;
 VAR_8[5] = (VAR_5 >> 16) & 0xff;
 VAR_8[6] = (VAR_5 >> 8) & 0xff;
 VAR_8[7] = VAR_5 & 0xff;

 if ((VAR_6 = FUNC_3(VAR_4, FUNC_4(VAR_4, 0x01),VAR_8,8,&VAR_7,1000)) < 0) {
  FUNC_0("jumpram to 0x%x failed\n",VAR_5);
  goto out;
 }
 if (VAR_7 != 8) {
  FUNC_0("jumpram to 0x%x failed\n",VAR_5);
  VAR_6 = -VAR_0;
  goto out;
 }
out:
 FUNC_1(VAR_8);
 return VAR_6;
}
