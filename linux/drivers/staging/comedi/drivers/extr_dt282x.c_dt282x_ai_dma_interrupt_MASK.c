
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt282x_private {int supcsr; scalar_t__ nread; int ntrig; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma_desc {int size; int virt_addr; int chan; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct dt282x_private* private; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ,int) ;
 int FUNC_5 (struct comedi_device*,size_t,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5)
{
 struct dt282x_private *VAR_6 = VAR_4->private;
 struct comedi_isadma *VAR_7 = VAR_6->dma;
 struct comedi_isadma_desc *VAR_8 = &VAR_7->desc[VAR_7->cur_dma];
 unsigned int VAR_9 = FUNC_1(VAR_5, VAR_8->size);
 int VAR_10;

 FUNC_6(VAR_6->supcsr | VAR_1,
      VAR_4->iobase + VAR_3);

 FUNC_2(VAR_8->chan);

 FUNC_4(VAR_4, VAR_5, VAR_8->virt_addr, VAR_8->size);
 VAR_10 = FUNC_0(VAR_5, VAR_8->virt_addr, VAR_9);
 if (VAR_10 != VAR_8->size)
  return;

 VAR_6->nread -= VAR_9;
 if (VAR_6->nread < 0) {
  FUNC_3(VAR_4->class_dev, "nread off by one\n");
  VAR_6->nread = 0;
 }
 if (!VAR_6->nread) {
  VAR_5->async->events |= VAR_0;
  return;
 }
 FUNC_5(VAR_4, VAR_7->cur_dma, 0);

 VAR_7->cur_dma = 1 - VAR_7->cur_dma;
}
