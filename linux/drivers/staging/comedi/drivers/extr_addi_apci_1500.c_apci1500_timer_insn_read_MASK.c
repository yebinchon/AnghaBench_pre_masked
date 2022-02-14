
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_2, FUNC_1(VAR_6));
 VAR_7 &= VAR_0;
 VAR_7 |= VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4->n; VAR_9++) {
  FUNC_5(VAR_2, VAR_7, FUNC_1(VAR_6));

  VAR_8 = FUNC_4(VAR_2, FUNC_3(VAR_6)) << 8;
  VAR_8 |= FUNC_4(VAR_2, FUNC_2(VAR_6));

  VAR_5[VAR_9] = VAR_8;
 }

 return VAR_4->n;
}
