
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int an_trig_etc_reg; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_4,
       struct comedi_device *VAR_5)
{
 struct ni_private *VAR_6 = VAR_5->private;

 switch (VAR_4) {
 case 0:
  VAR_6->an_trig_etc_reg &= ~VAR_1;
  break;
 case 1:
  VAR_6->an_trig_etc_reg &= ~VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_5, VAR_6->an_trig_etc_reg, VAR_3);
 return 0;
}
