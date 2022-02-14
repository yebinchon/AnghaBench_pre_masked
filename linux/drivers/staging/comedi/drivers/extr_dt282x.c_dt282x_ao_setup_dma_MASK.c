
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int virt_addr; int maxsize; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; } ;
struct comedi_device {int class_dev; struct dt282x_private* private; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct comedi_device*,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     int VAR_2)
{
 struct dt282x_private *VAR_3 = VAR_0->private;
 struct comedi_isadma *VAR_4 = VAR_3->dma;
 struct comedi_isadma_desc *VAR_5 = &VAR_4->desc[VAR_2];
 unsigned int VAR_6 = FUNC_1(VAR_1, VAR_5->maxsize);
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_5->virt_addr, VAR_6);
 if (VAR_7)
  FUNC_3(VAR_0, VAR_2, VAR_7);
 else
  FUNC_2(VAR_0->class_dev, "AO underrun\n");

 return VAR_7;
}
