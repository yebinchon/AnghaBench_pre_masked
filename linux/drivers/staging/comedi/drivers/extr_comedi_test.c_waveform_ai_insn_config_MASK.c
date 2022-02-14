
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7,
       unsigned int *VAR_8)
{
 if (VAR_8[0] == VAR_1) {




  if (VAR_8[1] == VAR_3) {

   VAR_8[1] = 0;
   VAR_8[2] = VAR_2;
  } else {
   VAR_8[1] = VAR_2;
   if (VAR_8[2] & VAR_4)
    VAR_8[2] = VAR_2;
   else
    VAR_8[2] = 0;
  }
  return 0;
 }

 return -VAR_0;
}
