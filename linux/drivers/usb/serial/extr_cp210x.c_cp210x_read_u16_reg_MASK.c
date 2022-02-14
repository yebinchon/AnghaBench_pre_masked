
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_serial_port {int dummy; } ;
typedef int le16_val ;
typedef int __le16 ;


 int FUNC_0 (struct usb_serial_port*,int ,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 __le16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3, sizeof(VAR_3));
 if (VAR_4)
  return VAR_4;

 *VAR_2 = FUNC_1(VAR_3);

 return 0;
}
