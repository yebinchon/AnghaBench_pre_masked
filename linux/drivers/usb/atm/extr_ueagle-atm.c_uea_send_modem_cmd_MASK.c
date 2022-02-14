
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
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int,int ,int *,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_8,
         u16 VAR_9, u16 VAR_10, const u8 *VAR_11)
{
 int VAR_12 = -VAR_2;
 u8 *VAR_13;

 VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_3);
 if (VAR_13) {
  VAR_12 = FUNC_2(VAR_8,
          FUNC_3(VAR_8, 0),
          VAR_4,
          VAR_5 | VAR_7 |
          VAR_6, VAR_9, 0, VAR_13,
          VAR_10, VAR_0);
  FUNC_0(VAR_13);
 }

 if (VAR_12 < 0)
  return VAR_12;

 return (VAR_12 == VAR_10) ? 0 : -VAR_1;
}
