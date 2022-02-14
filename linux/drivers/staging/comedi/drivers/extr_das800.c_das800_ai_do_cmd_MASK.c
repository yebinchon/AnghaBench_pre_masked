
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das800_board {int resolution; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; int pacer; scalar_t__ iobase; struct das800_board* board_ptr; } ;
struct comedi_cmd {unsigned int chanlist_len; scalar_t__ start_src; scalar_t__ convert_src; int * chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*,int,int ) ;
 int FUNC_7 (unsigned int,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_10,
       struct comedi_subdevice *VAR_11)
{
 const struct das800_board *VAR_12 = VAR_10->board_ptr;
 struct comedi_async *VAR_13 = VAR_11->async;
 struct comedi_cmd *VAR_14 = &VAR_13->cmd;
 unsigned int VAR_15 = FUNC_1(VAR_14->chanlist[0]);
 unsigned int VAR_16 = FUNC_0(VAR_14->chanlist[0]);
 unsigned int VAR_17 = (VAR_16 + VAR_14->chanlist_len - 1) % 8;
 unsigned int VAR_18 = (VAR_17 << 3) | VAR_16;
 int VAR_19;
 unsigned long VAR_20;

 FUNC_4(VAR_10);

 FUNC_8(&VAR_10->spinlock, VAR_20);

 FUNC_6(VAR_10, VAR_18, VAR_7);
 FUNC_9(&VAR_10->spinlock, VAR_20);


 if (VAR_12->resolution == 12 && VAR_15 > 0)
  VAR_15 += 0x7;
 VAR_15 &= 0xf;
 FUNC_7(VAR_15, VAR_10->iobase + VAR_2);




 VAR_19 = 0;
 VAR_19 |= VAR_4 | VAR_5;
 if (VAR_14->start_src == VAR_8)
  VAR_19 |= VAR_3;
 if (VAR_14->convert_src == VAR_9) {
  VAR_19 |= VAR_0 | VAR_6;
  FUNC_3(VAR_10->pacer);
  FUNC_2(VAR_10->pacer, 1, 2, 1);
 }

 FUNC_8(&VAR_10->spinlock, VAR_20);
 FUNC_6(VAR_10, VAR_19, VAR_1);
 FUNC_9(&VAR_10->spinlock, VAR_20);

 FUNC_5(VAR_10);
 return 0;
}
