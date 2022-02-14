
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int ) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,char*) ;
 int FUNC_3 (struct file*) ;
 struct dvb_usb_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;






 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 != 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 != 0)
  goto ret_release;

 FUNC_2(VAR_3, VAR_1, "got open\n");

 return 0;

ret_release:
 FUNC_1(VAR_3);

 return VAR_4;
}
