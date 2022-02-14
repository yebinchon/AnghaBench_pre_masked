
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;
struct cxusb_medion_auxbuf {unsigned int len; scalar_t__ paylen; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dvb_usb_device *VAR_1,
         struct cxusb_medion_auxbuf *VAR_2,
         u8 *VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_1, VAR_0, "initializing auxbuf of len %u\n", VAR_4);

 VAR_2->buf = VAR_3;
 VAR_2->len = VAR_4;
 VAR_2->paylen = 0;
}
