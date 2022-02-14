
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int an_trig_etc_reg; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static inline int FUNC_2(unsigned int VAR_3,
          struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 unsigned int VAR_6 = VAR_5->an_trig_etc_reg;

 switch (VAR_3) {
 case 0:
  if (VAR_6 & VAR_1)
   return FUNC_0(VAR_6);
  break;
 case 1:
  if (VAR_6 & VAR_2)
   return FUNC_1(VAR_6);
  break;
 }

 return -VAR_0;
}
