
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_5 ;
 int FUNC_5 (struct comedi_device*,int,int) ;
 int FUNC_6 (struct comedi_device*,unsigned int,int) ;
 int FUNC_7 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       struct comedi_insn *VAR_8,
       unsigned int *VAR_9)
{
 unsigned int VAR_10 = FUNC_1(VAR_8->chanspec);
 int VAR_11;
 int VAR_12;
 int VAR_13;

 switch (VAR_9[0]) {
 case 132:
  VAR_13 = FUNC_6(VAR_6, VAR_10, 0);
  if (VAR_13 < 0)
   return VAR_13;

  if (VAR_9[1] > 0xffff)
   return -VAR_1;
  VAR_13 = FUNC_5(VAR_6, FUNC_2(VAR_10), VAR_9[1]);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_6(VAR_6, VAR_10, 1);
  if (VAR_13 < 0)
   return VAR_13;
  break;
 case 131:
  VAR_13 = FUNC_6(VAR_6, VAR_10, 0);
  if (VAR_13 < 0)
   return VAR_13;
  break;
 case 128:
  VAR_13 = FUNC_6(VAR_6, VAR_10, 0);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_11 = FUNC_7(VAR_9[1], VAR_9[2]);
  VAR_12 = FUNC_7(VAR_9[3], VAR_9[4]);
  if (VAR_11 < 0 || VAR_12 < 0)
   return -VAR_1;
  if ((VAR_11 * VAR_5) != VAR_9[2] ||
      (VAR_12 * VAR_5) != VAR_9[4]) {
   VAR_9[2] = VAR_11 * VAR_5;
   VAR_9[4] = VAR_12 * VAR_5;
   return -VAR_0;
  }
  VAR_13 = FUNC_5(VAR_6, FUNC_3(VAR_10), VAR_11);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_13 = FUNC_5(VAR_6, FUNC_4(VAR_10), VAR_12);
  if (VAR_13 < 0)
   return VAR_13;
  break;
 case 130:
  VAR_11 = FUNC_5(VAR_6, VAR_4,
         FUNC_3(VAR_10));
  VAR_12 = FUNC_5(VAR_6, VAR_4,
         FUNC_4(VAR_10));
  if (VAR_11 < 0 || VAR_12 < 0)
   return -VAR_2;

  VAR_9[1] = VAR_11 * VAR_5;
  VAR_9[2] = VAR_12 * VAR_5;
  break;
 case 129:
  VAR_13 = FUNC_5(VAR_6, VAR_4,
      VAR_3);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_9[1] = (VAR_13 & FUNC_0(VAR_10)) ? 1 : 0;
  break;
 default:
  return -VAR_1;
 }

 return VAR_8->n;
}
