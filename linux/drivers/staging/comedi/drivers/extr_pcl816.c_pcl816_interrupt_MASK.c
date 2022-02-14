
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl816_private {unsigned int ai_poll_ptr; scalar_t__ ai_cmd_canceled; int ai_cmd_running; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int virt_addr; int size; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {int attached; struct pcl816_private* private; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct comedi_device *VAR_3 = VAR_2;
 struct comedi_subdevice *VAR_4 = VAR_3->read_subdev;
 struct pcl816_private *VAR_5 = VAR_3->private;
 struct comedi_isadma *VAR_6 = VAR_5->dma;
 struct comedi_isadma_desc *VAR_7 = &VAR_6->desc[VAR_6->cur_dma];
 unsigned int VAR_8;
 unsigned int VAR_9;

 if (!VAR_3->attached || !VAR_5->ai_cmd_running) {
  FUNC_2(VAR_3);
  return VAR_0;
 }

 if (VAR_5->ai_cmd_canceled) {
  VAR_5->ai_cmd_canceled = 0;
  FUNC_2(VAR_3);
  return VAR_0;
 }

 VAR_8 = FUNC_0(VAR_4, VAR_7->size) -
     VAR_5->ai_poll_ptr;
 VAR_9 = VAR_5->ai_poll_ptr;
 VAR_5->ai_poll_ptr = 0;


 VAR_6->cur_dma = 1 - VAR_6->cur_dma;
 FUNC_3(VAR_3, VAR_4, VAR_8);

 FUNC_4(VAR_3, VAR_4, VAR_7->virt_addr, VAR_9, VAR_8);

 FUNC_2(VAR_3);

 FUNC_1(VAR_3, VAR_4);
 return VAR_0;
}
