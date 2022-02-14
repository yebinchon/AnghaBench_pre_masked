
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int* io_cfg; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 struct ni_660x_private *VAR_2 = VAR_0->private;

 if (VAR_1 >= FUNC_0(0))

  VAR_1 -= FUNC_0(0);

 return VAR_2->io_cfg[VAR_1];
}
