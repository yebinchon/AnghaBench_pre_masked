
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_8254* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct comedi_8254 {scalar_t__* busy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_8254*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 struct comedi_8254 *VAR_5 = VAR_2->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);

 if (VAR_5->busy[VAR_6])
  return -VAR_0;

 if (VAR_3->n)
  FUNC_1(VAR_5, VAR_6, VAR_4[VAR_3->n - 1]);

 return VAR_3->n;
}
