
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct f81534_port_private {int shadow_mcr; int mcr_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct usb_serial_port*,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct f81534_port_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_13)
{
 struct usb_serial_port *VAR_14 = VAR_13->driver_data;
 struct f81534_port_private *VAR_15 = FUNC_3(VAR_14);
 int VAR_16;
 int VAR_17;
 u8 VAR_18;
 u8 VAR_19;


 VAR_16 = FUNC_0(VAR_14, VAR_0, &VAR_18);
 if (VAR_16)
  return VAR_16;

 FUNC_1(&VAR_15->mcr_mutex);
 VAR_19 = VAR_15->shadow_mcr;
 FUNC_2(&VAR_15->mcr_mutex);

 VAR_17 = (VAR_19 & VAR_7 ? VAR_4 : 0) |
     (VAR_19 & VAR_8 ? VAR_6 : 0) |
     (VAR_18 & VAR_9 ? VAR_2 : 0) |
     (VAR_18 & VAR_10 ? VAR_1 : 0) |
     (VAR_18 & VAR_12 ? VAR_5 : 0) |
     (VAR_18 & VAR_11 ? VAR_3 : 0);

 return VAR_17;
}
