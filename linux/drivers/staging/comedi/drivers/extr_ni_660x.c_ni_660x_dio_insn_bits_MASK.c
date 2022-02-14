
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4,
     unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_7 = VAR_5[0] << VAR_6;
 unsigned int VAR_8 = VAR_5[1] << VAR_6;







 if (VAR_7) {
  VAR_3->state &= ~VAR_7;
  VAR_3->state |= (VAR_8 & VAR_7);
  FUNC_2(VAR_2, 0, VAR_3->state, VAR_1);
 }





 VAR_5[1] = FUNC_1(VAR_2, 0, VAR_0) >> VAR_6;

 return VAR_4->n;
}
