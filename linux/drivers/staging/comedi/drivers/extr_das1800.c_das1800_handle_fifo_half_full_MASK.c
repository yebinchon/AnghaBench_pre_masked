
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {int fifo_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct das1800_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 struct das1800_private *VAR_4 = VAR_2->private;
 unsigned int VAR_5 = FUNC_1(VAR_3, VAR_1 / 2);

 FUNC_2(VAR_2->iobase + VAR_0, VAR_4->fifo_buf, VAR_5);
 FUNC_0(VAR_3, VAR_4->fifo_buf, VAR_5);
}
