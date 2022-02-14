
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {scalar_t__ iobase2; int fifo_buf; } ;
struct comedi_device {struct das1800_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1)
{
 struct das1800_private *VAR_2 = VAR_1->private;

 FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_2->fifo_buf);
  if (VAR_2->iobase2)
   FUNC_3(VAR_2->iobase2, VAR_0);
 }
 FUNC_0(VAR_1);
}
