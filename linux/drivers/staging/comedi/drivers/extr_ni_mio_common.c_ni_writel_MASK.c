
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; scalar_t__ mmio; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0, unsigned int VAR_1, int VAR_2)
{
 if (VAR_0->mmio)
  FUNC_1(VAR_1, VAR_0->mmio + VAR_2);
 else
  FUNC_0(VAR_1, VAR_0->iobase + VAR_2);
}
