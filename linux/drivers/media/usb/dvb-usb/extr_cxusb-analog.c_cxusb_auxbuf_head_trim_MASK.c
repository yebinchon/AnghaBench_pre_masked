
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_medion_auxbuf {unsigned int paylen; scalar_t__ buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dvb_usb_device*,int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct dvb_usb_device *VAR_1,
       struct cxusb_medion_auxbuf *VAR_2,
       unsigned int VAR_3)
{
 if (VAR_3 == 0)
  return;

 if (FUNC_0(VAR_3 > VAR_2->paylen))
  return;

 FUNC_1(VAR_1, VAR_0,
        "trimming auxbuf len by %u to %u\n",
        VAR_3, VAR_2->paylen - VAR_3);

 FUNC_2(VAR_2->buf, VAR_2->buf + VAR_3, VAR_2->paylen - VAR_3);
 VAR_2->paylen -= VAR_3;
}
