
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {unsigned int* io_cfg; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct comedi_device*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct ni_660x_private *VAR_5 = VAR_2->private;

 if (VAR_3 >= FUNC_0(0))

  VAR_3 -= FUNC_0(0);

 switch (VAR_4) {
 case 129:
  if (VAR_3 < 8)
   return -VAR_1;
  break;
 case 128:
  if (VAR_3 > 31)
   return -VAR_1;
  break;
 default:
  return -VAR_1;
 }

 VAR_5->io_cfg[VAR_3] = VAR_4;
 if (FUNC_1(VAR_2, VAR_3) == VAR_0)
  FUNC_2(VAR_2, VAR_3, VAR_5->io_cfg[VAR_3]);
 return 0;
}
