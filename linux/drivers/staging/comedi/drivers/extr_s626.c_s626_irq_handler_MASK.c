
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct comedi_device {int spinlock; scalar_t__ mmio; int attached; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct comedi_device *VAR_6 = VAR_5;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;

 if (!VAR_6->attached)
  return VAR_1;

 FUNC_4(&VAR_6->spinlock, VAR_7);


 VAR_9 = FUNC_0(VAR_6->mmio + VAR_2);


 VAR_8 = FUNC_0(VAR_6->mmio + VAR_3);


 FUNC_6(0, VAR_6->mmio + VAR_2);


 FUNC_6(VAR_8, VAR_6->mmio + VAR_3);

 switch (VAR_8) {
 case 128:
  if (FUNC_3(VAR_6))
   VAR_9 = 0;
  break;
 case 129:

  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
  break;
 }


 FUNC_6(VAR_9, VAR_6->mmio + VAR_2);

 FUNC_5(&VAR_6->spinlock, VAR_7);
 return VAR_0;
}
