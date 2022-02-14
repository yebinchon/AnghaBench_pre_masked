
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct f81534_port_private {int msr_lock; int shadow_msr; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct f81534_port_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_1)
{
 struct f81534_port_private *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;
 int VAR_4;
 u8 VAR_5;


 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;


 FUNC_1(&VAR_2->msr_lock, VAR_3);
 VAR_2->shadow_msr = VAR_5;
 FUNC_2(&VAR_2->msr_lock, VAR_3);

 return 0;
}
