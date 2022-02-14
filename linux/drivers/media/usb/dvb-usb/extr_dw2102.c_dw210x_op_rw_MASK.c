
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
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (int*,int*,int ) ;
 int FUNC_3 (struct usb_device*,unsigned int,int,int,int ,int ,int*,int ,int) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_7, u8 VAR_8, u16 VAR_9,
   u16 VAR_10, u8 * VAR_11, u16 VAR_12, int VAR_13)
{
 int VAR_14;
 u8 *VAR_15;
 unsigned int VAR_16 = (VAR_13 == VAR_0) ?
    FUNC_4(VAR_7, 0) : FUNC_5(VAR_7, 0);
 u8 VAR_17 = (VAR_13 == VAR_0) ? VAR_4 : VAR_5;

 VAR_15 = FUNC_1(VAR_12, VAR_3);
 if (!VAR_15)
  return -VAR_2;


 if (VAR_13 == VAR_1)
  FUNC_2(VAR_15, VAR_11, VAR_12);
 VAR_14 = FUNC_3(VAR_7, VAR_16, VAR_8, VAR_17 | VAR_6,
    VAR_9, VAR_10 , VAR_15, VAR_12, 2000);

 if (VAR_13 == VAR_0)
  FUNC_2(VAR_11, VAR_15, VAR_12);

 FUNC_0(VAR_15);
 return VAR_14;
}
