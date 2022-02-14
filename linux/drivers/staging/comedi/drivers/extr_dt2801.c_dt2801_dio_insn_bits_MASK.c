
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,unsigned int*) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4,
    unsigned int *VAR_5)
{
 int VAR_6 = (VAR_3 == &VAR_2->subdevices[3]) ? 1 : 0;
 unsigned int VAR_7 = 0;

 if (FUNC_0(VAR_3, VAR_5)) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_3(VAR_2, VAR_6);
  FUNC_3(VAR_2, VAR_3->state);
 }

 FUNC_2(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_6);
 FUNC_1(VAR_2, &VAR_7);

 VAR_5[1] = VAR_7;

 return VAR_4->n;
}
