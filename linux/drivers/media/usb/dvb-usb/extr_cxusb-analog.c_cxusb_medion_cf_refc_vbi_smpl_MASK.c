
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_bt656_params {int fmode; int pos; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct dvb_usb_device *VAR_4,
       struct cxusb_bt656_params *VAR_5,
       unsigned char VAR_6[4])
{
 bool VAR_7 = (VAR_6[3] & VAR_1) ==
  VAR_2;

 if (VAR_7)
  FUNC_0(VAR_4, VAR_0, "SAV in VBI samples @ pos %u\n",
         VAR_5->pos);

 VAR_5->fmode = VAR_3;
}
