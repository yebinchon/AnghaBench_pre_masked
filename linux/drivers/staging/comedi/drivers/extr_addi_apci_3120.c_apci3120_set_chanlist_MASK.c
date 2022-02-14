
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct apci3120_private {int ctrl; int mode; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6,
      int VAR_7, unsigned int *VAR_8)
{
 struct apci3120_private *VAR_9 = VAR_5->private;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  unsigned int VAR_11 = FUNC_5(VAR_8[VAR_10]);
  unsigned int VAR_12 = FUNC_6(VAR_8[VAR_10]);
  unsigned int VAR_13;

  VAR_13 = FUNC_2(VAR_11) |
        FUNC_0(VAR_12) |
        FUNC_1(VAR_10);

  if (FUNC_7(VAR_6, VAR_12))
   VAR_13 |= VAR_1;

  FUNC_9(VAR_13, VAR_5->iobase + VAR_0);
 }


 FUNC_8(VAR_5->iobase + VAR_4);


 VAR_9->ctrl = FUNC_4(VAR_7 - 1) | FUNC_3(0);
 FUNC_9(VAR_9->ctrl, VAR_5->iobase + VAR_2);


 if (VAR_7 > 1)
  VAR_9->mode |= VAR_3;
}
