
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6,
      struct comedi_insn *VAR_7,
      unsigned int *VAR_8)
{
 unsigned int VAR_9 = FUNC_2(VAR_7->chanspec);
 unsigned int VAR_10 = FUNC_3(VAR_7->chanspec);
 unsigned int VAR_11 = FUNC_0(VAR_9);
 int VAR_12;
 int VAR_13;







 if (VAR_10) {
  FUNC_6(0, VAR_5->iobase + VAR_1);
 } else {
  VAR_11 |= VAR_2;
  FUNC_6(VAR_0,
       VAR_5->iobase + VAR_1);
 }

 for (VAR_13 = 0; VAR_13 < VAR_7->n; VAR_13++) {
  unsigned int VAR_14 = VAR_8[VAR_13];

  if (VAR_10 == 1) {
   if (VAR_8[VAR_13] > 0x1fff) {
    FUNC_5(VAR_5->class_dev,
     "Unipolar resolution is only 13-bits\n");
    return -VAR_4;
   }
  }

  VAR_12 = FUNC_4(VAR_5);
  if (VAR_12)
   return VAR_12;

  FUNC_6(VAR_11 | FUNC_1(VAR_14),
       VAR_5->iobase + VAR_3);

  VAR_6->readback[VAR_9] = VAR_14;
 }

 return VAR_7->n;
}
