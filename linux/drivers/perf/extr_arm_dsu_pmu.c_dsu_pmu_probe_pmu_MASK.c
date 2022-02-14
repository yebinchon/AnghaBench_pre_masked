
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dsu_pmu {int num_counters; int cpmceid_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct dsu_pmu *VAR_3)
{
 u64 VAR_4;
 u32 VAR_5[2];

 VAR_4 = (FUNC_2() >> VAR_1) &
      VAR_0;

 if (FUNC_0(VAR_4 > 31))
  VAR_4 = 31;
 VAR_3->num_counters = VAR_4;
 if (!VAR_3->num_counters)
  return;
 VAR_5[0] = FUNC_1(0);
 VAR_5[1] = FUNC_1(1);
 FUNC_3(VAR_3->cpmceid_bitmap, VAR_5,
     VAR_2);
}
