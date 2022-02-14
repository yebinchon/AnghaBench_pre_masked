
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 u16 VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->n; VAR_6++) {
  unsigned int VAR_7;





  VAR_7 = FUNC_2(VAR_0, VAR_5);
  VAR_7 |= (FUNC_2(VAR_0, VAR_5 + 2) << 16);
  VAR_3[VAR_6] = VAR_7;
 }

 return VAR_2->n;
}
