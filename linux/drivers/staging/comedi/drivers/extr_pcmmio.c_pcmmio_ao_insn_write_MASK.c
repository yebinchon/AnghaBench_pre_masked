
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {unsigned long iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned char FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char FUNC_3 (unsigned int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_5 (unsigned char,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
    struct comedi_subdevice *VAR_8,
    struct comedi_insn *VAR_9,
    unsigned int *VAR_10)
{
 unsigned long VAR_11 = VAR_7->iobase;
 unsigned int VAR_12 = FUNC_0(VAR_9->chanspec);
 unsigned int VAR_13 = FUNC_1(VAR_9->chanspec);
 unsigned char VAR_14 = 0;
 int VAR_15;
 int VAR_16;






 if (VAR_12 > 3) {
  VAR_14 |= FUNC_2(VAR_12 - 4);
  VAR_11 += VAR_0;
 } else {
  VAR_14 |= FUNC_2(VAR_12);
 }


 FUNC_5(FUNC_3(VAR_13), VAR_11 + VAR_4);
 FUNC_5(0, VAR_11 + VAR_5);
 FUNC_5(VAR_14 | VAR_3, VAR_11 + VAR_1);

 VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_6, 0);
 if (VAR_15)
  return VAR_15;

 for (VAR_16 = 0; VAR_16 < VAR_9->n; VAR_16++) {
  unsigned int VAR_17 = VAR_10[VAR_16];


  FUNC_5(VAR_17 & 0xff, VAR_11 + VAR_4);
  FUNC_5((VAR_17 >> 8) & 0xff, VAR_11 + VAR_5);
  FUNC_5(VAR_14 | VAR_2,
       VAR_11 + VAR_1);

  VAR_15 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_6, 0);
  if (VAR_15)
   return VAR_15;

  VAR_8->readback[VAR_12] = VAR_17;
 }

 return VAR_9->n;
}
