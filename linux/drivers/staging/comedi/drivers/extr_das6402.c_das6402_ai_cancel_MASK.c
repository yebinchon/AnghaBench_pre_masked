
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3)
{
 FUNC_0(VAR_1, VAR_2->iobase + VAR_0);

 return 0;
}
