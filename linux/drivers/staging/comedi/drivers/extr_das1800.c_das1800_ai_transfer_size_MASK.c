
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int scan_begin_src; int convert_src; unsigned int convert_arg; unsigned int scan_begin_arg; unsigned int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;




 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_1->async->cmd;
 unsigned int VAR_5 = FUNC_0(VAR_1, VAR_2);
 unsigned int VAR_6;

 VAR_6 = VAR_5;


 switch (VAR_4->scan_begin_src) {
 case 129:
  if (VAR_4->convert_src == 128)
   VAR_6 = VAR_3 / VAR_4->convert_arg;
  break;
 case 128:
  VAR_6 = VAR_3 / (VAR_4->scan_begin_arg * VAR_4->chanlist_len);
  break;
 }


 VAR_6 = FUNC_1(VAR_1, VAR_6);

 if (VAR_6 > VAR_5)
  VAR_6 = VAR_5;
 if (VAR_6 < 1)
  VAR_6 = 1;

 return FUNC_2(VAR_1, VAR_6);
}
