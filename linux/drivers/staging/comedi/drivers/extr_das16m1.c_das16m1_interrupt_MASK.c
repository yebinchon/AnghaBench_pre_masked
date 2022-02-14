
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; int class_dev; int attached; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 int VAR_8;
 struct comedi_device *VAR_9 = VAR_7;

 if (!VAR_9->attached) {
  FUNC_1(VAR_9->class_dev, "premature interrupt\n");
  return VAR_4;
 }

 FUNC_4(&VAR_9->spinlock);

 VAR_8 = FUNC_2(VAR_9->iobase + VAR_3);

 if ((VAR_8 & (VAR_1 | VAR_2)) == 0) {
  FUNC_1(VAR_9->class_dev, "spurious interrupt\n");
  FUNC_5(&VAR_9->spinlock);
  return VAR_5;
 }

 FUNC_0(VAR_9, VAR_8);


 FUNC_3(0, VAR_9->iobase + VAR_0);

 FUNC_5(&VAR_9->spinlock);
 return VAR_4;
}
