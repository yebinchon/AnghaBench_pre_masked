
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4)
{
 FUNC_0(VAR_0, VAR_3->iobase + VAR_1);
 FUNC_1(VAR_3, VAR_2);
 return 0;
}
