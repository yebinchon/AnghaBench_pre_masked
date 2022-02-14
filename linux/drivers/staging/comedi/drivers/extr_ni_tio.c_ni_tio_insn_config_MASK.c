
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {unsigned int counter_index; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ni_gpct*,int,unsigned int) ;
 int FUNC_4 (struct ni_gpct*,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct ni_gpct*,unsigned int,unsigned int*) ;
 unsigned int FUNC_6 (struct ni_gpct*,int ) ;
 int FUNC_7 (struct ni_gpct*) ;
 int FUNC_8 (struct ni_gpct*,unsigned int,unsigned int) ;
 int FUNC_9 (struct ni_gpct*,unsigned int) ;
 int FUNC_10 (struct ni_gpct*,unsigned int,unsigned int) ;
 int FUNC_11 (struct ni_gpct*,unsigned int,unsigned int) ;

int FUNC_12(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_insn *VAR_5,
         unsigned int *VAR_6)
{
 struct ni_gpct *VAR_7 = VAR_4->private;
 unsigned int VAR_8 = VAR_7->counter_index;
 unsigned int VAR_9;
 int VAR_10 = 0;

 switch (VAR_6[0]) {
 case 130:
  VAR_10 = FUNC_9(VAR_7, VAR_6[1]);
  break;
 case 137:
  VAR_10 = FUNC_3(VAR_7, 1, VAR_6[1]);
  break;
 case 136:
  VAR_10 = FUNC_3(VAR_7, 0, 0);
  break;
 case 134:
  VAR_6[1] = 0;
  VAR_9 = FUNC_6(VAR_7, FUNC_2(VAR_8));
  if (VAR_9 & FUNC_0(VAR_8)) {
   VAR_6[1] |= VAR_0;
   if (VAR_9 & FUNC_1(VAR_8))
    VAR_6[1] |= VAR_1;
  }
  VAR_6[2] = VAR_0 | VAR_1;
  break;
 case 131:
  VAR_10 = FUNC_8(VAR_7, VAR_6[1], VAR_6[2]);
  break;
 case 135:
  VAR_10 = FUNC_4(VAR_7, &VAR_6[1], &VAR_6[2]);
  break;
 case 129:
  VAR_10 = FUNC_10(VAR_7, VAR_6[1], VAR_6[2]);
  break;
 case 133:
  VAR_10 = FUNC_5(VAR_7, VAR_6[1], &VAR_6[2]);
  break;
 case 128:
  VAR_10 = FUNC_11(VAR_7, VAR_6[1], VAR_6[2]);
  break;
 case 132:
  FUNC_7(VAR_7);
  break;
 default:
  return -VAR_2;
 }
 return VAR_10 ? VAR_10 : VAR_5->n;
}
