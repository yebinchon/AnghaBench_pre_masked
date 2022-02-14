
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

int FUNC_3(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6,
     int (*VAR_7)(struct comedi_device *VAR_8,
        struct comedi_subdevice *VAR_9,
        struct comedi_insn *VAR_10,
        unsigned long VAR_11),
     unsigned long VAR_12)
{
 unsigned long VAR_13 = VAR_3 + FUNC_1(VAR_0);
 int VAR_14;

 while (FUNC_2(VAR_3, VAR_13)) {
  VAR_14 = VAR_7(VAR_4, VAR_5, VAR_6, VAR_12);
  if (VAR_14 != -VAR_1)
   return VAR_14;
  FUNC_0();
 }
 return -VAR_2;
}
