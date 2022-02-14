
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int clock_and_fout; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 struct ni_private *VAR_4 = VAR_0->private;
 unsigned int VAR_5 = FUNC_0(VAR_4->clock_and_fout);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->n; VAR_6++)
  VAR_3[VAR_6] = VAR_5;

 return VAR_2->n;
}
