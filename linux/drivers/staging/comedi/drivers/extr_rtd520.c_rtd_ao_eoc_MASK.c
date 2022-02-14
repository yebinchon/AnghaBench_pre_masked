
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5,
        struct comedi_insn *VAR_6,
        unsigned long VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6->chanspec);
 unsigned int VAR_9 = (VAR_8 == 0) ? VAR_1 : VAR_2;
 unsigned int VAR_10;

 VAR_10 = FUNC_1(VAR_4->mmio + VAR_3);
 if (VAR_10 & VAR_9)
  return 0;
 return -VAR_0;
}
