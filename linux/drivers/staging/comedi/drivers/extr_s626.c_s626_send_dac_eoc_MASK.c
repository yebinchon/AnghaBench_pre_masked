
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;





__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8,
        struct comedi_insn *VAR_9,
        unsigned long VAR_10)
{
 unsigned int VAR_11;

 switch (VAR_10) {
 case 129:
  VAR_11 = FUNC_0(VAR_7->mmio + VAR_4);
  if (!(VAR_11 & VAR_2))
   return 0;
  break;
 case 128:
  VAR_11 = FUNC_0(VAR_7->mmio + VAR_5);
  if (VAR_11 & VAR_6)
   return 0;
  break;
 case 131:
  VAR_11 = FUNC_0(VAR_7->mmio + VAR_3);
  if (!(VAR_11 & 0xff000000))
   return 0;
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_7->mmio + VAR_3);
  if (VAR_11 & 0xff000000)
   return 0;
  break;
 default:
  return -VAR_1;
 }
 return -VAR_0;
}
