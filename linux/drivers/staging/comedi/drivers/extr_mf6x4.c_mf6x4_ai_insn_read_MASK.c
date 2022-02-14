
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6->chanspec);
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;


 FUNC_5(FUNC_1(VAR_8), VAR_4->mmio + VAR_0);

 for (VAR_11 = 0; VAR_11 < VAR_6->n; VAR_11++) {

  FUNC_4(VAR_4->mmio + VAR_2);

  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_3, 0);
  if (VAR_10)
   return VAR_10;


  VAR_9 = FUNC_4(VAR_4->mmio + VAR_1);
  VAR_9 &= VAR_5->maxdata;

  VAR_7[VAR_11] = FUNC_2(VAR_5, VAR_9);
 }

 FUNC_5(0x0, VAR_4->mmio + VAR_0);

 return VAR_6->n;
}
