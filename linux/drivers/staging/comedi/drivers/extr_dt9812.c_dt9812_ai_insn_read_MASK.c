
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 u16 VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->n; VAR_8++) {
  VAR_7 = FUNC_1(VAR_1, VAR_5, &VAR_6, VAR_0);
  if (VAR_7)
   return VAR_7;
  VAR_4[VAR_8] = VAR_6;
 }

 return VAR_3->n;
}
