
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct ab8500_fg_avg_cap {int* samples; int nbr_samples; int sum; int avg; scalar_t__ pos; int * time_stamps; } ;
struct ab8500_fg {struct ab8500_fg_avg_cap avg_cap; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ab8500_fg *VAR_1, int VAR_2)
{
 int VAR_3;
 time64_t VAR_4;
 struct ab8500_fg_avg_cap *VAR_5 = &VAR_1->avg_cap;

 VAR_4 = FUNC_0();

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5->samples[VAR_3] = VAR_2;
  VAR_5->time_stamps[VAR_3] = VAR_4;
 }

 VAR_5->pos = 0;
 VAR_5->nbr_samples = VAR_0;
 VAR_5->sum = VAR_2 * VAR_0;
 VAR_5->avg = VAR_2;
}
