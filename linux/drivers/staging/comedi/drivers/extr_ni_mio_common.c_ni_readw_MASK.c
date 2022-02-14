
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; scalar_t__ mmio; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_0, int VAR_1)
{
 if (VAR_0->mmio)
  return FUNC_1(VAR_0->mmio + VAR_1);

 return FUNC_0(VAR_0->iobase + VAR_1);
}
