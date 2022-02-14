
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_medion_auxbuf {int dummy; } ;
struct cxusb_bt656_params {scalar_t__ fmode; scalar_t__ line; int pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cxusb_bt656_params*,unsigned int,unsigned char) ;
 int FUNC_1 (struct dvb_usb_device*,struct cxusb_medion_auxbuf*,struct cxusb_bt656_params*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct dvb_usb_device *VAR_2,
          struct cxusb_medion_auxbuf *VAR_3,
          struct cxusb_bt656_params *VAR_4,
          unsigned int VAR_5,
          unsigned char VAR_6)
{
 if (VAR_4->fmode == VAR_1 && VAR_4->line > 0)
  return FUNC_1(VAR_2, VAR_3, VAR_4,
       VAR_5);
 else if (VAR_4->fmode == VAR_0)
  FUNC_0(VAR_4, VAR_5, VAR_6);
 else
  VAR_4->pos++;

 return 1;
}
