
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ plx9080_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 struct pcidas64_private *VAR_3 = VAR_2->private;
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_3->plx9080_iobase + VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_1(VAR_2, 0, VAR_4);

 FUNC_0(VAR_2, 0);
}
