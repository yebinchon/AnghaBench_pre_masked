
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt2814_private {int ntrig; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct dt2814_private* private; } ;
struct comedi_cmd {int stop_arg; int * chanlist; int flags; int scan_begin_arg; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 struct dt2814_private *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_5->scan_begin_arg, VAR_5->flags);

 VAR_6 = FUNC_0(VAR_5->chanlist[0]);

 VAR_4->ntrig = VAR_5->stop_arg;
 FUNC_2(VAR_6 | VAR_1 | (VAR_7 << 5), VAR_2->iobase + VAR_0);

 return 0;
}
