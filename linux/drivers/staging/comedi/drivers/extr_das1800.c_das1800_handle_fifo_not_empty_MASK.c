
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (scalar_t__) ;
 unsigned short FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5)
{
 struct comedi_cmd *VAR_6 = &VAR_5->async->cmd;
 unsigned short VAR_7;

 while (FUNC_1(VAR_4->iobase + VAR_1) & VAR_2) {
  VAR_7 = FUNC_2(VAR_4->iobase + VAR_0);
  FUNC_0(VAR_5, &VAR_7, 1);

  if (VAR_6->stop_src == VAR_3 &&
      VAR_5->async->scans_done >= VAR_6->stop_arg)
   break;
 }
}
