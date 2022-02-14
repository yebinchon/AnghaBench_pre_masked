
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_1,
       unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_1(VAR_2);

 FUNC_4(FUNC_2(VAR_3) | FUNC_3(VAR_4),
      VAR_1->iobase + VAR_0);
}
