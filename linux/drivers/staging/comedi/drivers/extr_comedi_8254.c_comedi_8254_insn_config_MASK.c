
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_8254* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct comedi_8254 {int (* insn_config ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;scalar_t__* busy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 int FUNC_1 (struct comedi_8254*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_8254*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6,
       unsigned int *VAR_7)
{
 struct comedi_8254 *VAR_8 = VAR_5->private;
 unsigned int VAR_9 = FUNC_0(VAR_6->chanspec);
 int VAR_10;

 if (VAR_8->busy[VAR_9])
  return -VAR_0;

 switch (VAR_7[0]) {
 case 129:
  VAR_10 = FUNC_1(VAR_8, VAR_9,
        VAR_3 | VAR_2);
  if (VAR_10)
   return VAR_10;
  break;
 case 128:
  VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_7[1]);
  if (VAR_10)
   return VAR_10;
  break;
 case 130:
  VAR_7[1] = FUNC_2(VAR_8, VAR_9);
  break;
 default:




  if (VAR_8->insn_config)
   return VAR_8->insn_config(VAR_4, VAR_5, VAR_6, VAR_7);

  return -VAR_1;
 }

 return VAR_6->n;
}
