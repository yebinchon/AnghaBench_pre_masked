
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {int irq_dma_bits; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int dummy; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {struct das1800_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_isadma_desc*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 struct das1800_private *VAR_3 = VAR_1->private;
 struct comedi_isadma *VAR_4 = VAR_3->dma;
 struct comedi_isadma_desc *VAR_5 = &VAR_4->desc[VAR_4->cur_dma];
 const int VAR_6 = VAR_3->irq_dma_bits & VAR_0;

 FUNC_0(VAR_1, VAR_2, VAR_5);

 if (VAR_6) {

  VAR_4->cur_dma = 1 - VAR_4->cur_dma;
  VAR_5 = &VAR_4->desc[VAR_4->cur_dma];
  FUNC_0(VAR_1, VAR_2, VAR_5);
 }


 FUNC_1(VAR_1, VAR_2);
}
