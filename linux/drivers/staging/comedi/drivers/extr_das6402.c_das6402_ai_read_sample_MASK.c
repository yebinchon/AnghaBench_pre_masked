
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1->iobase + VAR_0);
 if (VAR_2->maxdata == 0x0fff)
  VAR_3 >>= 4;
 return VAR_3;
}
