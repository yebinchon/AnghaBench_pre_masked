
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2)
{






 FUNC_1(FUNC_0(0), VAR_1->iobase + VAR_0);

 return 0;
}
