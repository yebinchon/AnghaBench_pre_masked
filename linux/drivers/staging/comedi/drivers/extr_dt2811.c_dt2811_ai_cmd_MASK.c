
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt2811_private {unsigned int ai_divisor; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct dt2811_private* private; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ convert_src; int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6)
{
 struct dt2811_private *VAR_7 = VAR_5->private;
 struct comedi_cmd *VAR_8 = &VAR_6->async->cmd;
 unsigned int VAR_9;

 if (VAR_8->start_src == VAR_3) {
  VAR_9 = FUNC_0(1);
 } else {
  if (VAR_8->convert_src == VAR_4) {
   VAR_9 = FUNC_0(2);
  } else {
   VAR_9 = FUNC_0(3);
  }
 }
 FUNC_2(VAR_9 | VAR_0, VAR_5->iobase + VAR_1);


 FUNC_2(VAR_7->ai_divisor, VAR_5->iobase + VAR_2);


 FUNC_1(VAR_5, VAR_8->chanlist[0]);

 return 0;
}
