
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_gc_kthread {unsigned int min_sleep_time; unsigned int no_gc_sleep_time; unsigned int max_sleep_time; } ;



__attribute__((used)) static inline void FUNC_0(struct f2fs_gc_kthread *VAR_0,
       unsigned int *VAR_1)
{
 unsigned int VAR_2 = VAR_0->min_sleep_time;

 if (*VAR_1 == VAR_0->no_gc_sleep_time)
  *VAR_1 = VAR_0->max_sleep_time;

 if ((long long)*VAR_1 - (long long)VAR_2 < (long long)VAR_2)
  *VAR_1 = VAR_2;
 else
  *VAR_1 -= VAR_2;
}
