
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int type; } ;
struct comedi_cmd {unsigned int scan_end_arg; } ;





 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;

unsigned int FUNC_3(struct comedi_subdevice *VAR_0,
           struct comedi_cmd *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;

 switch (VAR_0->type) {
 case 130:
 case 128:
 case 129:
  VAR_3 = 8 * FUNC_1(VAR_0);
  VAR_2 = FUNC_0(VAR_1->scan_end_arg, VAR_3);
  break;
 default:
  VAR_2 = VAR_1->scan_end_arg;
  break;
 }
 return FUNC_2(VAR_0, VAR_2);
}
