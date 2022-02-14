
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9111_private_data {int scan_delay; int chunk_num_samples; scalar_t__ chunk_counter; int lcr_io_base; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pci9111_private_data* private; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ convert_src; scalar_t__ scan_begin_src; int scan_begin_arg; int convert_arg; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,int ,int ) ;
 int FUNC_8 (int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_9,
        struct comedi_subdevice *VAR_10)
{
 struct pci9111_private_data *VAR_11 = VAR_9->private;
 struct comedi_cmd *VAR_12 = &VAR_10->async->cmd;
 unsigned int VAR_13 = FUNC_0(VAR_12->chanlist[VAR_12->chanlist_len - 1]);
 unsigned int VAR_14 = FUNC_1(VAR_12->chanlist[0]);
 unsigned int VAR_15 = 0;





 if (VAR_12->chanlist_len > 1)
  VAR_15 |= VAR_2;

 FUNC_5(VAR_13, VAR_9->iobase + VAR_0);


 FUNC_5(FUNC_2(VAR_14), VAR_9->iobase + VAR_1);


 VAR_11->scan_delay = 0;
 if (VAR_12->convert_src == VAR_6) {
  VAR_15 |= VAR_5;
  FUNC_4(VAR_9->pacer);
  FUNC_3(VAR_9->pacer, 1, 2, 1);
  FUNC_6(VAR_9);
  FUNC_7(VAR_9, VAR_7,
          VAR_8);
  FUNC_8(VAR_11->lcr_io_base, 1, 1,
       0, 1, 1);

  if (VAR_12->scan_begin_src == VAR_6) {
   VAR_11->scan_delay = (VAR_12->scan_begin_arg /
    (VAR_12->convert_arg * VAR_12->chanlist_len)) - 1;
  }
 } else {
  VAR_15 |= VAR_3;
  FUNC_6(VAR_9);
  FUNC_7(VAR_9, VAR_7,
          VAR_8);
  FUNC_8(VAR_11->lcr_io_base, 1, 1,
       0, 1, 1);
 }
 FUNC_5(VAR_15, VAR_9->iobase + VAR_4);

 VAR_11->chunk_counter = 0;
 VAR_11->chunk_num_samples = VAR_12->chanlist_len *
      (1 + VAR_11->scan_delay);

 return 0;
}
