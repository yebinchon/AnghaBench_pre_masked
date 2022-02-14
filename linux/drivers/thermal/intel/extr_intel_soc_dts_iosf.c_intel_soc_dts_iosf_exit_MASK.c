
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_dts_sensors {int * soc_dts; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_soc_dts_sensors*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ) ;

void FUNC_3(struct intel_soc_dts_sensors *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  FUNC_2(&VAR_1->soc_dts[VAR_2], 0, 0, 0);
  FUNC_2(&VAR_1->soc_dts[VAR_2], 1, 0, 0);
  FUNC_1(&VAR_1->soc_dts[VAR_2]);
 }
 FUNC_0(VAR_1);
}
