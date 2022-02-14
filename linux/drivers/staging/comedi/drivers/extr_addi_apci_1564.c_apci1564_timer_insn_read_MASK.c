
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct apci1564_private* private; } ;
struct apci1564_private {scalar_t__ timer; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3,
        unsigned int *VAR_4)
{
 struct apci1564_private *VAR_5 = VAR_1->private;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_3->n; VAR_6++)
  VAR_4[VAR_6] = FUNC_0(VAR_5->timer + VAR_0);

 return VAR_3->n;
}
