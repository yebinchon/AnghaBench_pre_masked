
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; int scan_begin_arg; int chanlist_len; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int *,int ,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9)
{
 struct comedi_cmd *VAR_10 = &VAR_9->async->cmd;
 int VAR_11;

 FUNC_1(VAR_8, VAR_9, VAR_10->chanlist[0], VAR_10->chanlist_len);


 FUNC_3(VAR_2, VAR_8->iobase + VAR_3);





 VAR_11 = FUNC_0(VAR_8, VAR_9, ((void*)0), VAR_7,
        VAR_0);
 if (VAR_11)
  return VAR_11;

 if (VAR_10->stop_src == VAR_6 || VAR_10->stop_arg > 1) {

  FUNC_2(VAR_8, VAR_10->scan_begin_arg);
 } else {

  FUNC_3(VAR_4, VAR_8->iobase + VAR_5);
  FUNC_3(0xff, VAR_8->iobase + VAR_1);
 }

 return 0;
}
