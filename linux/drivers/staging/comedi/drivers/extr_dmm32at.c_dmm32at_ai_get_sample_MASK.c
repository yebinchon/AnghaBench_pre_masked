
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_2->iobase + VAR_0);
 VAR_4 |= (FUNC_1(VAR_2->iobase + VAR_1) << 8);


 return FUNC_0(VAR_3, VAR_4);
}
