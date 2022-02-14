
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int adcsr; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_3, int VAR_4,
     unsigned int *VAR_5)
{
 struct dt282x_private *VAR_6 = VAR_3->private;
 int VAR_7;

 FUNC_5(VAR_1 | FUNC_4(VAR_4),
      VAR_3->iobase + VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  unsigned int VAR_8 = FUNC_0(VAR_5[VAR_7]);
  unsigned int VAR_9 = FUNC_1(VAR_5[VAR_7]);

  FUNC_5(VAR_6->adcsr |
       FUNC_3(VAR_9) |
       FUNC_2(VAR_8),
       VAR_3->iobase + VAR_0);
 }
 FUNC_5(FUNC_4(VAR_4), VAR_3->iobase + VAR_2);
}
