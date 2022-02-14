
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3[1] = VAR_4;

 return VAR_2->n;
}
