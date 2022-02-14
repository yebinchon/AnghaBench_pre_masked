
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int io_bidirection_pin_reg; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2, int VAR_3)
{
 struct ni_private *VAR_4 = VAR_2->private;

 if (VAR_3 >= FUNC_0(0)) {

  VAR_3 -= FUNC_0(0);
 }
 return VAR_4->io_bidirection_pin_reg & (1 << VAR_3) ?
        VAR_1 : VAR_0;
}
