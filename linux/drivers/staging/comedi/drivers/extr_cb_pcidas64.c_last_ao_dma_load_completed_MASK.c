
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {unsigned int* ao_buffer_bus_addr; scalar_t__ plx9080_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 unsigned short FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3)
{
 struct pcidas64_private *VAR_4 = VAR_3->private;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned short VAR_7;

 VAR_5 = FUNC_0(VAR_3);
 VAR_7 = FUNC_1(VAR_4->plx9080_iobase + VAR_1);
 if ((VAR_7 & VAR_0) == 0)
  return 0;

 VAR_6 =
  FUNC_2(VAR_4->plx9080_iobase + VAR_2);
 if (VAR_6 != VAR_4->ao_buffer_bus_addr[VAR_5])
  return 0;

 return 1;
}
