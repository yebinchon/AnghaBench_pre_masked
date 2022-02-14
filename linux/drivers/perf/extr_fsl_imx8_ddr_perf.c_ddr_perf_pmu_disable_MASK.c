
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct ddr_pmu {int ** events; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ddr_pmu*,int ,size_t,int) ;
 struct ddr_pmu* FUNC_1 (struct pmu*) ;

__attribute__((used)) static void FUNC_2(struct pmu *VAR_2)
{
 struct ddr_pmu *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->events[VAR_0] == ((void*)0))
  FUNC_0(VAR_3,
          VAR_1,
          VAR_0,
          0);
}
