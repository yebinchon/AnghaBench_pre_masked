
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
          struct comedi_subdevice *VAR_7,
          struct comedi_insn *VAR_8,
          unsigned int *VAR_9)
{
 unsigned int VAR_10 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, 0);
 if (VAR_13)
  return VAR_13;

 if (VAR_10 < 8) {
  VAR_11 = 1 << VAR_10;
  FUNC_3(VAR_3, VAR_2);
 } else if (VAR_10 < 16) {
  VAR_11 = 1 << (VAR_10 - 8);
  FUNC_3(VAR_4, VAR_2);
 } else {
  VAR_11 = 1 << ((VAR_10 - 16) * 2);
  FUNC_3(VAR_5, VAR_2);
 }

 VAR_12 = FUNC_2(VAR_1);
 if (VAR_9[0] == VAR_0)
  VAR_12 |= VAR_11;
 else
  VAR_12 &= ~VAR_11;
 FUNC_3(VAR_12, VAR_1);

 return VAR_8->n;
}
