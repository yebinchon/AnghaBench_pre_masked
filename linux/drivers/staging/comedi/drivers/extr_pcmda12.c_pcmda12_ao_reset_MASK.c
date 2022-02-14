
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_chan; ++VAR_2) {
  FUNC_1(0, VAR_0->iobase + (VAR_2 * 2));
  FUNC_1(0, VAR_0->iobase + (VAR_2 * 2) + 1);
 }

 FUNC_0(VAR_0->iobase);
}
