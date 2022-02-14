
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (struct usb_device*,unsigned int,int,int,int,int,int*,int,int) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_8, u8 VAR_9, u16 VAR_10,
       u8 * VAR_11, u16 VAR_12, int VAR_13)
{
 int VAR_14;
 u8 VAR_15;
 u8 *VAR_16;
 unsigned int VAR_17 = (VAR_13 == VAR_2) ?
  FUNC_4(VAR_8,0) : FUNC_5(VAR_8, 0);
 u8 VAR_18 = (VAR_13 == VAR_2) ? VAR_5 : VAR_6;

 VAR_16 = FUNC_1(VAR_12, VAR_1);
 if (!VAR_16)
  return -VAR_0;

 if (VAR_13 == VAR_4)
  FUNC_2(VAR_16, VAR_11, VAR_12);
 VAR_14 = FUNC_3(VAR_8, VAR_17, VAR_9,
   VAR_18 | VAR_7, VAR_10, 0x0,
   VAR_16, VAR_12, 2000);

 if (VAR_9 == VAR_3) {
  VAR_15 = VAR_16[0];
  if (FUNC_3(VAR_8, FUNC_4(VAR_8, 0),
       VAR_3, VAR_5 | VAR_7,
       0x01, 0x0, VAR_16, 1, 2000) < 1 || VAR_16[0] != 0x08) {
   VAR_14 = 0;
   goto out;
  }
  VAR_16[0] = VAR_15;
 }
 if (VAR_13 == VAR_2)
  FUNC_2(VAR_11, VAR_16, VAR_12);
out:
 FUNC_0(VAR_16);
 return VAR_14;
}
