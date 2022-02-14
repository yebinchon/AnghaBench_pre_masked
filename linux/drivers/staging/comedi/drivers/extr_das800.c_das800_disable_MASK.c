
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->spinlock, VAR_2);

 FUNC_0(VAR_1, 0x0, VAR_0);
 FUNC_2(&VAR_1->spinlock, VAR_2);
}
