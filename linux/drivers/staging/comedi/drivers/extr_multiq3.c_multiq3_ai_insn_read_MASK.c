
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8,
    unsigned int *VAR_9)
{
 unsigned int VAR_10 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_5(VAR_6, VAR_2 | FUNC_1(VAR_10));

 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5,
        VAR_3);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < VAR_8->n; VAR_13++) {
  FUNC_6(0, VAR_6->iobase + VAR_0);

  VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5,
         VAR_4);
  if (VAR_12)
   return VAR_12;


  VAR_11 = FUNC_4(VAR_6->iobase + VAR_1) << 8;
  VAR_11 |= FUNC_4(VAR_6->iobase + VAR_1);
  VAR_11 &= VAR_7->maxdata;


  VAR_9[VAR_13] = FUNC_2(VAR_7, VAR_11);
 }

 return VAR_8->n;
}
