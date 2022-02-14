
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         struct comedi_insn *VAR_7,
         unsigned int *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7->chanspec);
 unsigned int VAR_10 = FUNC_1(VAR_9);
 unsigned int VAR_11 = VAR_6->readback[VAR_9];
 int VAR_12;
 int VAR_13;

 FUNC_3(VAR_10, VAR_5->iobase + VAR_0);
 VAR_10 |= VAR_1;

 for (VAR_13 = 0; VAR_13 < VAR_7->n; VAR_13++) {
  VAR_11 = VAR_8[VAR_13];
  FUNC_3(VAR_11, VAR_5->iobase + VAR_2);
  FUNC_3(VAR_10, VAR_5->iobase + VAR_0);


  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_4, VAR_3);
  if (VAR_12)
   return VAR_12;
 }
 VAR_6->readback[VAR_9] = VAR_11;

 return VAR_7->n;
}
