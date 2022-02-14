
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_3 == 0)
  return 0;

 if (!VAR_1)
  FUNC_1(VAR_2, 1, VAR_0);

 return 0;
}
