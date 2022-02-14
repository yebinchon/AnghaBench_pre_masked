
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {unsigned long iobase; unsigned long iolen; } ;


 int FUNC_0 (struct comedi_device*,unsigned long,unsigned long) ;

int FUNC_1(struct comedi_device *VAR_0,
     unsigned long VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == 0) {
  VAR_0->iobase = VAR_1;
  VAR_0->iolen = VAR_2;
 }

 return VAR_3;
}
