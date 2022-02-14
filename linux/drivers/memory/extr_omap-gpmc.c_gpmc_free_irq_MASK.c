
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_device {int nirqs; int irq; } ;


 int FUNC_0 (int ,struct gpmc_device*) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct gpmc_device *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->irq, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->nirqs; VAR_2++)
  FUNC_1(FUNC_3(VAR_0, VAR_2));

 FUNC_2(VAR_0);
 VAR_0 = ((void*)0);

 return 0;
}
