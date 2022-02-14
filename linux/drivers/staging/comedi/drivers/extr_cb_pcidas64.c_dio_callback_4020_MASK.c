
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
        int VAR_1, int VAR_2, int VAR_3, unsigned long VAR_4)
{
 struct pcidas64_private *VAR_5 = VAR_0->private;

 if (VAR_1) {
  FUNC_1(VAR_3, VAR_5->main_iobase + VAR_4 + 2 * VAR_2);
  return 0;
 }
 return FUNC_0(VAR_5->main_iobase + VAR_4 + 2 * VAR_2);
}
