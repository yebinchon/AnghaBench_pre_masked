
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {unsigned long iobase; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_3 (unsigned int) ;
 unsigned char VAR_2 ;
 unsigned char FUNC_4 (unsigned int) ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_6 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned char,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_8,
          struct comedi_subdevice *VAR_9,
          struct comedi_insn *VAR_10,
          unsigned int *VAR_11)
{
 unsigned long VAR_12 = VAR_8->iobase;
 unsigned int VAR_13 = FUNC_1(VAR_10->chanspec);
 unsigned int VAR_14 = FUNC_2(VAR_10->chanspec);
 unsigned int VAR_15 = FUNC_0(VAR_10->chanspec);
 unsigned char VAR_16 = 0;
 unsigned int VAR_17;
 int VAR_18;
 int VAR_19;
 if (VAR_13 > 7) {
  VAR_13 -= 8;
  VAR_12 += VAR_1;
 }

 if (VAR_15 == VAR_0)
  VAR_16 |= VAR_4;
 if (VAR_13 % 2)
  VAR_16 |= VAR_2;
 VAR_16 |= FUNC_3(VAR_13 / 2);
 VAR_16 |= FUNC_4(VAR_14);

 FUNC_9(VAR_16, VAR_12 + VAR_3);

 VAR_18 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_7, 0);
 if (VAR_18)
  return VAR_18;

 VAR_17 = FUNC_8(VAR_12 + VAR_5);
 VAR_17 |= FUNC_8(VAR_12 + VAR_6) << 8;

 for (VAR_19 = 0; VAR_19 < VAR_10->n; VAR_19++) {
  FUNC_9(VAR_16, VAR_12 + VAR_3);

  VAR_18 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_7, 0);
  if (VAR_18)
   return VAR_18;

  VAR_17 = FUNC_8(VAR_12 + VAR_5);
  VAR_17 |= FUNC_8(VAR_12 + VAR_6) << 8;


  if (FUNC_6(VAR_9, VAR_14))
   VAR_17 = FUNC_5(VAR_9, VAR_17);

  VAR_11[VAR_19] = VAR_17;
 }

 return VAR_10->n;
}
