
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


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct comedi_device*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 struct ni_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9, VAR_10;

 switch (VAR_7[0]) {
 case 128:
  switch (VAR_7[1]) {
  case 131:
   VAR_9 = FUNC_0(VAR_7[2],
           VAR_8->clock_ns);
   break;
  case 132:
   VAR_9 = VAR_7[2] / VAR_8->clock_ns;
   break;
  case 130:
   VAR_9 =
       FUNC_1(VAR_7[2], VAR_8->clock_ns);
   break;
  default:
   return -VAR_1;
  }
  switch (VAR_7[3]) {
  case 131:
   VAR_10 = FUNC_0(VAR_7[4],
             VAR_8->clock_ns);
   break;
  case 132:
   VAR_10 = VAR_7[4] / VAR_8->clock_ns;
   break;
  case 130:
   VAR_10 =
       FUNC_1(VAR_7[4], VAR_8->clock_ns);
   break;
  default:
   return -VAR_1;
  }
  if (VAR_9 * VAR_8->clock_ns != VAR_7[2] ||
      VAR_10 * VAR_8->clock_ns != VAR_7[4]) {
   VAR_7[2] = VAR_9 * VAR_8->clock_ns;
   VAR_7[4] = VAR_10 * VAR_8->clock_ns;
   return -VAR_0;
  }
  FUNC_3(VAR_4, VAR_9, VAR_2);
  VAR_8->pwm_up_count = VAR_9;
  FUNC_3(VAR_4, VAR_10, VAR_3);
  VAR_8->pwm_down_count = VAR_10;
  return 5;
 case 129:
  return FUNC_2(VAR_4, VAR_7);
 default:
  return -VAR_1;
 }
 return 0;
}
