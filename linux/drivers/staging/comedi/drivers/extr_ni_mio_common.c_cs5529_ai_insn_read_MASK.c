
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,unsigned short*) ;
 int FUNC_2 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4,
          unsigned int *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned short VAR_8;
 unsigned int VAR_9;
 const unsigned int VAR_10 = 0x1000;







 if (VAR_4->chanspec & VAR_0)
  VAR_9 = VAR_10;
 else
  VAR_9 = FUNC_0(VAR_4->chanspec);
 FUNC_2(VAR_2, VAR_9, VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++) {
  VAR_7 = FUNC_1(VAR_2, &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5[VAR_6] = VAR_8;
 }
 return VAR_4->n;
}
