
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 int VAR_5;

 if (VAR_3->n) {
  u32 VAR_6 = VAR_4[VAR_3->n - 1];

  VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_6);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_3->n;
}
