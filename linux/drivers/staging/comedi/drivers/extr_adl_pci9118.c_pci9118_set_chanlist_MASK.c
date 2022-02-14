
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {unsigned int ai_ctrl; unsigned int softsshsample; unsigned int softsshhold; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct pci9118_private* private; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_6,
     struct comedi_subdevice *VAR_7,
     int VAR_8, unsigned int *VAR_9,
     int VAR_10, int VAR_11)
{
 struct pci9118_private *VAR_12 = VAR_6->private;
 unsigned int VAR_13 = FUNC_1(VAR_9[0]);
 unsigned int VAR_14 = FUNC_2(VAR_9[0]);
 unsigned int VAR_15 = FUNC_0(VAR_9[0]);
 unsigned int VAR_16 = 0x00;
 unsigned int VAR_17;
 int VAR_18;






 VAR_12->ai_ctrl = 0;
 if (FUNC_5(VAR_7, VAR_14))
  VAR_12->ai_ctrl |= VAR_5;
 if (VAR_15 == VAR_0)
  VAR_12->ai_ctrl |= VAR_3;
 FUNC_6(VAR_12->ai_ctrl, VAR_6->iobase + VAR_4);


 FUNC_6(2, VAR_6->iobase + VAR_1);
 FUNC_6(0, VAR_6->iobase + VAR_1);
 FUNC_6(1, VAR_6->iobase + VAR_1);


 if (VAR_10) {
  VAR_17 = FUNC_3(VAR_13) |
        FUNC_4(VAR_14);
  VAR_16 = VAR_12->softsshsample;
  for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
   FUNC_6(VAR_17 | VAR_16, VAR_6->iobase + VAR_2);
   VAR_16 = VAR_12->softsshhold;
  }
 }


 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  unsigned int VAR_19 = FUNC_1(VAR_9[VAR_18]);
  unsigned int VAR_20 = FUNC_2(VAR_9[VAR_18]);

  VAR_17 = FUNC_3(VAR_19) |
        FUNC_4(VAR_20);
  FUNC_6(VAR_17 | VAR_16, VAR_6->iobase + VAR_2);
 }


 if (VAR_11) {
  VAR_17 = FUNC_3(VAR_13) |
        FUNC_4(VAR_14);
  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
   FUNC_6(VAR_17 | VAR_16, VAR_6->iobase + VAR_2);
 }

 FUNC_6(0, VAR_6->iobase + VAR_1);

}
