
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct iuu_private {struct iuu_private* buf; struct iuu_private* writebuf; int lock; int vcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct iuu_private*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_serial_port*,struct iuu_private*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_3)
{
 struct iuu_private *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(struct iuu_private), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->buf = FUNC_2(256, VAR_1);
 if (!VAR_4->buf) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 VAR_4->writebuf = FUNC_2(256, VAR_1);
 if (!VAR_4->writebuf) {
  FUNC_1(VAR_4->buf);
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 VAR_4->vcc = VAR_2;
 FUNC_3(&VAR_4->lock);

 FUNC_4(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_4->writebuf);
  FUNC_1(VAR_4->buf);
  FUNC_1(VAR_4);
  return VAR_5;
 }

 return 0;
}
