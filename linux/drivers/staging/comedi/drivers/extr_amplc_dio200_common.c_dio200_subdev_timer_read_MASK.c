
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {unsigned int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3,
        unsigned int *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++)
  VAR_4[VAR_5] = FUNC_0(VAR_1, VAR_0);
 return VAR_5;
}
