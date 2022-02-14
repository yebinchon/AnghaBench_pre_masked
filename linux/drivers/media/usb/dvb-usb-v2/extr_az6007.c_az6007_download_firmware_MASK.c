
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct firmware const*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_1,
 const struct firmware *VAR_2)
{
 FUNC_1("Loading az6007 firmware\n");

 return FUNC_0(VAR_1->udev, VAR_2, VAR_0);
}
