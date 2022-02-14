
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_1 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4,
         unsigned int *VAR_5)
{
 if (FUNC_0(VAR_3, VAR_5))
  FUNC_2(VAR_2, VAR_1, 0, VAR_3->state);

 VAR_5[1] = FUNC_1(VAR_2, VAR_0, 0, 0);

 return VAR_4->n;
}
