
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {int lock; scalar_t__ mite_chan; } ;
struct comedi_subdevice {TYPE_1__* async; struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ni_gpct*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    unsigned int VAR_5)
{
 struct ni_gpct *VAR_6 = VAR_4->private;
 struct comedi_cmd *VAR_7 = &VAR_4->async->cmd;
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (VAR_5 != VAR_7->start_arg)
  return -VAR_0;

 FUNC_2(&VAR_6->lock, VAR_8);
 if (VAR_6->mite_chan)
  FUNC_0(VAR_6->mite_chan);
 else
  VAR_9 = -VAR_1;
 FUNC_3(&VAR_6->lock, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_1(VAR_6, 1, VAR_2);
 VAR_4->async->inttrig = ((void*)0);

 return VAR_9;
}
