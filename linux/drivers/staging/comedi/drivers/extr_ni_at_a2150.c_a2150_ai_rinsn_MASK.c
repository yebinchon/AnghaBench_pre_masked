
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct a2150_private* private; } ;
struct a2150_private {int config_bits; int irq_dma_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_11, struct comedi_subdevice *VAR_12,
     struct comedi_insn *VAR_13, unsigned int *VAR_14)
{
 struct a2150_private *VAR_15 = VAR_11->private;
 unsigned int VAR_16;
 int VAR_17;


 FUNC_4(0, VAR_11->iobase + VAR_6);


 if (FUNC_1(VAR_11, FUNC_0(VAR_13->chanspec), 1) < 0)
  return -1;


 VAR_15->config_bits &= ~VAR_0;
 VAR_15->config_bits &= ~VAR_1;


 FUNC_4(VAR_15->config_bits, VAR_11->iobase + VAR_2);


 VAR_15->irq_dma_bits &= ~VAR_4 & ~VAR_3;
 FUNC_4(VAR_15->irq_dma_bits, VAR_11->iobase + VAR_8);


 FUNC_4(0, VAR_11->iobase + VAR_9);


 FUNC_4(0, VAR_11->iobase + VAR_7);





 for (VAR_16 = 0; VAR_16 < 36; VAR_16++) {
  VAR_17 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_10, 0);
  if (VAR_17)
   return VAR_17;

  FUNC_3(VAR_11->iobase + VAR_5);
 }


 for (VAR_16 = 0; VAR_16 < VAR_13->n; VAR_16++) {
  VAR_17 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_10, 0);
  if (VAR_17)
   return VAR_17;

  VAR_14[VAR_16] = FUNC_3(VAR_11->iobase + VAR_5);
  VAR_14[VAR_16] ^= 0x8000;
 }


 FUNC_4(0, VAR_11->iobase + VAR_6);

 return VAR_16;
}
