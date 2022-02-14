
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct usbduxfast_private {void** duxbuf; } ;
struct comedi_device {struct usbduxfast_private* private; } ;



__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_0, int VAR_1,
    u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct usbduxfast_private *VAR_6 = VAR_0->private;


 VAR_6->duxbuf[1 + 0x00 + VAR_1] = VAR_2;
 VAR_6->duxbuf[1 + 0x08 + VAR_1] = VAR_3;
 VAR_6->duxbuf[1 + 0x10 + VAR_1] = VAR_4;
 VAR_6->duxbuf[1 + 0x18 + VAR_1] = VAR_5;
}
