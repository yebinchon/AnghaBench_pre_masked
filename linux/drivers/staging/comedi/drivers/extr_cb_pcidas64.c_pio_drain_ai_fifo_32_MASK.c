
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; struct comedi_subdevice* read_subdev; struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_3)
{
 struct pcidas64_private *VAR_4 = VAR_3->private;
 struct comedi_subdevice *VAR_5 = VAR_3->read_subdev;
 unsigned int VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;
 int VAR_9 =
  FUNC_3(VAR_4->main_iobase + VAR_2) & 0x7fff;
 int VAR_10 =
  FUNC_3(VAR_4->main_iobase + VAR_1) & 0x7fff;

 VAR_6 = FUNC_1(VAR_5, 100000);
 for (VAR_7 = 0; VAR_10 != VAR_9 && VAR_7 < VAR_6;) {
  unsigned short VAR_11;

  VAR_8 = FUNC_2(VAR_3->mmio + VAR_0);
  VAR_11 = VAR_8 & 0xffff;
  FUNC_0(VAR_5, &VAR_11, 1);
  VAR_7++;
  if (VAR_7 < VAR_6) {
   VAR_11 = (VAR_8 >> 16) & 0xffff;
   FUNC_0(VAR_5, &VAR_11, 1);
   VAR_7++;
  }
  VAR_10 = FUNC_3(VAR_4->main_iobase + VAR_1) &
       0x7fff;
 }
}
