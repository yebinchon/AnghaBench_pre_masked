
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int reset; int * intr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct enic*) ;
 unsigned int FUNC_1 (struct enic*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct enic *VAR_3 = VAR_2;
 unsigned int VAR_4 = FUNC_1(VAR_3);

 FUNC_3(&VAR_3->intr[VAR_4]);

 if (FUNC_0(VAR_3))

  FUNC_2(&VAR_3->reset);

 return VAR_0;
}
