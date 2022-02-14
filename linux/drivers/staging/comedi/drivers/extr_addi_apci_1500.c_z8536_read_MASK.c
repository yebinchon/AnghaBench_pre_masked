
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_2(&VAR_1->spinlock, VAR_3);
 FUNC_1(VAR_2, VAR_1->iobase + VAR_0);
 VAR_4 = FUNC_0(VAR_1->iobase + VAR_0);
 FUNC_3(&VAR_1->spinlock, VAR_3);

 return VAR_4;
}
