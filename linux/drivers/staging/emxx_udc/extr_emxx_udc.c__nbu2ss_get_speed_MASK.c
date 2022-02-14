
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {int USB_STATUS; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline enum usb_device_speed FUNC_1(struct nbu2ss_udc *VAR_3)
{
 u32 VAR_4;
 enum usb_device_speed VAR_5 = VAR_1;

 VAR_4 = FUNC_0(&VAR_3->p_regs->USB_STATUS);
 if (VAR_4 & VAR_0)
  VAR_5 = VAR_2;

 return VAR_5;
}
