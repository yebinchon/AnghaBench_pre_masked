
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc236_private {int enable_irq; scalar_t__ lcr_iobase; } ;
struct comedi_device {struct pc236_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*,int ) ;

__attribute__((used)) static bool FUNC_2(struct comedi_device *VAR_2)
{
 struct pc236_private *VAR_3 = VAR_2->private;


 if (!(FUNC_0(VAR_3->lcr_iobase + VAR_0) &
       VAR_1))
  return 0;

 FUNC_1(VAR_2, VAR_3->enable_irq);
 return 1;
}
