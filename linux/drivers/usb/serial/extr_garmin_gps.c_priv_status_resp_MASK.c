
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct garmin_data {int mode; int serial_num; scalar_t__ privpkt; } ;
typedef int __u8 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_serial_port*,int *,int) ;
 struct garmin_data* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_4)
{
 struct garmin_data *VAR_5 = FUNC_2(VAR_4);
 __le32 *VAR_6 = (__le32 *)VAR_5->privpkt;

 VAR_6[0] = FUNC_0(VAR_0);
 VAR_6[1] = FUNC_0(VAR_1);
 VAR_6[2] = FUNC_0(12);
 VAR_6[3] = FUNC_0(VAR_2 << 16 | VAR_3);
 VAR_6[4] = FUNC_0(VAR_5->mode);
 VAR_6[5] = FUNC_0(VAR_5->serial_num);

 FUNC_1(VAR_4, (__u8 *)VAR_6, 6 * 4);
}
