
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2->iobase + VAR_1) |
       (FUNC_0(VAR_2->iobase + VAR_0) << 8);

 return VAR_4 & VAR_3->maxdata;
}
