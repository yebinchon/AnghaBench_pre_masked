
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; int class_dev; int attached; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 unsigned int VAR_8;

 if (!VAR_7->attached) {
  FUNC_1(VAR_7->class_dev, "premature interrupt\n");
  return VAR_3;
 }





 FUNC_4(&VAR_7->spinlock);

 VAR_8 = FUNC_2(VAR_7->iobase + VAR_1);


 if (!(VAR_8 & VAR_2)) {
  FUNC_5(&VAR_7->spinlock);
  return VAR_4;
 }

 FUNC_3(VAR_0 & ~VAR_2, VAR_7->iobase + VAR_1);

 FUNC_0(VAR_7);

 FUNC_5(&VAR_7->spinlock);
 return VAR_3;
}
