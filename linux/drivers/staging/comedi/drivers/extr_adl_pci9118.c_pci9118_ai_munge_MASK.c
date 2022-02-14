
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {scalar_t__ usedma; } ;
struct comedi_subdevice {int maxdata; } ;
struct comedi_device {struct pci9118_private* private; } ;
typedef int __be16 ;


 unsigned short FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1, void *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct pci9118_private *VAR_5 = VAR_0->private;
 unsigned short *VAR_6 = VAR_2;
 unsigned int VAR_7 = FUNC_1(VAR_1, VAR_3);
 unsigned int VAR_8;
 __be16 *VAR_9 = VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_5->usedma)
   VAR_6[VAR_8] = FUNC_0(VAR_9[VAR_8]);
  if (VAR_1->maxdata == 0xffff)
   VAR_6[VAR_8] ^= 0x8000;
  else
   VAR_6[VAR_8] = (VAR_6[VAR_8] >> 4) & 0x0fff;
 }
}
