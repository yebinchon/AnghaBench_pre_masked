
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_private_struct {int ctrl_reg; struct comedi_isadma* dma; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_isadma_desc {unsigned int size; int virt_addr; int chan; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {int spinlock; int class_dev; struct comedi_subdevice* read_subdev; struct das16_private_struct* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_4)
{
 struct das16_private_struct *VAR_5 = VAR_4->private;
 struct comedi_subdevice *VAR_6 = VAR_4->read_subdev;
 struct comedi_async *VAR_7 = VAR_6->async;
 struct comedi_cmd *VAR_8 = &VAR_7->cmd;
 struct comedi_isadma *VAR_9 = VAR_5->dma;
 struct comedi_isadma_desc *VAR_10 = &VAR_9->desc[VAR_9->cur_dma];
 unsigned long VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;

 FUNC_7(&VAR_4->spinlock, VAR_11);
 if (!(VAR_5->ctrl_reg & VAR_2)) {
  FUNC_8(&VAR_4->spinlock, VAR_11);
  return;
 }






 VAR_12 = FUNC_4(VAR_10->chan,
        FUNC_1(VAR_6));


 if (VAR_12 > VAR_10->size) {
  FUNC_6(VAR_4->class_dev, "residue > transfer size!\n");
  VAR_7->events |= VAR_1;
  VAR_13 = 0;
 } else {
  VAR_13 = VAR_10->size - VAR_12;
 }
 VAR_14 = FUNC_2(VAR_6, VAR_13);


 if (VAR_14) {
  VAR_9->cur_dma = 1 - VAR_9->cur_dma;
  FUNC_5(VAR_4, VAR_6, VAR_14);
 }

 FUNC_8(&VAR_4->spinlock, VAR_11);

 FUNC_0(VAR_6, VAR_10->virt_addr, VAR_14);

 if (VAR_8->stop_src == VAR_3 && VAR_7->scans_done >= VAR_8->stop_arg)
  VAR_7->events |= VAR_0;

 FUNC_3(VAR_4, VAR_6);
}
