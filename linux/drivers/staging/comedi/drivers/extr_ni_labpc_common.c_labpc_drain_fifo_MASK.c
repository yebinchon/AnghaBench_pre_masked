
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct labpc_private {int stat1; int (* read_byte ) (struct comedi_device*,int ) ;scalar_t__ count; } ;
struct comedi_device {int class_dev; TYPE_1__* read_subdev; struct labpc_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {struct comedi_async* async; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,unsigned short*,int) ;
 int FUNC_1 (int ,char*) ;
 unsigned short FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4)
{
 struct labpc_private *VAR_5 = VAR_4->private;
 struct comedi_async *VAR_6 = VAR_4->read_subdev->async;
 struct comedi_cmd *VAR_7 = &VAR_6->cmd;
 unsigned short VAR_8;
 const int VAR_9 = 10000;
 unsigned int VAR_10;

 VAR_5->stat1 = VAR_5->read_byte(VAR_4, VAR_2);

 for (VAR_10 = 0; (VAR_5->stat1 & VAR_1) && VAR_10 < VAR_9;
      VAR_10++) {

  if (VAR_7->stop_src == VAR_3) {
   if (VAR_5->count == 0)
    break;
   VAR_5->count--;
  }
  VAR_8 = FUNC_2(VAR_4);
  FUNC_0(VAR_4->read_subdev, &VAR_8, 1);
  VAR_5->stat1 = VAR_5->read_byte(VAR_4, VAR_2);
 }
 if (VAR_10 == VAR_9) {
  FUNC_1(VAR_4->class_dev, "ai timeout, fifo never empties\n");
  VAR_6->events |= VAR_0;
  return -1;
 }

 return 0;
}
