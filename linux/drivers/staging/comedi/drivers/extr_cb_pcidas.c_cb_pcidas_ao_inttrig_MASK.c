
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct cb_pcidas_private* private; struct cb_pcidas_board* board_ptr; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct comedi_async {int * inttrig; struct comedi_cmd cmd; } ;
struct cb_pcidas_private {int ctrl; int ao_ctrl; scalar_t__ pcibar1; } ;
struct cb_pcidas_board {int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
    struct comedi_subdevice *VAR_11,
    unsigned int VAR_12)
{
 const struct cb_pcidas_board *VAR_13 = VAR_10->board_ptr;
 struct cb_pcidas_private *VAR_14 = VAR_10->private;
 struct comedi_async *VAR_15 = VAR_11->async;
 struct comedi_cmd *VAR_16 = &VAR_15->cmd;
 unsigned long VAR_17;

 if (VAR_12 != VAR_16->start_arg)
  return -VAR_0;

 FUNC_0(VAR_10, VAR_11, VAR_13->fifo_size);


 FUNC_2(&VAR_10->spinlock, VAR_17);
 VAR_14->ctrl |= VAR_6 | VAR_8;


 FUNC_1(VAR_14->ctrl | VAR_5 | VAR_7,
      VAR_14->pcibar1 + VAR_9);


 VAR_14->ao_ctrl |= VAR_4 | VAR_1 | VAR_2;
 FUNC_1(VAR_14->ao_ctrl, VAR_14->pcibar1 + VAR_3);

 FUNC_3(&VAR_10->spinlock, VAR_17);

 VAR_15->inttrig = ((void*)0);

 return 0;
}
