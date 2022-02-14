
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt282x_private {int supcsr; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma_desc {int chan; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,size_t) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4)
{
 struct dt282x_private *VAR_5 = VAR_3->private;
 struct comedi_isadma *VAR_6 = VAR_5->dma;
 struct comedi_isadma_desc *VAR_7 = &VAR_6->desc[VAR_6->cur_dma];

 FUNC_2(VAR_5->supcsr | VAR_1,
      VAR_3->iobase + VAR_2);

 FUNC_0(VAR_7->chan);

 if (!FUNC_1(VAR_3, VAR_4, VAR_6->cur_dma))
  VAR_4->async->events |= VAR_0;

 VAR_6->cur_dma = 1 - VAR_6->cur_dma;
}
