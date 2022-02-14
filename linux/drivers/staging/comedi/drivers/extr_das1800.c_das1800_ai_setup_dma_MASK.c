
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {int irq_dma_bits; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {unsigned int size; int maxsize; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; scalar_t__ cur_dma; } ;
struct comedi_device {struct das1800_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_isadma_desc*) ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3)
{
 struct das1800_private *VAR_4 = VAR_2->private;
 struct comedi_isadma *VAR_5 = VAR_4->dma;
 struct comedi_isadma_desc *VAR_6;
 unsigned int VAR_7;

 if ((VAR_4->irq_dma_bits & VAR_1) == 0)
  return;

 VAR_5->cur_dma = 0;
 VAR_6 = &VAR_5->desc[0];


 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6->maxsize, 300000000);

 VAR_6->size = VAR_7;
 FUNC_0(VAR_6);


 if (VAR_4->irq_dma_bits & VAR_0) {
  VAR_6 = &VAR_5->desc[1];
  VAR_6->size = VAR_7;
  FUNC_0(VAR_6);
 }
}
