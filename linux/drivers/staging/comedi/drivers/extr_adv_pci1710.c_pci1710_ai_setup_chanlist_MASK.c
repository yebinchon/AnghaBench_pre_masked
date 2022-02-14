
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci1710_private {unsigned int* act_chanlist; int mux_scan; scalar_t__ unipolar_gain; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct pci1710_private* private; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_6 (unsigned int) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_7 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          unsigned int *VAR_7,
          unsigned int VAR_8,
          unsigned int VAR_9)
{
 struct pci1710_private *VAR_10 = VAR_5->private;
 unsigned int VAR_11 = FUNC_1(VAR_7[0]);
 unsigned int VAR_12 = FUNC_1(VAR_7[VAR_9 - 1]);
 unsigned int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  unsigned int VAR_14 = FUNC_1(VAR_7[VAR_13]);
  unsigned int VAR_15 = FUNC_2(VAR_7[VAR_13]);
  unsigned int VAR_16 = FUNC_0(VAR_7[VAR_13]);
  unsigned int VAR_17 = 0;

  if (VAR_16 == VAR_0)
   VAR_17 |= VAR_2;
  if (FUNC_7(VAR_6, VAR_15)) {
   VAR_17 |= VAR_4;
   VAR_15 -= VAR_10->unipolar_gain;
  }
  VAR_17 |= FUNC_6(VAR_15);


  FUNC_8(FUNC_3(VAR_14), VAR_5->iobase + VAR_1);
  FUNC_8(VAR_17, VAR_5->iobase + VAR_3);

  VAR_10->act_chanlist[VAR_13] = VAR_14;
 }
 for ( ; VAR_13 < VAR_8; VAR_13++)
  VAR_10->act_chanlist[VAR_13] = FUNC_1(VAR_7[VAR_13]);


 VAR_10->mux_scan = FUNC_5(VAR_11) |
       FUNC_4(VAR_12);
 FUNC_8(VAR_10->mux_scan, VAR_5->iobase + VAR_1);
}
