
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3)
{
 unsigned int VAR_4;


 VAR_4 = FUNC_0(VAR_3->iobase + VAR_1);
 VAR_4 |= VAR_2 | VAR_0;
 FUNC_1(VAR_4, VAR_3->iobase + VAR_1);


 FUNC_1(0x0, VAR_3->iobase + VAR_1);
}
