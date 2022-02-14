
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; int irq; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, unsigned int VAR_4)
{
 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  VAR_4 |= FUNC_0(VAR_3->irq);

 FUNC_1(VAR_4, VAR_3->iobase + VAR_2);
}
