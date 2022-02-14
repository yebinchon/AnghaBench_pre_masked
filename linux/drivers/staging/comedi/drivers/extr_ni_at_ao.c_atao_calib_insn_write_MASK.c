
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6,
     unsigned int *VAR_7)
{
 unsigned int VAR_8 = FUNC_2(VAR_6->chanspec);

 if (VAR_6->n) {
  unsigned int VAR_9 = VAR_7[VAR_6->n - 1];
  unsigned int VAR_10 = ((VAR_8 & 0x7) << 8) | VAR_9;
  unsigned int VAR_11;
  int VAR_12;



  for (VAR_12 = FUNC_1(10); VAR_12; VAR_12 >>= 1) {
   VAR_11 = (VAR_12 & VAR_10) ? VAR_3 : 0;

   FUNC_3(VAR_11, VAR_4->iobase + VAR_1);
   FUNC_3(VAR_11 | VAR_2,
        VAR_4->iobase + VAR_1);
  }


  FUNC_3(FUNC_0(VAR_8), VAR_4->iobase + VAR_1);
  FUNC_3(VAR_0, VAR_4->iobase + VAR_1);

  VAR_5->readback[VAR_8] = VAR_9;
 }

 return VAR_6->n;
}
