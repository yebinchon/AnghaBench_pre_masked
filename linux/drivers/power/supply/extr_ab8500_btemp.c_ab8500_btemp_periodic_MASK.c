
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_btemp {int btemp_periodic_work; int btemp_wq; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct ab8500_btemp *VAR_0,
 bool VAR_1)
{
 FUNC_1(VAR_0->dev, "Enable periodic temperature measurements: %d\n",
  VAR_1);




 FUNC_0(&VAR_0->btemp_periodic_work);

 if (VAR_1)
  FUNC_2(VAR_0->btemp_wq, &VAR_0->btemp_periodic_work, 0);
}
