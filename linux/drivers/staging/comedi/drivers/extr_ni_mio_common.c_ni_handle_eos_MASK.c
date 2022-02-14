
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {scalar_t__ aimode; int ai_cmd2; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct ni_private* private; } ;
struct TYPE_2__ {int events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 struct ni_private *VAR_5 = VAR_3->private;

 if (VAR_5->aimode == VAR_0) {
  FUNC_0(VAR_3);
  VAR_4->async->events |= VAR_1;

 }

 if (VAR_5->ai_cmd2 & VAR_2)
  FUNC_2(VAR_3);
}
