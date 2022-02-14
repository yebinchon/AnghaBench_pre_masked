
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg_avg_cap {scalar_t__* time_stamps; scalar_t__* samples; int avg; scalar_t__ sum; scalar_t__ nbr_samples; scalar_t__ pos; } ;
struct ab8500_fg {struct ab8500_fg_avg_cap avg_cap; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ab8500_fg *VAR_1)
{
 int VAR_2;
 struct ab8500_fg_avg_cap *VAR_3 = &VAR_1->avg_cap;

 VAR_3->pos = 0;
 VAR_3->nbr_samples = 0;
 VAR_3->sum = 0;
 VAR_3->avg = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3->samples[VAR_2] = 0;
  VAR_3->time_stamps[VAR_2] = 0;
 }
}
