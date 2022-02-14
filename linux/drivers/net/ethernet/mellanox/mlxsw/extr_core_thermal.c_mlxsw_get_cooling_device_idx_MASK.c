
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {int type; } ;
struct mlxsw_thermal {struct thermal_cooling_device** cdevs; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_thermal *VAR_3,
     struct thermal_cooling_device *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_3->cdevs[VAR_5] == VAR_4)
   return VAR_5;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (FUNC_1(VAR_4->type, VAR_2[VAR_5],
       sizeof(VAR_4->type)))
   return 0;
 }

 return -VAR_0;
}
