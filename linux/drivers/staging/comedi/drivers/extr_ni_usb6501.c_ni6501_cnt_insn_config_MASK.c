
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      struct comedi_insn *VAR_6,
      unsigned int *VAR_7)
{
 int VAR_8;
 u32 VAR_9 = 0;

 switch (VAR_7[0]) {
 case 130:
  VAR_8 = FUNC_0(VAR_4, VAR_1, ((void*)0));
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_4, VAR_2, ((void*)0));
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_4, VAR_2, ((void*)0));
  if (VAR_8)
   break;
  VAR_8 = FUNC_0(VAR_4, VAR_3, &VAR_9);
  break;
 default:
  return -VAR_0;
 }

 return VAR_8 ? VAR_8 : VAR_6->n;
}
