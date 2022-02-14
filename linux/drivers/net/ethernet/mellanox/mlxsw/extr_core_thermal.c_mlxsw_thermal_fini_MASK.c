
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_thermal {TYPE_1__* bus_info; int ** cdevs; int * tzdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlxsw_thermal*) ;
 int FUNC_1 (struct mlxsw_thermal*) ;
 int FUNC_2 (struct mlxsw_thermal*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlxsw_thermal *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 if (VAR_1->tzdev) {
  FUNC_4(VAR_1->tzdev);
  VAR_1->tzdev = ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->cdevs[VAR_2]) {
   FUNC_3(VAR_1->cdevs[VAR_2]);
   VAR_1->cdevs[VAR_2] = ((void*)0);
  }
 }

 FUNC_0(VAR_1->bus_info->dev, VAR_1);
}
