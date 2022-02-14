
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct labpc_private {unsigned int count; int cmd3; TYPE_1__* dma; } ;
struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_isadma_desc {unsigned int size; int maxsize; } ;
struct comedi_device {struct labpc_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_4__ {struct comedi_cmd cmd; } ;
struct TYPE_3__ {struct comedi_isadma_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_isadma_desc*) ;
 unsigned int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int ) ;

void FUNC_3(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 struct labpc_private *VAR_5 = VAR_3->private;
 struct comedi_isadma_desc *VAR_6 = &VAR_5->dma->desc[0];
 struct comedi_cmd *VAR_7 = &VAR_4->async->cmd;
 unsigned int VAR_8 = FUNC_0(VAR_4);


 VAR_6->size = FUNC_2(VAR_3, VAR_4, VAR_6->maxsize);
 if (VAR_7->stop_src == VAR_2 &&
     VAR_5->count * VAR_8 < VAR_6->size)
  VAR_6->size = VAR_5->count * VAR_8;

 FUNC_1(VAR_6);


 VAR_5->cmd3 |= (VAR_0 | VAR_1);
}
