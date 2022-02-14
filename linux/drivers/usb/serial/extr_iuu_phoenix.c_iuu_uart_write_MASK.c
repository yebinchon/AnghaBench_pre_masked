
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {int dummy; } ;
struct iuu_private {int lock; scalar_t__ writelen; scalar_t__ writebuf; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct iuu_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1, struct usb_serial_port *VAR_2,
     const u8 *VAR_3, int VAR_4)
{
 struct iuu_private *VAR_5 = FUNC_3(VAR_2);
 unsigned long VAR_6;

 if (VAR_4 > 256)
  return -VAR_0;

 FUNC_1(&VAR_5->lock, VAR_6);


 FUNC_0(VAR_5->writebuf + VAR_5->writelen, VAR_3, VAR_4);
 VAR_5->writelen += VAR_4;
 FUNC_2(&VAR_5->lock, VAR_6);

 return VAR_4;
}
