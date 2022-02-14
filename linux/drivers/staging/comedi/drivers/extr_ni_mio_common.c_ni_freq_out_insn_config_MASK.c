
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int clock_and_fout; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5,
       struct comedi_subdevice *VAR_6,
       struct comedi_insn *VAR_7,
       unsigned int *VAR_8)
{
 struct ni_private *VAR_9 = VAR_5->private;

 switch (VAR_8[0]) {
 case 130:
  switch (VAR_8[1]) {
  case 129:
   VAR_9->clock_and_fout &= ~VAR_2;
   break;
  case 128:
   VAR_9->clock_and_fout |= VAR_2;
   break;
  default:
   return -VAR_0;
  }
  FUNC_0(VAR_5, VAR_9->clock_and_fout, VAR_1);
  break;
 case 131:
  if (VAR_9->clock_and_fout & VAR_2) {
   VAR_8[1] = 128;
   VAR_8[2] = VAR_4;
  } else {
   VAR_8[1] = 129;
   VAR_8[2] = VAR_3 * 2;
  }
  break;
 default:
  return -VAR_0;
 }
 return VAR_7->n;
}
