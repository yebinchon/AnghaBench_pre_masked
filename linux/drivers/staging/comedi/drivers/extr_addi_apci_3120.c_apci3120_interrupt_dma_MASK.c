
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; struct apci3120_private* private; } ;
struct comedi_cmd {int flags; scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {int events; scalar_t__ scans_done; struct comedi_cmd cmd; } ;
struct apci3120_private {size_t cur_dmabuf; struct apci3120_dmabuf* dmabuf; scalar_t__ use_double_buffer; scalar_t__ amcc; } ;
struct apci3120_dmabuf {unsigned int use_size; int virt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct comedi_device*,struct apci3120_dmabuf*) ;
 int FUNC_1 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7)
{
 struct apci3120_private *VAR_8 = VAR_6->private;
 struct comedi_async *VAR_9 = VAR_7->async;
 struct comedi_cmd *VAR_10 = &VAR_9->cmd;
 struct apci3120_dmabuf *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;

 VAR_11 = &VAR_8->dmabuf[VAR_8->cur_dmabuf];

 VAR_12 = VAR_11->use_size - FUNC_4(VAR_8->amcc + VAR_0);

 if (VAR_12 < VAR_11->use_size)
  FUNC_3(VAR_6->class_dev, "Interrupted DMA transfer!\n");
 if (VAR_12 & 1) {
  FUNC_3(VAR_6->class_dev, "Odd count of bytes in DMA ring!\n");
  VAR_9->events |= VAR_4;
  return;
 }

 VAR_13 = FUNC_2(VAR_7, VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_7, VAR_11->virt, VAR_13);

  if (!(VAR_10->flags & VAR_1))
   VAR_9->events |= VAR_3;
 }

 if ((VAR_9->events & VAR_2) ||
     (VAR_10->stop_src == VAR_5 && VAR_9->scans_done >= VAR_10->stop_arg))
  return;

 if (VAR_8->use_double_buffer) {

  VAR_8->cur_dmabuf = !VAR_8->cur_dmabuf;
  VAR_11 = &VAR_8->dmabuf[VAR_8->cur_dmabuf];
  FUNC_0(VAR_6, VAR_11);
 } else {

  FUNC_0(VAR_6, VAR_11);
 }
}
