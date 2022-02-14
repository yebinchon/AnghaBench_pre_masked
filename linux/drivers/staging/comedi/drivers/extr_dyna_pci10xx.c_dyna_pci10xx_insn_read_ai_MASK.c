
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dyna_pci10xx_private {int mutex; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct dyna_pci10xx_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;
 unsigned int* VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4,
         unsigned int *VAR_5)
{
 struct dyna_pci10xx_private *VAR_6 = VAR_2->private;
 int VAR_7;
 u16 VAR_8 = 0;
 int VAR_9 = 0;
 unsigned int VAR_10, VAR_11;


 VAR_10 = FUNC_0(VAR_4->chanspec);
 VAR_11 = VAR_1[FUNC_1((VAR_4->chanspec))];

 FUNC_4(&VAR_6->mutex);

 for (VAR_7 = 0; VAR_7 < VAR_4->n; VAR_7++) {

  FUNC_7();
  FUNC_6(0x0000 + VAR_11 + VAR_10, VAR_2->iobase + 2);
  FUNC_8(10, 20);

  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0, 0);
  if (VAR_9)
   break;


  VAR_8 = FUNC_3(VAR_2->iobase);

  VAR_8 &= 0x0FFF;
  VAR_5[VAR_7] = VAR_8;
 }
 FUNC_5(&VAR_6->mutex);


 return VAR_9 ? VAR_9 : VAR_7;
}
