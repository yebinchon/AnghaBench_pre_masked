
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct comedi_cmd *VAR_7 = &VAR_6->async->cmd;

 FUNC_4(VAR_5, VAR_6, VAR_7->chanlist[0]);

 if (VAR_7->scan_begin_src == VAR_4) {
  FUNC_1(VAR_5->pacer);
  FUNC_0(VAR_5->pacer, 1, 2, 1);
  FUNC_2(VAR_0, VAR_5->iobase + VAR_1);
  FUNC_3(VAR_5, VAR_3);
 } else {
  FUNC_3(VAR_5, VAR_2);
 }

 return 0;
}
