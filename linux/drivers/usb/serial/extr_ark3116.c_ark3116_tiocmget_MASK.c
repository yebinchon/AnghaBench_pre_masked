
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ark3116_private {int mcr; int msr; int status_lock; int hw_lock; } ;
typedef int __u32 ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ark3116_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_16)
{
 struct usb_serial_port *VAR_17 = VAR_16->driver_data;
 struct ark3116_private *VAR_18 = FUNC_4(VAR_17);
 __u32 VAR_19;
 __u32 VAR_20;
 unsigned long VAR_21;

 FUNC_0(&VAR_18->hw_lock);
 VAR_20 = VAR_18->mcr;
 FUNC_1(&VAR_18->hw_lock);

 FUNC_2(&VAR_18->status_lock, VAR_21);
 VAR_19 = VAR_18->msr;
 FUNC_3(&VAR_18->status_lock, VAR_21);

 return (VAR_19 & VAR_14 ? VAR_2 : 0) |
  (VAR_19 & VAR_12 ? VAR_1 : 0) |
  (VAR_19 & VAR_15 ? VAR_6 : 0) |
  (VAR_19 & VAR_13 ? VAR_0 : 0) |
  (VAR_20 & VAR_8 ? VAR_3 : 0) |
  (VAR_20 & VAR_11 ? VAR_7 : 0) |
  (VAR_20 & VAR_9 ? VAR_4 : 0) |
  (VAR_20 & VAR_10 ? VAR_5 : 0);
}
