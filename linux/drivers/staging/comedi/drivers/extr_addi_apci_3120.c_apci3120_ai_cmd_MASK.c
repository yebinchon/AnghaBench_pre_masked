
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ scan_begin_src; int flags; int convert_arg; int scan_begin_arg; int chanlist; int chanlist_len; } ;
struct apci3120_private {int mode; scalar_t__ use_dma; scalar_t__ cur_dmabuf; scalar_t__ amcc; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct comedi_device*,int) ;
 unsigned int FUNC_1 (struct comedi_device*,int,int ,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,int,int) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;
 int FUNC_6 (struct comedi_device*,int,unsigned int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_9,
      struct comedi_subdevice *VAR_10)
{
 struct apci3120_private *VAR_11 = VAR_9->private;
 struct comedi_cmd *VAR_12 = &VAR_10->async->cmd;
 unsigned int VAR_13;


 VAR_11->mode = VAR_5 |
   VAR_4;


 FUNC_8(VAR_0, VAR_11->amcc + VAR_1);

 VAR_11->cur_dmabuf = 0;


 FUNC_2(VAR_9, VAR_10, VAR_12->chanlist_len, VAR_12->chanlist);

 if (VAR_12->start_src == VAR_7)
  FUNC_0(VAR_9, 1);

 if (VAR_12->scan_begin_src == VAR_8) {




  VAR_13 = FUNC_1(VAR_9, 1, VAR_12->scan_begin_arg,
            VAR_12->flags);
  FUNC_5(VAR_9, 1, VAR_6);
  FUNC_6(VAR_9, 1, VAR_13);
 }





 VAR_13 = FUNC_1(VAR_9, 0, VAR_12->convert_arg, VAR_12->flags);
 FUNC_5(VAR_9, 0, VAR_6);
 FUNC_6(VAR_9, 0, VAR_13);

 if (VAR_11->use_dma)
  FUNC_3(VAR_9, VAR_10);
 else
  VAR_11->mode |= VAR_2;


 FUNC_7(VAR_11->mode, VAR_9->iobase + VAR_3);

 if (VAR_12->scan_begin_src == VAR_8)
  FUNC_4(VAR_9, 1, 1);
 FUNC_4(VAR_9, 0, 1);

 return 0;
}
