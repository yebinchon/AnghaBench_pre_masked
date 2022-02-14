
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_1, int VAR_2)
{
 struct dvb_usb_device *VAR_3 = VAR_1->data;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, (0 << 7), 0x80);
 if (VAR_4)
  return VAR_4;

 FUNC_1(30);

 VAR_4 = FUNC_0(VAR_3, VAR_0, (1 << 7), 0x80);
 if (VAR_4)
  return VAR_4;

 return 0;
}
