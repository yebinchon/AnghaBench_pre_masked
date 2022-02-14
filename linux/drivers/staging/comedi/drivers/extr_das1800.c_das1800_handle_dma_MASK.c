
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {int irq_dma_bits; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int dummy; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {scalar_t__ iobase; struct das1800_private* private; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_isadma_desc*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_isadma_desc*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5, unsigned int VAR_6)
{
 struct das1800_private *VAR_7 = VAR_4->private;
 struct comedi_isadma *VAR_8 = VAR_7->dma;
 struct comedi_isadma_desc *VAR_9 = &VAR_8->desc[VAR_8->cur_dma];
 const int VAR_10 = VAR_7->irq_dma_bits & VAR_3;

 FUNC_1(VAR_4, VAR_5, VAR_9);


 FUNC_0(VAR_9);

 if (VAR_6 & VAR_2) {

  FUNC_2(VAR_0 & ~VAR_2, VAR_4->iobase + VAR_1);

  if (VAR_10)
   VAR_8->cur_dma = 1 - VAR_8->cur_dma;
 }
}
