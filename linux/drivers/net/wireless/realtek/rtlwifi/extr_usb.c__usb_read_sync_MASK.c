
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int usb_lock; } ;
struct TYPE_4__ {struct device* dev; } ;
struct rtl_priv {scalar_t__ usb_data_index; TYPE_1__ locks; int * usb_data; TYPE_2__ io; } ;
struct device {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,scalar_t__,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct usb_device* FUNC_4 (struct device*) ;

__attribute__((used)) static u32 FUNC_5(struct rtl_priv *VAR_3, u32 VAR_4, u16 VAR_5)
{
 struct device *VAR_6 = VAR_3->io.dev;
 struct usb_device *VAR_7 = FUNC_4(VAR_6);
 u8 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 __le32 *VAR_11;
 unsigned long VAR_12;

 FUNC_2(&VAR_3->locks.usb_lock, VAR_12);
 if (++VAR_3->usb_data_index >= VAR_2)
  VAR_3->usb_data_index = 0;
 VAR_11 = &VAR_3->usb_data[VAR_3->usb_data_index];
 FUNC_3(&VAR_3->locks.usb_lock, VAR_12);
 VAR_8 = VAR_1;
 VAR_10 = VAR_0;

 VAR_9 = (u16)VAR_4;
 FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_5);
 return FUNC_1(*VAR_11);
}
