
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_pmu {int num_counters; } ;



int FUNC_0(struct hisi_pmu *VAR_0, int VAR_1)
{
 return VAR_1 >= 0 && VAR_1 < VAR_0->num_counters;
}
