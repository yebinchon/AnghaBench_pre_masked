
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_9,
      struct comedi_subdevice *VAR_10,
      struct comedi_insn *VAR_11, unsigned int *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 unsigned int VAR_16 = FUNC_1(VAR_11->chanspec);
 unsigned int VAR_17 = FUNC_0(VAR_11->chanspec);
 unsigned int VAR_18 = FUNC_2(VAR_11->chanspec);
 unsigned int VAR_19 = 0;


 if (VAR_17 == VAR_2)
  VAR_19 |= VAR_6;

 if (VAR_18 >= 1)
  VAR_18++;
 FUNC_5(VAR_19 | (VAR_18 & 0x03), VAR_9->iobase + VAR_5);



 FUNC_5(VAR_16 | 0x80, VAR_9->iobase + VAR_3);

 FUNC_6(2);


 for (VAR_13 = 0; VAR_13 < VAR_11->n; VAR_13++) {

  FUNC_5(0x00, VAR_9->iobase + VAR_4);
  FUNC_5(0x30, VAR_9->iobase + VAR_7);
  FUNC_5(0x00, VAR_9->iobase + VAR_0);

  FUNC_4(VAR_9->iobase + VAR_1);

  FUNC_5(0x32, VAR_9->iobase + VAR_7);


  VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_8, 0);
  if (VAR_15)
   return VAR_15;


  VAR_14 = FUNC_4(VAR_9->iobase + VAR_1);


  VAR_14 &= 0x0fff;
  VAR_14 ^= 0x0800;
  VAR_12[VAR_13] = VAR_14;
 }
 return VAR_13;
}
