
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_3 (struct comedi_device*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3,
        unsigned int *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_3->chanspec);
 VAR_7 = FUNC_2(VAR_3->chanspec);

 VAR_8 = FUNC_0(VAR_3->chanspec);

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++)
  VAR_4[VAR_5] = FUNC_3(VAR_1, VAR_0, VAR_6, VAR_7);

 return VAR_5;
}
