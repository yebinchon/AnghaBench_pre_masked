
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {unsigned int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3,
    unsigned int *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->n; VAR_7++) {
  VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_6);
  if (VAR_5)
   return VAR_5;
  VAR_4[VAR_7] = VAR_6;
 }

 return VAR_3->n;
}
