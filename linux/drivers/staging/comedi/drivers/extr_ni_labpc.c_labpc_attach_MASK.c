
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ irq; } ;
struct comedi_devconfig {unsigned int* options; } ;


 int FUNC_0 (struct comedi_device*,unsigned int,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_2 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0, struct comedi_devconfig *VAR_1)
{
 unsigned int VAR_2 = VAR_1->options[1];
 unsigned int VAR_3 = VAR_1->options[2];
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1->options[0], 0x20);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2, 0);
 if (VAR_4)
  return VAR_4;

 if (VAR_0->irq)
  FUNC_2(VAR_0, VAR_3);

 return 0;
}
