
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; scalar_t__ private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;

 if (FUNC_2(VAR_1, VAR_3))
  FUNC_4(VAR_0, FUNC_1(VAR_4), VAR_1->state);

 VAR_3[1] = FUNC_3(VAR_0, FUNC_0(VAR_4));

 return VAR_2->n;
}
