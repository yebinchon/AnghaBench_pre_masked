
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int chan; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; } ;
struct comedi_device {scalar_t__ iobase; struct a2150_private* private; } ;
struct a2150_private {int irq_dma_bits; struct comedi_isadma* dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 struct a2150_private *VAR_6 = VAR_4->private;
 struct comedi_isadma *VAR_7 = VAR_6->dma;
 struct comedi_isadma_desc *VAR_8 = &VAR_7->desc[0];


 VAR_6->irq_dma_bits &= ~VAR_1 & ~VAR_0;
 FUNC_1(VAR_6->irq_dma_bits, VAR_4->iobase + VAR_3);


 FUNC_0(VAR_8->chan);


 FUNC_1(0, VAR_4->iobase + VAR_2);

 return 0;
}
