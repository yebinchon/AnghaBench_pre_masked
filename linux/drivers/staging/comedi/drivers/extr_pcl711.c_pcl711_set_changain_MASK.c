
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    unsigned int VAR_8)
{
 unsigned int VAR_9 = FUNC_1(VAR_8);
 unsigned int VAR_10 = FUNC_2(VAR_8);
 unsigned int VAR_11 = FUNC_0(VAR_8);
 unsigned int VAR_12 = 0;

 FUNC_5(FUNC_3(VAR_10), VAR_6->iobase + VAR_1);

 if (VAR_7->n_chan > 8) {

  if (VAR_11 == VAR_0) {
   VAR_9 &= 0x7;
   VAR_12 |= VAR_4;
  } else {
   if (VAR_9 < 8)
    VAR_12 |= VAR_2;
   else
    VAR_12 |= VAR_3;
  }
 }
 FUNC_5(VAR_12 | FUNC_4(VAR_9), VAR_6->iobase + VAR_5);
}
