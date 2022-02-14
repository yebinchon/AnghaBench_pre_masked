
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;
struct rtl_priv {TYPE_1__ io; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (void*,scalar_t__,int ) ;
 struct usb_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct usb_device*,int,int ,int ,scalar_t__,scalar_t__,int *,scalar_t__,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct rtl_priv *VAR_4, u32 VAR_5, void *VAR_6,
        u16 VAR_7)
{
 struct device *VAR_8 = VAR_4->io.dev;
 struct usb_device *VAR_9 = FUNC_2(VAR_8);
 u8 VAR_10 = VAR_2;
 u8 VAR_11 = VAR_3;
 u16 VAR_12;
 u16 VAR_13 = VAR_1;
 int VAR_14 = FUNC_4(VAR_9, 0);
 u8 *VAR_15;

 VAR_12 = (u16)(VAR_5 & 0x0000ffff);
 VAR_15 = FUNC_1(VAR_6, VAR_7, VAR_0);
 if (!VAR_15)
  return;
 FUNC_3(VAR_9, VAR_14, VAR_10, VAR_11, VAR_12,
   VAR_13, VAR_15, VAR_7, 50);

 FUNC_0(VAR_15);
}
