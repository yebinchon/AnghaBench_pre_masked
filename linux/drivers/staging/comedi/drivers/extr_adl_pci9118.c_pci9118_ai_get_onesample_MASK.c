
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {int ai_neverending; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci9118_private* private; } ;
struct comedi_cmd {scalar_t__ stop_arg; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 unsigned short FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3)
{
 struct pci9118_private *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 unsigned short VAR_6;

 VAR_6 = FUNC_1(VAR_2->iobase + VAR_1);

 FUNC_0(VAR_3, &VAR_6, 1);

 if (!VAR_4->ai_neverending) {
  if (VAR_3->async->scans_done >= VAR_5->stop_arg)
   VAR_3->async->events |= VAR_0;
 }
}
