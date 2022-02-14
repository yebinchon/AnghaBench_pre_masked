
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {scalar_t__ ai_eos; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {unsigned int maxsize; int size; } ;
struct comedi_isadma {size_t cur_dma; int chan; struct comedi_isadma_desc* desc; } ;
struct comedi_device {struct pcl812_private* private; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct comedi_isadma_desc*) ;
 unsigned int FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    unsigned int VAR_2)
{
 struct pcl812_private *VAR_3 = VAR_0->private;
 struct comedi_isadma *VAR_4 = VAR_3->dma;
 struct comedi_isadma_desc *VAR_5 = &VAR_4->desc[VAR_4->cur_dma];
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 FUNC_2(VAR_4->chan);


 VAR_6 = VAR_3->ai_eos ? FUNC_0(VAR_1) : VAR_5->maxsize;
 VAR_7 = FUNC_1(VAR_1, VAR_6);





 VAR_8 = FUNC_4(VAR_1, VAR_7 + VAR_2);
 if (VAR_8 > VAR_2) {
  VAR_8 -= VAR_2;
  VAR_5->size = FUNC_5(VAR_1, VAR_8);
  FUNC_3(VAR_5);
 }
}
