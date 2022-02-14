
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4,
     unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_7 = VAR_3->n_chan - 1;
 unsigned long VAR_8;
 int VAR_9;


 FUNC_5(&VAR_2->spinlock, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_4->n; VAR_9++) {
  unsigned int VAR_10 = VAR_5[VAR_9];

  VAR_3->readback[VAR_6] = VAR_10;

  VAR_10 = FUNC_2(VAR_3, VAR_10);


  FUNC_3(FUNC_1(VAR_6), VAR_2->iobase + VAR_1);
  FUNC_4(VAR_10, VAR_2->iobase + VAR_0);


  if (VAR_6 != VAR_7) {
   VAR_10 = FUNC_2(VAR_3, VAR_3->readback[VAR_7]);

   FUNC_3(FUNC_1(VAR_7), VAR_2->iobase + VAR_1);
   FUNC_4(VAR_10, VAR_2->iobase + VAR_0);
  }
 }
 FUNC_6(&VAR_2->spinlock, VAR_8);

 return VAR_4->n;
}
