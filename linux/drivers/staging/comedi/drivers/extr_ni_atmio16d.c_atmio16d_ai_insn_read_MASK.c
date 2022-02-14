
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct atmio16d_private* private; } ;
struct atmio16d_private {scalar_t__ adc_coding; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
     struct comedi_subdevice *VAR_6,
     struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 struct atmio16d_private *VAR_9 = VAR_5->private;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_0(VAR_7->chanspec);
 VAR_12 = FUNC_1(VAR_7->chanspec);







 FUNC_4(VAR_11 | (VAR_12 << 6), VAR_5->iobase + VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_7->n; VAR_10++) {

  FUNC_4(0, VAR_5->iobase + VAR_2);


  VAR_13 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, 0);
  if (VAR_13)
   return VAR_13;


  VAR_8[VAR_10] = FUNC_3(VAR_5->iobase + VAR_0);

  if (VAR_9->adc_coding == VAR_3)
   VAR_8[VAR_10] ^= 0x800;
 }

 return VAR_10;
}
