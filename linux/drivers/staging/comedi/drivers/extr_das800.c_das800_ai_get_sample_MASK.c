
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->iobase + VAR_0);
 unsigned int VAR_4 = FUNC_0(VAR_2->iobase + VAR_1);

 return (VAR_4 << 8) | VAR_3;
}
