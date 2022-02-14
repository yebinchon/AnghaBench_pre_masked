
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct labpc_private {unsigned int count; TYPE_1__* dma; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_isadma_desc {unsigned int size; int virt_addr; int chan; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct labpc_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {struct comedi_isadma_desc* desc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct comedi_subdevice*,unsigned int) ;

void FUNC_4(struct comedi_device *VAR_1)
{
 struct labpc_private *VAR_2 = VAR_1->private;
 struct comedi_isadma_desc *VAR_3 = &VAR_2->dma->desc[0];
 struct comedi_subdevice *VAR_4 = VAR_1->read_subdev;
 struct comedi_async *VAR_5 = VAR_4->async;
 struct comedi_cmd *VAR_6 = &VAR_5->cmd;
 unsigned int VAR_7 = FUNC_1(VAR_4, VAR_3->size);
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;






 VAR_8 = FUNC_2(VAR_3->chan);





 VAR_9 = VAR_7 - FUNC_1(VAR_4, VAR_8);
 if (VAR_6->stop_src == VAR_0) {
  if (VAR_2->count <= VAR_9) {
   VAR_9 = VAR_2->count;
   VAR_10 = 0;
  } else {
   VAR_10 = VAR_2->count - VAR_9;
   if (VAR_10 > VAR_7)
    VAR_10 = VAR_7;
  }
  VAR_2->count -= VAR_9;
 } else {
  VAR_10 = VAR_7;
 }
 VAR_3->size = FUNC_3(VAR_4, VAR_10);

 FUNC_0(VAR_4, VAR_3->virt_addr, VAR_9);
}
