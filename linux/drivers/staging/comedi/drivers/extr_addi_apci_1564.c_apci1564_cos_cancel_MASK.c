
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5)
{
 FUNC_1(0x0, VAR_4->iobase + VAR_3);
 FUNC_0(VAR_4->iobase + VAR_2);
 FUNC_1(0x0, VAR_4->iobase + VAR_0);
 FUNC_1(0x0, VAR_4->iobase + VAR_1);

 return 0;
}
