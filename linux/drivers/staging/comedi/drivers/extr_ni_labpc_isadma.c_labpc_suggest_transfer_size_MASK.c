
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ convert_src; int convert_arg; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      unsigned int VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_2->async->cmd;
 unsigned int VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (VAR_4->convert_src == VAR_0)
  VAR_7 = 1000000000 / VAR_4->convert_arg;
 else

  VAR_7 = 0xffffffff;


 VAR_6 = (VAR_7 / 3) * VAR_5;


 if (VAR_6 > VAR_3)
  VAR_6 = VAR_3;
 else if (VAR_6 < VAR_5)
  VAR_6 = VAR_5;

 return VAR_6;
}
