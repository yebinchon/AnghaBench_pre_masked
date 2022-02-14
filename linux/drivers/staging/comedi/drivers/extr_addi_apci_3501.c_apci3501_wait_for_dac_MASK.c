
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2)
{
 unsigned int VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_2->iobase + VAR_0);
 } while (!(VAR_3 & VAR_1));

 return 0;
}
