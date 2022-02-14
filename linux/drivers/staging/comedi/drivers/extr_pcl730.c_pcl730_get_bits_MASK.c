
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; scalar_t__ private; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1->private;
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_0->iobase + VAR_2);
 if (VAR_1->n_chan > 8)
  VAR_3 |= (FUNC_0(VAR_0->iobase + VAR_2 + 1) << 8);
 if (VAR_1->n_chan > 16)
  VAR_3 |= (FUNC_0(VAR_0->iobase + VAR_2 + 2) << 16);
 if (VAR_1->n_chan > 24)
  VAR_3 |= (FUNC_0(VAR_0->iobase + VAR_2 + 3) << 24);

 return VAR_3;
}
