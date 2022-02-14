
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int clock_ns; unsigned int pwm_up_count; unsigned int pwm_down_count; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;





 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_2 ;
 int FUNC_4 (struct comedi_device*,unsigned int*) ;
 int FUNC_5 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 struct ni_private *VAR_7 = VAR_3->private;
 unsigned int VAR_8, VAR_9;

 switch (VAR_6[0]) {
 case 128:
  switch (VAR_6[1]) {
  case 131:
   VAR_8 = FUNC_0(VAR_6[2],
           VAR_7->clock_ns);
   break;
  case 132:
   VAR_8 = VAR_6[2] / VAR_7->clock_ns;
   break;
  case 130:
   VAR_8 =
       FUNC_1(VAR_6[2], VAR_7->clock_ns);
   break;
  default:
   return -VAR_1;
  }
  switch (VAR_6[3]) {
  case 131:
   VAR_9 = FUNC_0(VAR_6[4],
             VAR_7->clock_ns);
   break;
  case 132:
   VAR_9 = VAR_6[4] / VAR_7->clock_ns;
   break;
  case 130:
   VAR_9 =
       FUNC_1(VAR_6[4], VAR_7->clock_ns);
   break;
  default:
   return -VAR_1;
  }
  if (VAR_8 * VAR_7->clock_ns != VAR_6[2] ||
      VAR_9 * VAR_7->clock_ns != VAR_6[4]) {
   VAR_6[2] = VAR_8 * VAR_7->clock_ns;
   VAR_6[4] = VAR_9 * VAR_7->clock_ns;
   return -VAR_0;
  }
  FUNC_5(VAR_3, FUNC_2(VAR_8) |
          FUNC_3(VAR_9),
     VAR_2);
  VAR_7->pwm_up_count = VAR_8;
  VAR_7->pwm_down_count = VAR_9;
  return 5;
 case 129:
  return FUNC_4(VAR_3, VAR_6);
 default:
  return -VAR_1;
 }
 return 0;
}
