
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_2,
     unsigned int *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  unsigned int VAR_6 = FUNC_0(VAR_3[VAR_5]);
  unsigned int VAR_7 = FUNC_1(VAR_3[VAR_5]);

  FUNC_4(VAR_5, VAR_2->iobase + VAR_0);
  FUNC_4(FUNC_2(VAR_6) | FUNC_3(VAR_7),
       VAR_2->iobase + VAR_1);
 }
}
