
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct ni_gpct_device {int variant; struct ni_route_tables* routing_tables; } ;
struct ni_gpct {unsigned int counter_index; TYPE_1__* mite_chan; struct ni_gpct_device* counter_dev; } ;
struct comedi_subdevice {struct comedi_async* async; struct ni_gpct* private; } ;
struct comedi_cmd {scalar_t__ start_src; int start_arg; } ;
struct comedi_async {int * inttrig; int prealloc_bufsz; struct comedi_cmd cmd; } ;
struct TYPE_3__ {int dir; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct comedi_subdevice*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int,int ,struct ni_route_tables const*) ;



 int FUNC_7 (struct ni_gpct*,int,int) ;
 int FUNC_8 (struct ni_gpct*,int,int) ;
 int VAR_8 ;
 int FUNC_9 (struct ni_gpct*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct comedi_subdevice *VAR_9)
{
 struct ni_gpct *VAR_10 = VAR_9->private;
 struct ni_gpct_device *VAR_11 = VAR_10->counter_dev;
 const struct ni_route_tables *VAR_12 =
  VAR_11->routing_tables;
 unsigned int VAR_13 = VAR_10->counter_index;
 struct comedi_async *VAR_14 = VAR_9->async;
 struct comedi_cmd *VAR_15 = &VAR_14->cmd;
 int VAR_16 = 0;


 FUNC_3(VAR_9, VAR_14->prealloc_bufsz);
 VAR_10->mite_chan->dir = VAR_0;
 switch (VAR_11->variant) {
 case 128:
 case 130:
  FUNC_5(VAR_10->mite_chan, 32, 32);
  break;
 case 129:
  FUNC_5(VAR_10->mite_chan, 16, 32);
  break;
 }
 FUNC_9(VAR_10, FUNC_1(VAR_13), VAR_1, 0);
 FUNC_8(VAR_10, 1, 1);

 if (VAR_15->start_src == VAR_6) {
  VAR_14->inttrig = &VAR_8;
 } else {
  VAR_14->inttrig = ((void*)0);
  FUNC_4(VAR_10->mite_chan);

  if (VAR_15->start_src == VAR_7)
   VAR_16 = FUNC_7(VAR_10, 1, VAR_2);
  else if (VAR_15->start_src == VAR_5) {
   int VAR_17 = FUNC_0(VAR_15->start_arg);

   if (VAR_17 >= VAR_4) {

    VAR_17 = FUNC_6(VAR_17,
             FUNC_2(VAR_13),
             VAR_12);

    VAR_17 |= VAR_3;
   }
   VAR_16 = FUNC_7(VAR_10, 1, VAR_17);
  }
 }
 return VAR_16;
}
