
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_gc_kthread {unsigned int min_sleep_time; unsigned int max_sleep_time; unsigned int no_gc_sleep_time; } ;



__attribute__((used)) static inline void FUNC_0(struct f2fs_gc_kthread *VAR_0,
       unsigned int *VAR_1)
{
 unsigned int VAR_2 = VAR_0->min_sleep_time;
 unsigned int VAR_3 = VAR_0->max_sleep_time;

 if (*VAR_1 == VAR_0->no_gc_sleep_time)
  return;

 if ((long long)*VAR_1 + (long long)VAR_2 > (long long)VAR_3)
  *VAR_1 = VAR_3;
 else
  *VAR_1 += VAR_2;
}
